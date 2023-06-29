# Elektronik des Gimbal

## Einführung
Um die Elektronik des Gimbals zu implementieren, d.h. der Servomotor lenkt in die entgegengesetzte Richtung aus, wenn sich die Position des Objekts ändert, um eine Position des Objekts zu erreichen, die sich nicht mit dem Gimbal verändert. 

In diesem Abschnitt werden verschiedene Chiptypen (Arduino Nano und ESP8266) und drei-Achsen-Positionssensor (MPU650) zur Steuerung der Servomotoren verwendet. Der Steuercode wird in die verschiedenen Chiptypen geschrieben und der Sensor wird über Kabel mit den Chips verbunden. Um den ordnungsgemäßen Betrieb des Sensors zu gewährleisten, wird die Spannung der Batterie über den Buckconverter so eingestellt, dass an beiden Enden des Sensors die richtige Spannung anliegt.

Die wichtigsten Schritte sind wie folgt:
Auswahl der Chips: Für die Steuerung des Servomotors werden verschiedene Chiptypen verwendet. Zu diesen Chips gehören der Arduino Nano und der ESP8266, die beide über zahlreiche Funktionen verfügen und gut kompatibel sind.

Sensoranschluss: Der MPU650-Sensor wird über ein Kabel mit dem Chip verbunden. Die Hauptfunktion des Sensors ist es, genaue 3-Achsen-Lage- und Bewegungsdaten für die präzise Steuerung des Servomotors zu liefern.

Leistungsanpassung: Um den korrekten Betrieb des Sensors sicherzustellen, wird die Batteriespannung mit einem Buckconverter angepasst. Dadurch wird sichergestellt, dass der Sensor innerhalb des geeigneten Spannungsbereichs arbeitet, um genaue Daten zu liefern.

Schreiben des Steuercodes: Der für die Steuerung des Servomotors erforderliche Code wird in die verschiedenen Chiptypen geschrieben. Durch das Schreiben des entsprechenden Codes können die Position und die Bewegung des Servomotors auf der Grundlage der vom Sensor gelieferten Daten gesteuert werden.

Motoranschluss: Schließlich wird der Servomotor über ein Kabel an den Chip angeschlossen. Dadurch kann der Chip Steuersignale an den Motor senden, was eine präzise Steuerung des Servomotors ermöglicht.

Der spezifische Schaltplan sieht wie folgt aus:
![Gimbal](../images/Schaltungsplan.png)

## Arduino Nano
Der Arduino Nano ist ein Open-Source-Breadboard-Mikrocontroller-Board, das auf dem Microchip ATmega328P-Mikrocontroller basiert. Der Arduino Nano kann mit der integrierten Entwicklungsumgebung (IDE) der Arduino-Software programmiert werden, die für alle Arduino-Boards gleich ist und sowohl online als auch offline läuft. 


### Arduino Code Beschreibung

Um die Gimbal-Funktionalität mit dem Nano-Chip zu implementieren, muss der Code kompiliert und in die Arduino-Software hochgeladen werden. Der Code ist im Ordner arduino_gimbal zu finden. Bevor dieser Code verwendet werden kann, ist es wichtig, die grundlegende Funktionalität des Codes zu verstehen. Während des gesamten Prozesses muss der Code Sensordaten vom MPU6050-Sensor lesen und diese Daten zur Steuerung des Servos verwenden. Es werden bestimmte Pins definiert und die Servos an diese Pins angeschlossen. 
</br>
1,Der Interrupt-Pin wird auf Pin 2 festgelegt. 
</br>
2,Der Servo servo0 wird an Pin 10 angeschlossen.
</br>
3,Der Servo servo1 wird an Pin 9 angeschlossen.
</br>
4,Der Servo servo2 wird an Pin 8 angeschlossen.
</br>

