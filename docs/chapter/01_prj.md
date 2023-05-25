# Einleitung
## Einführung

In diesem Projekt geht es um die Konzeption und den Bau eines Gimbals, einer selbst stabilisierenden Plattform, die mithilfe von Sensoren und Motoren stabilisiert wird, um eine präzise und ruhige Kameraaufnahme zu ermöglichen. Im Gegensatz zu anderen Gimbals, die oft als fertige Produkte erhältlich sind, werden wir uns in diesem Projekt nicht nur auf die Montage der Bauteile beschränken, sondern uns auch mit der Programmierung und Entwicklung der elektronischen Komponenten befassen. Dazu kommen Aspekte der 3D-Modellierung mit CAD, die es ermöglichen ein 3D-Modell zu erstellen, um die einzelnen Bauteile im Hause zu drucken. Dadurch werden wir in der Lage sein, den Gimbal nach unseren individuellen Anforderungen und Bedürfnissen zu gestalten und anzupassen. Das Projekt basiert auf einem vorherigen Projekt von [_HowToMechatronics_](https://howtomechatronics.com/projects/diy-arduino-gimbal-self-stabilizing-platform/?utm_content=cmp-true), das Ziel ist es auf Grundlage dieses Projektes den Gimbal weiterzuentwickeln und eigene Erfahrungen zu sammeln.
## Theoretische Grundlagen
Für die Theorie des Gimbal-Projekt werden wir im Folgenden einen Grundlegenden Leitfaden zur Entwicklung der Theorie festlegen.

- **Verständnis des Gimbalkonzepts** 
    Zunächst sollte jeder Projektbeteiligte das Konzept und die Funktionsweise eines Gimbals nachvollziehen und verstehen. Was genau macht die Vorrichtung? Welche Bestandteile hat das Gimbal? Wie viele Achsen hat das Gimbal?

- **Festlegung des Ziels**
    Das Ziel des Projekt muss klar definiert sein. Was soll am ende dabei rauskommen? Was für ein Anwendungsszenario ist im Sinn? Somit kann der Umfang des Projekts festgelegt werden.

- **Identifizierung der Verwendeten Hardware**
    Es muss eine Auswahl für jede Hardwarekomponente getroffen werden. Welche Hardwarekomponente bietet welche Vorteile? z.B. ESP im Vergleich zu Arduino. (Hier befinden wir uns Aktuell)

- **Entwurf der Steuereinheit**
    Entwickelt einen Steuerungsalgorithmus, der die Bewegungen der Motoren basierend auf den Sensordaten steuert.

-  **Implementierung der HIL-Simulation**
    HIL ermöglicht uns die Simulation und Überprüfung des Steuerungsalgorithmus in einer realistischen Umgebung, bevor wir ihn auf der tatsächlichen Hardware testet. 

- **Durchführung von Tests und Optmierung**
    Es sollten umfangreiche Tests durchgeführt werden, um die Leistung eures Gimbal-Systems zu bewerten. Außerdem sollte Überprüft werden ob das Gimbal die Plattform stabil hält, unerwünschte Bewegungen minimiert und auf Benutzereingaben reagiert. Falls nötig sollte der Steueralgorithmus basierend auf den Testergebnissen optmiert werden.

- **Dokumentation und Präsentation**
    Zuletzt werden die Ergebnisse Dokumentiert, zusammengefasst und Präsentiert.
