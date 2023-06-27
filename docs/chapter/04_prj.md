# Elektronik des Gimbal
test
## Arduino Nano

## ESP8266 NodeMCU

### Einführung

### Der Funktionierte Teil 

#### ESP8266 Steuerung des Servos

#### ESP8266 Daten von der MPU6050 lesen

### Der nicht Funktionierte Teil 
DIY Arduino Gimbal - Self-Stabilizing Plaftorm Code von arduino ide kompiliert, kann erfolgreich in die esp8266 Chip zu schreiben, aber das Servo nicht mit der Drehung des MPU6050 zu bewegen, und nicht die Funktion des Gimbal erreichen.

#### Auswertung
Es kann mehrere Gründe geben, warum die Funktion des Gimbals nicht erreicht wird.
Der Code basiert auf den Bibliotheken "I2Cdev" und "MPU6050_6Axis_MotionApps20", die möglicherweise nicht mit dem ESP8266 kompatibel sind. Es müssen Bibliotheken verwendet werden, die mit dem ESP8266 kompatibel sind und den Code entsprechend anpassen.Der ESP8266 kann im Vergleich zu Arduino-Boards begrenzte Ressourcen haben. Daher muss es sichergestellt, dass der Code und die Bibliotheken, die Sie verwenden, für die ESP8266-Plattform optimiert sind.
##### Bibliotheks-Kompatibilität

##### Hardware-Einschränkungen

#### Entwicklung des Codes

##### Interruppt PIN