```cpp
#define OUTPUT_READABLE_YAWPITCHROLL
#define INTERRUPT_PIN 2  
  servo0.attach(10);
  servo1.attach(9);
  servo2.attach(8);
```

Die Aufgabe eines Interrupts ist es, dafür zu sorgen, dass der Prozessor schnell auf wichtige Ereignisse reagiert. Wenn ein bestimmtes Signal erkannt wird, unterbricht ein Interrupt die Arbeit des Prozessors und führt einen Code aus, der auf den externen Stimulus reagiert, der dem Arduino zugeführt wird. Das bedeutet, der Gimbal kann dann den Interrupt behandeln, die entsprechenden Servos steuern und die gewünschte, präzise, schnelle und reaktionsfähige Aktion ausführen.
</br>
Dann werden aus den Sensordaten die Quaternion und der Gravitationsvektor berechnet. Die Yaw-, Pitch- und Roll-Werte werden dann in Grad umgerechnet. Diese Werte werden dann zur Steuerung des Servos eingesetzt.

```cpp
    mpu.dmpGetQuaternion(&q, fifoBuffer);
    mpu.dmpGetGravity(&gravity, &q);
    mpu.dmpGetYawPitchRoll(ypr, &q, &gravity);
```

Wenn j kleiner oder gleich 300 ist, wird der aktuelle Wert der Yaw-Achse (ypr[0]) in der Variable correct gespeichert. Dadurch wird der aktuelle Yaw-Wert erfasst, solange j kleiner oder gleich 300 ist. Dieser Wert beginnt nicht bei 0 wie die Werte für Pitch und Roll, sondern ist immer ein Zufallswert.

</br>

```cpp
    if (j <= 300) {
      correct = ypr[0];
      j++; 
    }
```

Nach 300 Messungen wird der Yaw-Wert (ypr[0]) durch Subtraktion des zuvor gespeicherten Referenzwerts  angepasst. Dadurch wird der Yaw-winkel auf 0 Grad gesetzt. Die Werte für Yaw, Pitch und Roll von -90 bis +90 Grad werden dann auf Werte von 0 bis 180 für das Antriebsservo abgebildet. Mit der Schreibfunktion werden diese Werte schließlich als Steuersignale an das Servo gesendet.

```cpp
else {
      ypr[0] = ypr[0] - correct;
    
    int servo0Value = map(ypr[0], -90, 90, 0, 180);
    int servo1Value = map(ypr[1], -90, 90, 0, 180);
    int servo2Value = map(ypr[2], -90, 90, 180, 0);

    servo0.write(servo0Value);
    servo1.write(servo1Value);
    servo2.write(servo2Value);
}
```
<<<<<<< HEAD
=======
### Aufgetretene Probleme und Lösungen
## Problem:
Beim Kompilieren des Codes für Arduino, der auf dem MPU6050_DMP6-Beispiel in Jeff Rowbergs i2cdevlib-Bibliothek basiert, müssen die I2Cdev- und MPU6050-Bibliotheken in den entsprechenden Pfaden installiert werden.
</br>
Lösung:
Um das Problem zu beheben, werden folgende Schritte durchgeführt:
</br>
Der Datei-Explorer wird auf Ihrem Computer geöffnet und zum Ordner navigiert, in dem die Arduino-Bibliotheken installiert sind. Der Pfad wurde unter C:\Users\cxp\AppData\Local\Arduino15\libraries gefunden.
</br>
Die erforderlichen Bibliotheken werden heruntergeladen:

Die "I2Cdev.h"-Bibliothek kann von folgendem Link heruntergeladen werden: https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/I2Cdev
</br>
Die "MPU6050_6Axis_MotionApps20.h"-Bibliothek kann von folgendem Link heruntergeladen werden: https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050
Die heruntergeladenen ZIP-Archive werden extrahiert und der Inhalt jeder Bibliothek wird in einen separaten Unterordner in Ihrem Arduino-Bibliotheksverzeichnis kopiert. Dabei können die Unterordner "I2Cdev" und "MPU6050" verwendet werden.

