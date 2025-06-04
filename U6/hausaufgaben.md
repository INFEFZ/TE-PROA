|                             |                          |                                        |
| --------------------------- | ------------------------ | -------------------------------------- |
| **Elektrotechniker/-in HF** | **Programmiertechnik A** | ![IPSO Logo](./x_gitres/ipso_logo.png) |

# Hausaufgaben

## Einfacher Taschenrechner in C programmieren

| **Vorgabe**         | **Beschreibung**                                                      |
| :------------------ | :-------------------------------------------------------------------- |
| **Lernziele**       | Kennt die Ablaufstrukturen in Programmiersprache C                    |
|                     | Kann einige Ablaufstruktur nach Vorgabe implementieren                |
|                     | Kann eine effiziente Ablaufstrukturen problemlösungsbezogen bestimmen |
| **Sozialform**      | Einzelarbeit                                                          |
| **Auftrag**         | siehe unten                                                           |
| **Hilfsmittel**     |                                                                       |
| **Zeitbedarf**      | 40min                                                                 |
| **Lösungselemente** | Korrekte und lauffähige Implementation                                |

- Erstelle ein C-Programm, das als einfacher **Taschenrechner** dient.
- Das Programm soll zwei Zahlen sowie einen Rechenoperator vom Benutzer einlesen, die entsprechende Rechenoperation ausführen und das Ergebnis anzeigen.

### Anforderungen

1. **Benutzereingabe:**

   - Eine **erste Zahl** (Gleitkommazahl, z. B. `12.5`)
   - Ein **Operator** (`+`, `-`, `*`, `/`)
   - Eine **zweite Zahl** (ebenfalls Gleitkommazahl)

2. **Verarbeitung:**

   - Das Programm soll abhängig vom eingegebenen Operator die entsprechende mathematische Operation durchführen:

     - `+` → Addition
     - `-` → Subtraktion
     - `*` → Multiplikation
     - `/` → Division (Achte auf Division durch 0!)

3. **Ausgabe:**

   - Das Ergebnis der Berechnung soll auf der Konsole ausgegeben werden.
   - Beispiel: `12.5 + 3.2 = 15.7`

4. **Fehlerbehandlung:**

   - Gib eine Fehlermeldung aus, wenn ein ungültiger Operator eingegeben wurde.
   - Verhindere eine Division durch 0 mit einer entsprechenden Meldung.

### Beispielablauf

```console
Geben Sie die erste Zahl ein: 10.0
Geben Sie den Operator ein (+, -, *, /): /
Geben Sie die zweite Zahl ein: 2.0
Ergebnis: 10.0 / 2.0 = 5.0
```

### Bonus (optional)

- Wiederhole den Rechenvorgang, bis der Benutzer den Taschenrechner beenden möchte.
