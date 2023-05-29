# Model-Based Systems Engineering

## No Magic

Das Hauptmodell des SE-Demonstrators besteht aus drei Hauptpaketen, die in verschiedene Unterpakete unterteilt werden können. Diese drei Hauptpakete sind die "Functional Architecture" (Funktionale Architektur), die "Mission & Stakeholder Analysis" (Analyse der Mission und Interessenvertreter) und die "System Architecture" (Systemarchitektur).

Die Functionale Architecture lässt sich in zwei Unterpakete unterteilen, nämlich die Funktionale Analyse und die Systemfunktionen. Die Funktionale Analyse betrachtet alle erforderlichen funktionalen Schritte, um eine normale Operation mit dem Gimbal auszuführen, wie zum Beispiel die Anpassung der Bewegung, das Setzen eines Stabilisierungsmodus und die Überprüfung beim Start des Gimbals, ob dieser ordnungsgemäß versorgt wird.

Die Systemfunktionen lassen sich in High-Level-Verhalten und Sub-Level-Verhalten aufteilen. Das High-Level-Verhalten umfasst die normale Operation des Gimbals, bei der er wie in der Funktionalen Architektur beschrieben den Stabilisierungsmodus auswählt und anhand der Gimbal-Bewegung eine Anpassung vornimmt, um die Plattform entgegen der Bewegung zu stabilisieren. Ein weiteres High-Level-Verhalten ist der Startup Check, der auch in der Funktionalen Analyse beschrieben wird.

Das Sub-Level-Verhalten spiegelt die einzelnen Schritte des High-Level-Verhaltens wider. Im Falle der normalen Operation gibt es drei Sub-Level-Verhalten. Eines davon ist das Setzen des Stabilisierungsmodus und die erforderlichen Schritte, die beim Auswahl des Stabilisierungsmodus eingeleitet werden. Ein anderes Sub-Level-Verhalten ist beispielsweise die Erfassung der Gimbal-Bewegung und die erforderlichen Schritte dafür. Das letzte Sub-Level-Verhalten ist die eigentliche Stabilisierung, also die Kompensation der Eingangsbewegung und die darauf basierende Anpassung der Position.

Beim Startup Check werden vier Sub-Level-Verhalten dargestellt. In einem Verhalten wird der Batteriestatus überprüft, in einem anderen wird überprüft, ob eine externe Spannungsquelle angeschlossen ist. Für beide Fälle gibt es ein Sub-Level-Verhalten, das den Gimbal mit Strom versorgt, je nachdem, welcher der beiden Fälle vorliegt.