Die Arduino-IDE wird gestartet (sofern bereits geöffnet) oder erneut geöffnet. Nun kann der Code, der auf dem MPU6050_DMP6-Beispiel basiert, kompiliert und ausgeführt werden, ohne dass der Compiler Fehlermeldungen aufgrund fehlender Bibliotheken anzeigt.
## ESP8266 NodeMCU
>>>>>>> a2f7c8637009b2d8d9fc2991ee88afed025db2ca

## ESP8266 NodeMCU

## Der Funktionierte Teil 

Wir haben versucht, mit einigen Funktionen dieses Codes zu experimentieren, um die Funktionalität des ESP8266 zu überprüfen. Zum Beispiel haben wir versucht, das Servo direkt über den ESP8266 anzusteuern, um sicherzustellen, dass es ordnungsgemäß funktioniert. Außerdem haben wir versucht, die Daten vom MPU6050 mithilfe des ESP8266 über I2C zu lesen und auf dem Display anzuzeigen, um die Funktionalität des MPU6050 und die Datenkommunikation zwischen dem ESP8266 und dem MPU6050 zu überprüfen. Da dieser Code nicht direkt auf den ESP8266 angewendet werden kann, haben wir diese Anpassungen vorgenommen, um die verschiedenen Komponenten zu testen.

## ESP8266 Steuerung des Servos


## ESP8266 Daten von der MPU6050 lesen

