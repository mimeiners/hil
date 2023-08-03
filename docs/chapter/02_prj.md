# Model-Based Systems Engineering

Das modellbasierte System-Engineering (MBSE) ist eine formalisierte Methodik, die zur Unterstützung der Anforderungen, des Entwurfs, der Analyse, der Verifizierung und der Validierung im Zusammenhang mit der Entwicklung komplexer Systeme eingesetzt wird. Im Gegensatz zum dokumentenzentrierten Engineering stellt MBSE Modelle in den Mittelpunkt der Systementwicklung. 

MBSE bringt drei Konzepte zusammen: Modell, Systemdenken und Systemtechnik:

Ein Modell:  ist eine vereinfachte Version von etwas - eine grafische, mathematische oder physikalische Darstellung, die die Realität abstrahiert, um eine gewisse Komplexität zu eliminieren. Diese Definition impliziert Formalität oder Regeln bei der Vereinfachung, Darstellung oder Abstraktion. Um ein System zu modellieren, muss ein Systemarchitekt das System mit weniger Details darstellen, so dass seine Struktur und sein Verhalten erkennbar und seine Komplexität beherrschbar ist. Mit anderen Worten: Modelle sollten das System ausreichend darstellen, und das System sollte die Modelle bestätigen.

Systemdenken:  ist eine Art, ein zu betrachtendes System nicht als autarke Einheit, sondern als Teil eines größeren Systems zu sehen. Systemdenken ist nicht dasselbe wie das systematische Befolgen guter Pläne, das Sammeln von Statistiken oder methodisches Vorgehen. Der Systemingenieur beobachtet das System aus der Ferne, erforscht seine Grenzen, seinen Kontext und seinen Lebenszyklus, notiert sein Verhalten und identifiziert Muster. Diese Methode kann dem Ingenieur helfen, Probleme zu erkennen (z. B. fehlende Interaktion, ein fehlender Schritt in einem Prozess, doppelter Aufwand, verpasste Möglichkeiten zur Automatisierung) und die Komplexität eines Systems zu bewältigen. Obwohl Systemingenieure das System zu Beginn zerlegen und analysieren müssen - Teile identifizieren und Verbindungen zwischen ihnen beschreiben -, fügen sie die Teile später wieder zu einem kohärenten Ganzen zusammen. Teile sind nicht nur mit anderen Teilen verbunden, sie sind voneinander abhängig, um richtig zu funktionieren. Beim Systemdenken wird diese Vernetzung betont. Das Verhalten des Systems ergibt sich aus den Aktivitäten der einzelnen Teile des Systems. Wenn der Systemtechniker die Verbindungen des Systems beobachtet, erkennt er Rückkopplungsschleifen und Kausalitätsmuster, die auf den ersten Blick vielleicht nicht sichtbar sind. Systemdenken kann dazu beitragen, Probleme deutlicher zu erkennen und leichter zu identifizieren, das System ins Gleichgewicht zu bringen und die Komplexität des Systems zu bewältigen

Systems Engineering ist ein transdisziplinärer und integrativer Ansatz, der die erfolgreiche Realisierung, Nutzung und Ausmusterung von technischen Systemen unter Verwendung von Systemprinzipien und -konzepten sowie wissenschaftlichen, technologischen und Managementmethoden ermöglicht. Es vereint eine Reihe von Techniken, um sicherzustellen, dass alle Anforderungen durch das entworfene System erfüllt werden. Es konzentriert sich auf die Architektur, Implementierung, Integration, Analyse und Verwaltung eines Systems während seines Lebenszyklus. Dabei werden auch Software, Hardware, Personal, Prozesse und verfahrenstechnische Aspekte des Systems berücksichtigt.

Wenn MBSE richtig durchgeführt wird, führt dies zu einer allgemeinen Verringerung der Entwicklungsrisiken.


## No Magic

Das Hauptmodell des SE-Demonstrators besteht aus drei Hauptpaketen, die in verschiedene Unterpakete unterteilt werden können. Diese drei Hauptpakete sind die "Functional Architecture" (Funktionale Architektur), die "Mission & Stakeholder Analysis" (Analyse der Mission und Interessenvertreter) und die "System Architecture" (Systemarchitektur).

Die Functionale Architecture lässt sich in zwei Unterpakete unterteilen, nämlich die Funktionale Analyse und die Systemfunktionen. Die Funktionale Analyse betrachtet alle erforderlichen funktionalen Schritte, um eine normale Operation mit dem Gimbal auszuführen, wie zum Beispiel die Anpassung der Bewegung, das Setzen eines Stabilisierungsmodus und die Überprüfung beim Start des Gimbals, ob dieser ordnungsgemäß versorgt wird.

Die Systemfunktionen lassen sich in High-Level-Verhalten und Sub-Level-Verhalten aufteilen. Das High-Level-Verhalten umfasst die normale Operation des Gimbals, bei der er wie in der Funktionalen Architektur beschrieben den Stabilisierungsmodus auswählt und anhand der Gimbal-Bewegung eine Anpassung vornimmt, um die Plattform entgegen der Bewegung zu stabilisieren. Ein weiteres High-Level-Verhalten ist der Startup Check, der auch in der Funktionalen Analyse beschrieben wird.

Das Sub-Level-Verhalten spiegelt die einzelnen Schritte des High-Level-Verhaltens wider. Im Falle der normalen Operation gibt es drei Sub-Level-Verhalten. Eines davon ist das Setzen des Stabilisierungsmodus und die erforderlichen Schritte, die beim Auswahl des Stabilisierungsmodus eingeleitet werden. Ein anderes Sub-Level-Verhalten ist beispielsweise die Erfassung der Gimbal-Bewegung und die erforderlichen Schritte dafür. Das letzte Sub-Level-Verhalten ist die eigentliche Stabilisierung, also die Kompensation der Eingangsbewegung und die darauf basierende Anpassung der Position.

Beim Startup Check werden vier Sub-Level-Verhalten dargestellt. In einem Verhalten wird der Batteriestatus überprüft, in einem anderen wird überprüft, ob eine externe Spannungsquelle angeschlossen ist. Für beide Fälle gibt es ein Sub-Level-Verhalten, das den Gimbal mit Strom versorgt, je nachdem, welcher der beiden Fälle vorliegt.




