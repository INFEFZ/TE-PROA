|                             |                          |                                        |
| --------------------------- | ------------------------ | -------------------------------------- |
| **Elektrotechniker/-in HF** | **Programmiertechnik A** | ![IPSO Logo](./x_gitres/ipso_logo.png) |

- [1. Programmsteuerung](#1-programmsteuerung)
  - [1.1. Definition](#11-definition)
  - [1.2. Elemente der Programmsteuerung](#12-elemente-der-programmsteuerung)
  - [1.3. Sequenz (Anweisung)](#13-sequenz-anweisung)
  - [1.4. Auswahl (Entscheidungsstrukturen)](#14-auswahl-entscheidungsstrukturen)
    - [1.4.1. Wenn (if)](#141-wenn-if)
    - [1.4.2. Wenn-Sonst (if-else)](#142-wenn-sonst-if-else)
    - [1.4.3. Mehrfachauswahl (switch case)](#143-mehrfachauswahl-switch-case)
  - [1.5. Wiederholungen (Schleifen)](#15-wiederholungen-schleifen)
  - [1.6. Sprung (GoTo)](#16-sprung-goto)
  - [1.7. Logische Verknüpfungen](#17-logische-verknüpfungen)
- [2. Aufgaben](#2-aufgaben)
  - [2.1. Kleinste Zahl](#21-kleinste-zahl)
  - [2.2. Auswahl](#22-auswahl)
  - [2.3. Verzweigung (Auswahl)](#23-verzweigung-auswahl)
  - [2.4. Mehrfachauswahl](#24-mehrfachauswahl)
  - [2.5. Grösste Zahl ermitteln](#25-grösste-zahl-ermitteln)
  - [2.6. Wiederholungen](#26-wiederholungen)
  - [2.7. Sprung](#27-sprung)
  - [2.8. Logische Verknüpfungen](#28-logische-verknüpfungen)
  - [2.9. Schaltjahr Berechnung](#29-schaltjahr-berechnung)
  - [2.10. Brauerei](#210-brauerei)
  - [2.11. Gerade Zahlen](#211-gerade-zahlen)
  - [2.12. Zins](#212-zins)
  - [2.13. Benutzeranmeldung](#213-benutzeranmeldung)
  - [2.14. Kleinste Zahl](#214-kleinste-zahl)
  - [2.15. Mehrwertsteuer](#215-mehrwertsteuer)
  - [2.16. Taschenrechner](#216-taschenrechner)
  - [2.17. Kreisfläche berechnen](#217-kreisfläche-berechnen)
  - [2.18. Passworteingabe](#218-passworteingabe)
  - [2.3. Aufgabe Ampelsteuerung](#23-aufgabe-ampelsteuerung)

---

# 1. Programmsteuerung

## 1.1. Definition

**Programmsteuerung** bezeichnet die **logische Abfolge** von **Anweisungen**, **Bedingungen**, **Schleifen** und **Verzweigungen**, durch die ein Programm kontrolliert, gesteuert und ausgeführt wird. Sie legt fest, wie das Programm auf Benutzereingaben, interne Zustände oder äussere Ereignisse reagiert und entsprechend den vordefinierten Regeln fortschreitet.

## 1.2. Elemente der Programmsteuerung

- **Sequenz (lineare Ausführung)**: Befehle werden der Reihe nach ausgeführt.
- **Verzweigung (z. B. `if/else`)**: Entscheidungen beeinflussen den weiteren Programmfluss.
- **Schleifen (z. B. for, `while`)**: Wiederholungen von Anweisungen.
- **Funktions-/Methodenaufrufe**: Steuerung durch Strukturierung in Unterprogramme.

## 1.3. Sequenz (Anweisung)

Eine **Sequenz** beschreibt dabei die lineare, schrittweise Ausführung von Anweisungen in der Reihenfolge, in der sie im Code stehen.
Eine Sequenz ist eine **Abfolge von Anweisungen**, die nacheinander, also "der Reihe nach", ausgeführt werden – **von oben nach unten**.

**Struktogramm:**

> ![Struktogramm Sequenz](./x_gitres/struktogramm-sequenz.png)

**Programmablaufplan:**

> ![PAP-Sequenz](./x_gitres/pap-sequenz.png)

**Aktivitätsdiagramm:**

> ![Aktivitätsdiagramm-Sequenz](./x_gitres/aktivitätsdiagram-sequenz.png)

---

## 1.4. Auswahl (Entscheidungsstrukturen)

Die Auswahl ist ein **Steuerungskonstrukt**, bei dem das Programm abhängig von einer Bedingung entscheidet, welcher Anweisungsblock ausgeführt wird.
Sie erlaubt das reagierende Verhalten des Programms auf **unterschiedliche Situationen**.

| **Art der Auswahl**                                                    | **Beschreibung**                                                                |
| :--------------------------------------------------------------------- | ------------------------------------------------------------------------------- |
| **Einfache Auswahl (`if`)**                                            | Führt nur einen Block aus, wenn die Bedingung wahr ist.                         |
| **Zweiseitige Auswahl (`if - else`)**                                  | Wählt zwischen zwei Blöcken, je nachdem, ob die Bedingung wahr oder falsch ist. |
| **Mehrfachauswahl** (**`if - else if - else`** oder **`switch-case`**) | Es gibt mehrere mögliche Fälle. Der passende wird ausgeführt.                   |

Sie ermöglicht es, Programme dynamisch und intelligent auf unterschiedliche Eingaben und Situationen reagieren zu lassen, statt einfach nur stur Anweisungen der Reihe nach auszuführen.

### 1.4.1. Wenn (if)

**Struktogramm:**

> ![Struktogramm Auswahl](./x_gitres/struktogramm-auswahl.png)

**Programmablaufplan:**

> ![PAP-Auswahl](./x_gitres/pap-auswahl.png)

**Aktivitätsdiagramm:**

> ![Aktivitätsdiagramm-Auswahl](./x_gitres/aktivitätsdiagram-auswahl.png)

### 1.4.2. Wenn-Sonst (if-else)

**Struktogramm:**

> ![Struktogramm Auswahl sonst](./x_gitres/struktogramm-auswahl-sonst.png)

**Programmablaufplan:**

> ![PAP-Auswahl sonst](./x_gitres/pap-auswahl-sonst.png)

**Aktivitätsdiagramm:**

> ![Aktivitätsdiagramm-Auswahl sonst](./x_gitres/aktivitätsdiagram-auswahl-sonst.png)

### 1.4.3. Mehrfachauswahl (switch case)

**Struktogramm:**

![Struktogramm Mehrfachauswahl](./x_gitres/struktogramm-mehrfachauswahl.png)

**Programmablaufplan:**

![Programmablaufplan Mehrfachauswahl](./x_gitres/pap-mehrfachauswahl.png)

**Aktivitätsdiagramm:**

![Aktivitätsdiagramm Mehrfachauswahl](./x_gitres/aktivitätsdiagram-mehrfachauswahl.png)

---

## 1.5. Wiederholungen (Schleifen)

Die **Wiederholung** in der Programmsteuerung ist ein zentrales Konzept, das es ermöglicht, bestimmte Anweisungen **mehrfach** auszuführen, ohne sie jedes Mal neu schreiben zu müssen. Man spricht hierbei auch von **Schleifen** oder **Loops**.
Eine **Wiederholung** (auch **Schleife**) ist ein Programmkonstrukt, das einen Anweisungsblock **mehrfach** ausführt, solange **eine bestimmte Bedingung erfüllt ist** – oder so lange, wie es der Programmierer vorgibt.

Man unterscheidet zwischen **zählergesteuerten** und **bedingungsgesteuerten Schleifen**.

| **Schleifenart**                         | **Beschreibung**                                                                                      |
| :--------------------------------------- | ----------------------------------------------------------------------------------------------------- |
| **Zählerschleife (`for`)**               | Führt Anweisungen eine bestimmte Anzahl von Malen aus                                                 |
| **Kopfgesteuerte Schleife (`while`)**    | Führt Anweisungen aus, solange eine Bedingung erfüllt ist (Bedingung wird vor der Ausführung geprüft) |
| **Fussgesteuerte Schleife (`do-while`)** | Führt Anweisungen aus und prüft die Bedingung danach – wird also mindestens einmal ausgeführt         |

**Struktogramm:**

> ![Struktogramm Wiederholung](./x_gitres/struktogramm-wiederholung.png)

**Programmablaufplan:**

> ![PAP-Wiederholung](./x_gitres/pap-wiederholung.png)

**Aktivitätsdiagramm:**

> ![Aktivitätsdiagramm-Wiederholung](./x_gitres/aktivitätsdiagram-wiederholung.png)

---

## 1.6. Sprung (GoTo)

- Die **Sprunganweisung** ist ein wichtiges, aber oft auch **vorsichtig** zu verwendendes Konzept in der Programmsteuerung.
- Eine **Sprunganweisung** ist ein Befehl in einem Programm, der bewirkt, dass der Programmablauf nicht der normalen Reihenfolge (von oben nach unten) folgt, sondern an eine **andere Stelle springt**.
- Sprunganweisungen sind mächtig, aber sollten sparsam und überlegt eingesetzt werden.
- Zu viele unkontrollierte Sprünge führen zu sogenanntem **"Spaghetti-Code"** – unübersichtlich und schwer wartbar.

> Sie **unterbricht** also den linearen Ablauf und ändert den Programmfluss gezielt, z.B. durch einen Sprung in eine andere Codezeile, Schleife oder Methode.

| **Sprunganweisung** | **Beschreibung**                                                                                          |
| :------------------ | --------------------------------------------------------------------------------------------------------- |
| **`break`**         | Beendet eine Schleife oder **`switch`**-Anweisung sofort.                                                 |
| **`continue`**      | Springt zum **nächsten Schleifendurchlauf**, überspringt den **Rest des aktuellen Durchlaufs**.           |
| **`return`**        | Bricht die Ausführung einer Methode/Funktion **ab** und gibt ggf. einen Wert zurück.                      |
| **`goto`**          | Springt zu einer **markierten Codezeile** – meist **nicht empfohlen**, da es unübersichtlich werden kann. |

**Struktogramm:**

> ![Struktogramm Sprung](./x_gitres/struktogramm-sprung.png)

**Aktivitätsdiagramm:**

> ![Aktivitätsdiagramm Sprung](./x_gitres/aktivitätsdiagram-sprung.png)

---

## 1.7. Logische Verknüpfungen

- Die **logischen Verknüpfungen** sind ein zentraler Bestandteil der Programmsteuerung – sie ermöglichen es dem Programm, **Entscheidungen** zu treffen, **Bedingungen** zu prüfen und **Verzweigungen zu steuern**.
- **Logische Verknüpfungen** (auch **logische Operatoren**) verbinden zwei oder mehr Bedingungen miteinander.
- Das Ergebnis ist immer ein Boolescher Wert:
  - **true** (wahr) oder
  - **false** (falsch).

| **Operator** | **Name**    | Bedeutung                               | Beispiel                                  |
| :----------- | ----------- | --------------------------------------- | ----------------------------------------- |
| **`&&`**     | UND (AND)   | Beide Bedingungen müssen **wahr** sein  | `wenn (Alter >= 18 && Wohnort == "DE")`   |
| **`\|\|`**   | ODER (OR)   | Nur eine Bedingungen muss **wahr** sein | `wenn (Alter >= 18 \|\| Wohnort == "DE")` |
| **`!`**      | NICHT (NOT) | Kehrt den Wahrheitswert **um**.         | `wenn (!EingabeIstLeer)`                  |

**Aktivitätsdiagramm:**

> ![Aktivitätsdiagramm logische Verknüpfung](./x_gitres/aktivitätsdiagram-logisch.png)

Beispiele Diagramme: Diese werden meistens als Kombination in einer Bedingung dargestellt

---
</br>

# 2. Aufgaben

## 2.1. Kleinste Zahl

| **Vorgabe**         | **Beschreibung**                                   |
| :------------------ | :------------------------------------------------- |
| **Lernziele**       | Kennt die Grundelemente eines Flussdiagramms       |
|                     | Kann ein Flussdiagramm entwickeln                  |
|                     | Kann Algorithmen in einem Flussdiagramm darstellen |
| **Sozialform**      | Einzelarbeit                                       |
| **Auftrag**         | siehe unten                                        |
| **Hilfsmittel**     |                                                    |
| **Zeitbedarf**      | 20min                                              |
| **Lösungselemente** | Vollständiges Flussdiagramm                        |

a)
Schreibe ein PAP, in welchem zwei Werte eingelesen und der grössere Wert danach am Bildschirm angezeigt wird
Versuchen Sie diese Aufgabe mit **draw.io** zu lösen.

## 2.2. Auswahl

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Struktogramms       |
|                     | Kann ein Struktogramm entwickeln                  |
|                     | Kann Algorithmen in einem Struktogramm darstellen |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 40min                                             |
| **Lösungselemente** | Vollständiges Struktogramm                        |

Zeichne ein **Flussdiagramm**, ein **Aktivitätsdiagramm** und ein **Struktogramm** für folgendes Programm:

- Einlesen einer Zahl vom User (Console)
- Einlesen einer 2. Zahl
- Einlesen einer 3. Zahl
- Ausgabe der des Mittelwertes der 3 Zahlen, wenn der Mittelwert grösser 10 ist.

## 2.3. Verzweigung (Auswahl)

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Struktogramms       |
|                     | Kann ein Struktogramm entwickeln                  |
|                     | Kann Algorithmen in einem Struktogramm darstellen |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 20min                                             |
| **Lösungselemente** | Vollständiges Struktogramm                        |

- Gegeben ist die Variable `q`. Wenn `q` einen Zahlenwert grösser als 20 hat, dann soll die **Tätigkeit A** ausgeführt werden.
- Sonst ist die **Tätigkeit B** zu erledigen.

Zeichne Sie das Struktogramm

---

## 2.4. Mehrfachauswahl

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Struktogramms       |
|                     | Kann ein Struktogramm entwickeln                  |
|                     | Kann Algorithmen in einem Struktogramm darstellen |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 20min                                             |
| **Lösungselemente** | Vollständiges Struktogramm                        |

Gegeben ist die Variable **`q`**.
Ist `q = 50` dann ist die **Tätigkeit A** auszuführen.
Ist `q = 40` dann ist die **Tätigkeit B** auszuführen.
Ist `q = 80` dann ist die **Tätigkeit C** auszuführen.
Ist `q > 80` dann ist die **Tätigkeit D** auszuführen.

Zeichne das Struktogramm!

## 2.5. Grösste Zahl ermitteln

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Struktogramms       |
|                     | Kann ein Struktogramm entwickeln                  |
|                     | Kann Algorithmen in einem Struktogramm darstellen |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 35min                                             |
| **Lösungselemente** | Vollständiges Struktogramm                        |

Entwickle ein Struktogramm, das folgende Aufgabe erfüllt:

- Lese drei ganze Zahlen (z.B. a, b, c) von der Tastatur ein.
- Vergleiche die drei Zahlen miteinander.
- Gib die grösste der drei Zahlen auf dem Bildschirm aus.

Nach Eingabe von drei Zahlen wie z. B. `5, 12, 8` gibt das Programm: `„Die grösste Zahl ist: 12“` aus.

## 2.6. Wiederholungen

| **Vorgabe**         | **Beschreibung**                                                     |
| :------------------ | :------------------------------------------------------------------- |
| **Lernziele**       | Kennt die Grundelemente von Struktogramm, PAP und Aktivitätsdiagramm |
|                     | Kann Algorithmen in einem Diagramm darstellen                        |
| **Sozialform**      | Partnerarbeit                                                        |
| **Auftrag**         | siehe unten                                                          |
| **Hilfsmittel**     |                                                                      |
| **Zeitbedarf**      | 20min                                                                |
| **Lösungselemente** | Vollständiges Diagramm                                               |

Zeichne mit einem Diagramm eurer Wahl folgendes Programm:

- Einlesen einer Zahl vom User (Console)
- Einlesen von **n-Zahlen** in einer Schleife bis der User nichts mehr eingibt.
- Ausgabe der des Mittelwertes der **n-Zahlen**

## 2.7. Sprung

| **Vorgabe**         | **Beschreibung**                                                     |
| :------------------ | :------------------------------------------------------------------- |
| **Lernziele**       | Kennt die Grundelemente von Struktogramm, PAP und Aktivitätsdiagramm |
|                     | Kann Algorithmen in einem Diagramm darstellen                        |
| **Sozialform**      | Einzelarbeit                                                         |
| **Auftrag**         | siehe unten                                                          |
| **Hilfsmittel**     |                                                                      |
| **Zeitbedarf**      | 20min                                                                |
| **Lösungselemente** | Vollständiges Diagramm                                               |

Zeichne das Struktogramm für das Programm der Aufgabe **Wiederholung** allerdings diesmal mit einer Schleife,
welche mit einem Spring **abbricht** sobald man die **Zahl 5** eingibt.

## 2.8. Logische Verknüpfungen

| **Vorgabe**         | **Beschreibung**                                        |
| :------------------ | :------------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente Aktivitätsdiagramm              |
|                     | Kann Algorithmen in einem Aktivitätsdiagramm darstellen |
| **Sozialform**      | Partnerarbeit                                           |
| **Auftrag**         | siehe unten                                             |
| **Hilfsmittel**     |                                                         |
| **Zeitbedarf**      | 20min                                                   |
| **Lösungselemente** | Vollständiges Aktivitätsdiagramm                        |

Zeichne das Aktivitätsdiagramm für folgendes Programm:

- Es werden 2 Zahlen vom User eingelesen
- Wenn beide Zahlen grösser 0 sind gib aus: `Beide Zahlen sind grösser 0`.
- Wenn eine der beiden Zahlen nicht grösser 0 ist, gib aus `Einer der beiden Zahlen ist kleiner 0`.

---

## 2.9. Schaltjahr Berechnung

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Struktogramms       |
|                     | Kann ein Struktogramm entwickeln                  |
|                     | Kann Algorithmen in einem Struktogramm darstellen |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 40min                                             |
| **Lösungselemente** | Vollständiges Struktogramm                        |

Weil die astronomische Dauer eines Jahres (wenn die Erde die Sonne einmal umrundet hat) etwas länger ist als 365 Tage, wurden Schaltjahre zum Ausgleich eingefügt.
Erstellen Sie ein Struktogramm für ein Programm, welches prüft, ob eine eingegebene Jahresziffer ein Schaltjahr ist oder nicht und anschliessende eine entsprechende Antwort ausgibt.

- Ein Schaltjahr ist ein Jahr, welches eine Jahreszahl hat, die durch **4 teilbar** ist.
- Jahreszahlen, die durch **100 teilbar** sind, sind allerdings **keine Schaltjahre**. Es sei denn, die Jahreszahl ist durch **400 teilbar**.

## 2.10. Brauerei

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Struktogramms       |
|                     | Kann ein Struktogramm entwickeln                  |
|                     | Kann Algorithmen in einem Struktogramm darstellen |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 40min                                             |
| **Lösungselemente** | Vollständiges Struktogramm                        |

- Eine Brauerei gewährt ihren Kunden bei Mindestabnahme von 10 Kästen 5%, bei Mindestabnahme von 50 Kästen 7% und bei Mindestabnahme von 100 Kästen 10% Rabatt.
- Diese Regelung soll durch einen Programmbaustein, z.B. bei der Fakturierung, automatisch berücksichtigt werden.
- Kontrollieren Sie die gegebenen Struktogramme daraufhin, ob sie die gegebene Regelung logisch richtig umsetzen.

## 2.11. Gerade Zahlen

| **Vorgabe**         | **Beschreibung**                                            |
| :------------------ | :---------------------------------------------------------- |
| **Lernziele**       | Kennt die Grundelemente eines UML-Aktivitätsdiagramm        |
|                     | Kann ein UML-Aktivitätsdiagramm entwickeln                  |
|                     | Kann Algorithmen in einem UML-Aktivitätsdiagramm darstellen |
| **Sozialform**      | Einzelarbeit                                                |
| **Auftrag**         | siehe unten                                                 |
| **Hilfsmittel**     |                                                             |
| **Zeitbedarf**      | 40min                                                       |
| **Lösungselemente** | Vollständiges UML-Aktivitätsdiagramm                        |

- Schreiben Sie ein Programm, das alle **geraden Zahlen** zwischen **1 und 368** auf dem Bildschirm ausgibt.
- Es sollen immer 8 (durch Tabulator getrennte) Zahlen in einer Zeile ausgegeben werden, bevor ein Zeilenumbruch erfolgt.

> **Tipp: Modulo verwenden**

## 2.12. Zins

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Struktogramms       |
|                     | Kann ein Struktogramm entwickeln                  |
|                     | Kann Algorithmen in einem Struktogramm darstellen |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 40min                                             |
| **Lösungselemente** | Vollständiges Struktogramm                        |

Lena hat zur Konfirmation 380 CHF erhalten, sie bringt das Geld zur Bank. Nach wie viel Jahren hat sich ihr Guthaben verdoppelt, wenn die Bank jährlich einen Zinssatz von 4,5% zahlt. Zeichne auch hier ein Struktogramm zu deiner Lösung.

## 2.13. Benutzeranmeldung

| **Vorgabe**         | **Beschreibung**                                        |
| :------------------ | :------------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Aktivitätsdiagramm        |
|                     | Kann ein Aktivitätsdiagramm entwickeln                  |
|                     | Kann Algorithmen in einem Aktivitätsdiagramm darstellen |
| **Sozialform**      | Einzelarbeit                                            |
| **Auftrag**         | siehe unten                                             |
| **Hilfsmittel**     |                                                         |
| **Zeitbedarf**      | 40min                                                   |
| **Lösungselemente** | Vollständiges UML-Aktivitätsdiagramm                    |

In einer Benutzeranmeldung (Login) mit Benutzername u. Passwort muss folgender Ablauf programmiert werden:

- Der Benutzer wird zur Eingabe des Benutzernamens aufgefordert.
- Der Anwender hat max. drei Versuche den korrekten Benutzernamen einzugeben, danach wird eine Fehlermeldung ausgeben und das Programm bricht ab.
- Ist der Benutzername korrekt, erfolgt die Aufforderung zur Passworteingabe.
- Der Anwender hat wiederum max. drei Versuche das korrekte Passwort einzutippen, danach wird eine Fehlermeldung ausgegeben und das Programm bricht ab.
- Bei vollständiger Übereinstimmung von Benutzername u. Passwort wir die Meldung "Zugang freigegeben" angezeigt.

Erstellen Sie für den obigen Vorgang ein UML-Aktivitätsdiagramm

## 2.14. Kleinste Zahl

| **Vorgabe**         | **Beschreibung**                                   |
| :------------------ | :------------------------------------------------- |
| **Lernziele**       | Kennt die Grundelemente eines Flussdiagramms       |
|                     | Kann ein Flussdiagramm entwickeln                  |
|                     | Kann Algorithmen in einem Flussdiagramm darstellen |
| **Sozialform**      | Einzelarbeit                                       |
| **Auftrag**         | siehe unten                                        |
| **Hilfsmittel**     |                                                    |
| **Zeitbedarf**      | 40min                                              |
| **Lösungselemente** | Vollständiges Flowgorithm                          |

Erstellen Sie einen PAP, der drei eingelesene Zahlen vergleicht und das Minimum ausgibt.
Versuchen Sie diese Aufgabe mit **Flowgorithm** zu lösen

## 2.15. Mehrwertsteuer

| **Vorgabe**         | **Beschreibung**                                        |
| :------------------ | :------------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Programmablaufplan        |
|                     | Kann ein Programmablaufplan entwickeln                  |
|                     | Kann Algorithmen in einem Programmablaufplan darstellen |
| **Sozialform**      | Einzelarbeit                                            |
| **Auftrag**         | siehe unten                                             |
| **Hilfsmittel**     |                                                         |
| **Zeitbedarf**      | 40min                                                   |
| **Lösungselemente** | Vollständiges Flowgorithm Programm                      |

Schreiben Sie in Flowgorithm ein Programmablaufplan (PAP), das nach einem Rechnungsbetrag fragt und danach den Mehrwertsteuerbetrag ermittelt und diesen zusammen mit dem Gesamtbetrag ausgibt.

## 2.16. Taschenrechner

| **Vorgabe**         | **Beschreibung**                                        |
| :------------------ | :------------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Programmablaufplans       |
|                     | Kann ein Programmablaufplan entwickeln                  |
|                     | Kann Algorithmen in einem Programmablaufplan darstellen |
| **Sozialform**      | Einzelarbeit                                            |
| **Auftrag**         | siehe unten                                             |
| **Hilfsmittel**     |                                                         |
| **Zeitbedarf**      | 40min                                                   |
| **Lösungselemente** | Vollständiges Flowgorithm Programm                      |

Schreiben sie ein kleines Taschenrechnerprogramm (PAP) das zwei Zahlen zusammenzählen, abzählen, multiplizieren oder dividieren kann.

- Zuerst sollen die beiden Zahlen eingegeben werden.
- Danach soll durch die Eingabe des Charakters '+' zusammengezählt, '-' abgezählt, '*' multipliziert oder '/' dividiert werden.

## 2.17. Kreisfläche berechnen

| **Vorgabe**         | **Beschreibung**                                        |
| :------------------ | :------------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Programmablaufplans       |
|                     | Kann ein Programmablaufplan entwickeln                  |
|                     | Kann Algorithmen in einem Programmablaufplan darstellen |
| **Sozialform**      | Einzelarbeit                                            |
| **Auftrag**         | siehe unten                                             |
| **Hilfsmittel**     |                                                         |
| **Zeitbedarf**      | 40min                                                   |
| **Lösungselemente** | Vollständiges Flowgorithm Programm                      |

Schreiben Sie ein Programm (PAP), das nach einem Radius eines Kreises fragt und danach die Kreisfläche errechnet und ausgibt.

## 2.18. Passworteingabe

| **Vorgabe**         | **Beschreibung**                                        |
| :------------------ | :------------------------------------------------------ |
| **Lernziele**       | Kennt die Grundelemente eines Programmablaufplans       |
|                     | Kann ein Programmablaufplan entwickeln                  |
|                     | Kann Algorithmen in einem Programmablaufplan darstellen |
| **Sozialform**      | Einzelarbeit                                            |
| **Auftrag**         | siehe unten                                             |
| **Hilfsmittel**     |                                                         |
| **Zeitbedarf**      | 35min                                                   |
| **Lösungselemente** | Vollständiges Flowgorithm                               |

**Entwickle ein Struktogramm, das folgende Aufgabe erfüllt:**

- Es wird bis zu dreimal eine Passworteingabe über prompt abgefragt.
- Wenn der Benutzer "Tommy" eingibt, erscheint eine Meldung (alert) mit dem Text **"Tommy was here!"** und das Programm wird sofort beendet.
- Wenn das falsche Passwort eingegeben wird, wird der Zähler um 1 erhöht.
- Nach drei erfolglosen Versuchen wird die Schleife automatisch beendet (es gibt dann keine Ausgabe mehr).

**Anforderungen:**

- Verwende eine kopfgesteuerte Schleife mit der Bedingung `zaehler <= 3`.
- Baue eine Benutzereingabe zur Passwortabfrage ein.
- Füge eine Verzweigung ein, die prüft, ob das Passwort korrekt ist.
- Bei richtiger Eingabe soll eine Meldung ausgegeben und die Schleife sofort beendet werden (break).
- Bei falscher Eingabe wird der Zähler erhöht und der nächste Schleifendurchlauf beginnt.

---

## 2.3. Aufgabe Ampelsteuerung

| **Vorgabe**         | **Beschreibung**                          |
| :------------------ | :---------------------------------------- |
| **Lernziele**       | Verständnis des Algorithmusbegriffs       |
|                     | Formulieren von Algorithmen               |
|                     | Darstellung von Algorithmen               |
| **Sozialform**      | Partnerarbeit                             |
| **Auftrag**         | siehe unten                               |
| **Hilfsmittel**     |                                           |
| **Zeitbedarf**      | 30min                                     |
| **Lösungselemente** | Vollständige Beschreibung des Algorithmus |

- Beschreibe einen Algorithmus für die Steuerung einer einfachen Ampelkreuzung (Rot – Gelb – Grün – Gelb – Rot).
- Jeder Zustand soll für eine bestimmte Zeit aktiv sein.
  - **Rot: 30 Sekunden**
  - **Grün: 25 Sekunden**
  - **Gelb: 5 Sekunden**

> Formuliere eine **Schleife**, die diese Abfolge ständig wiederholt. Nutze Begriffe wie **„Wiederhole“, „Wenn“, „Dann“ etc.**