Der entsprechende Code wurde in unsere Dateien hochgeladen. Link:[_MPU6050_Display-Code_](https://gitlab.fk4.hs-bremen.de/soclab/hil/gimbal/-/blob/main/arduino_gimbal/MPU6050_Display.ino)
Dieser Code ist eine einfache OLED-Demonstration für die Beschleunigungsmesserwerte des Adafruit MPU6050-Sensors. Es werden die Bibliotheken `"Adafruit_MPU6050.h"`, `"Adafruit_SSD1306.h"` und `"Adafruit_Sensor.h"` verwendet.

Zu Beginn des Codes werden die benötigten Bibliotheken und Objekte initialisiert. Der MPU6050 und das Display werden konfiguriert. Die Verbindung mit dem MPU6050 wird überprüft und das Display initialisiert.

Die `setup()` initialisiert die serielle Kommunikation, überprüft die Initialisierung des MPU6050 und initialisiert das Display. Es wird außerdem die Textgröße, die Textfarbe und die Displayrotation festgelegt.

Die `loop()` wird wiederholt ausgeführt. In jeder Schleife werden die Beschleunigungsmesser- und Gyroskopdaten vom MPU6050 gelesen. Diese Daten werden sowohl über die serielle Schnittstelle als auch auf dem Display angezeigt. Die Anzeige auf dem Display wird gelöscht und die Beschleunigungsmesser- und Gyroskopwerte werden aktualisiert. Danach werden sie auf dem Display angezeigt. Es gibt auch eine kurze Verzögerung am Ende jeder Schleife.

Das Tutorial finden Sie hier: [_MPU6050_Display-Code_](https://randomnerdtutorials.com/esp8266-nodemcu-mpu-6050-accelerometer-gyroscope-arduino/) 

## Der nicht Funktionierte Teil 

DIY Arduino Gimbal - Self-Stabilizing Plaftorm Code von Arduino IDE kompiliert, kann erfolgreich in die ESP8266 Chip zu schreiben, aber das Servo nicht mit der Drehung des MPU6050 zu bewegen, und nicht die Funktion des Gimbal erreichen.
</br>
Es kann mehrere Gründe geben, warum die Funktion des Gimbals nicht erreicht wird.
Der Code basiert auf den Bibliotheken "I2Cdev" und "MPU6050_6Axis_MotionApps20", die möglicherweise nicht mit dem ESP8266 kompatibel sind. Es müssen Bibliotheken verwendet werden, die mit dem ESP8266 kompatibel sind und den Code entsprechend anpassen.Der ESP8266 kann im Vergleich zu Arduino-Boards begrenzte Ressourcen haben. Daher muss es sichergestellt, dass der Code und die Bibliotheken, die die verwendet werden, für die ESP8266-Plattform optimiert sind.

## Bibliotheks-Kompatibilität

Die MPU6050-Bibliothek, die speziell für den ESP8266 entwickelt wurde, zu suchen und zu verwenden. Dadurch wird sichergestellt, dass die Bibliothek mit dem ESP8266 kompatibel ist.</br>

Zum Beispiel erhältlich über folgenden link: [_ESP8266 MPU6050 library_](https://github.com/emanbuc/ESP8266_MPU6050) 

</br>
 Einige der darin enthaltenen Beispiele können als Referenz verwendet werden, um die darin enthaltenen Funktionen und Funktionen entsprechend zu modifizieren, damit sie mit dem MPU6050-Sensor kommunizieren und Daten verarbeiten können.
 </br>

Der ESP8266 liest Daten, indem er über das I2C-Protokoll Befehle an den MPU6050 sendet. Der MPU6050 speichert seine internen Beschleunigungs- und Gyroskopdaten in seinen FIFO-Puffern, die der ESP8266 dann über I2C auslesen kann. Diese Daten können vom ESP8266 verarbeitet und zur Steuerung der Bewegung des Gimbals verwendet werden. Daher ist eine I2C-Bibliothek, die für den ESP8266 angepasst werden kann, sehr wichtig. Eine solche Bibliothek ist beispielsweise die <Adafruit_MPU6050.h>, die im [_MPU6050_Display-Code_] verwendet wird.

## Entwicklung des Interruppt PINs

Das Design des Interrupt-Pins und die Verwendung der Interrupt-Handler-Funktion ermöglichen es dem ESP8266, die Verfügbarkeit der MPU6050-Daten rechtzeitig zu erfassen und sie sofort zu verarbeiten, wenn sie bereit sind. Dadurch wird eine effizientere und Echtzeit-Datenverarbeitung ermöglicht.
 </br>

Aber Einstellung Interrupt-Pins für die ESP8266 ist nicht das gleiche wie für den Arduino Nano.
</br>

In  `setup()` kann der Interrupt-Pin mit der Funktion `pinMode()` auf den Eingangsmodus konfiguriert werden.

```cpp
pinMode(2, INPUT);
```

Eine Interrupt-Callback-Funktion. 

Diese Funktion wird aufgerufen, wenn eine Interrupt ausgelöst wird, und wird für die Behandlung von Unterbrechungsereignissen verwendet.In diesem Code wird zum Beispiel eine Funktion `dmpDataReady()` definiert.Diese Funktion erkennt, ob neue Daten für den MPU6050 verfügbar sind.

```cpp
volatile bool mpuInterrupt = false;     // indicates whether MPU interrupt pin has gone high
void dmpDataReady() {
  mpuInterrupt = true;
}
```

In `setup()` wird die Funktion `attachInterrupt()` benutzt, um die Interrupt-Callback-Funktion(`dmpDataReady()`) mit einem Interrupt-Pin zu verknüpfen.Zum Beispiel wird der Interrupt-Pin GPIO2 (entspricht dem Digital Pin 2 des Arduino) mit der Callback-Funktion handleInterrupt() verknüpft, ausgelöst durch eine steigende Flanke.

```cpp
attachInterrupt(digitalPinToInterrupt(2), dmpDataReady, RISING);
```

Wenn die steigende Flanke des InterruptPins der MPU6050 ausgelöst wird, wird die Funktion `dmpDataReady()` aufgerufen. In dieser Funktion wird die Variable `mpuInterrupt` auf true gesetzt, was anzeigt, dass neue Daten verfügbar sind.