# 3D Druck des Gimbal

## Einführung

Zur erstellung der selbst stabilisierenden Platform, werden die verschiedenen Bauteile des Gimbals mittels 3D Druck erstellt. Diese umfassen das Gehäuse des Microcontrollers, die Platform für die Kamera, sowie die Halter für die Servo-Motoren. 

Um einen erfolgreichen 3D-Druck zu gewährleisten, werden die hierfür vorgesehenen 3D-Druckdateien in fünf Grundstrukturen unterteilt. Die Aufteilung basiert auf der Kameraplattform, den drei Servomotoren - die jeweils eine Achse der Stabilisierung steuern - und dem Verschlussdeckel für das Gehäuse des Microcontrollers.

Dadurch erhält man eine STL-Datei als erste Grundstruktur _(Base 01)_ für den Servomotor, der die Yaw-Drehung steuert, also die Drehung um die z-Achse als Referenzsystem. Eine weiere Grundstruktur _(Base 02)_ ist für den Servomotor, der die Roll-Drehung steuert, was sich auf die x-Achse bezieht. Die dritte Grundstruktur _(Base 03)_ ist für den Pitch-Servomotor, der eine Anpassung in Bezug auf die y-Achse vornimmt. Es ist wichtig zu beachten, dass die Grundstruktur für die Yaw-Anpassung auch als Gehäuse für den Microcontroller dient.

Die folgende Abbildung zeigt die zusammengesetzte Grundstruktur des Gimbals, einschließlich der Servomotoren.

![Gimbal](../images/Gimbal_Platform.png)


<!---

Dont know how to fix - yet

```{image} ../images/Gimbal_Platform.png
:alt: Platform
:class: bg-primary mb-1
:width: 250px
:align: center
```

-->

-------------
## CAD Modellierung

Mit Fusion 360 und Inventor kann man diese 3D-Entwürfe erstellen. Die Programme bieten außerdem die möglichkeit in teams zusammenzuarbeiten, Daten zu verwalten und Simulationen auszuführen, um dadurch Konstruktionen im vorfeld zu validieren.

In unserem Projekt verwenden wir Inventor als CAD-Programm, jedoch besteht die Möglichkeit, das bevorzugte CAD-Programm zur Bearbeitung zu nutzen. Die entsprechenden Inventor-Dateien befinden sich im Ordner _"3d_druck_gimbal"_ und können nach Belieben in andere Formate umgewandelt werden.

__Autodesk Fusion 360__, sowie __Autodesk Inventor__ besitzten eine _kostenlose_ "Campus" Version, welche Kostenlos für Lehrende und Studenten ist. 

Sie unterstützen folgende 3D Druck formate:

| STL(Binär) | STL(ASCII) | 
| :----:     |      :----:|
|         3MF|         OBJ| 

und sind erhältlich über folgenden link: [_Fusion-Download/Inventor-Download_](https://www.autodesk.de/education/edu-software/overview?sorting=featured&filters=individual) 
</br></br>

