|                             |                          |                                        |
| --------------------------- | ------------------------ | -------------------------------------- |
| **Elektrotechniker/-in HF** | **Programmiertechnik A** | ![IPSO Logo](./x_gitres/ipso_logo.png) |

- [1. Typenkonversion](#1-typenkonversion)
  - [1.1. Automatische Typkonversion (Implizite Typkonversion)](#11-automatische-typkonversion-implizite-typkonversion)
  - [1.2. Explizite Typkonversion (Casting)](#12-explizite-typkonversion-casting)
  - [1.3. C-Standard-Methoden für Typkonversionen](#13-c-standard-methoden-für-typkonversionen)
  - [1.4. Zusammenfassung](#14-zusammenfassung)
- [2. Aufgaben](#2-aufgaben)
  - [2.1. Typenkonversion](#21-typenkonversion)

---

# 1. Typenkonversion

- In C gibt es verschiedene Arten von Typkonversionen, die verwendet werden, um Daten von einem Datentyp in einen anderen zu übertragen.
- **Typkonversionen** sind wichtig, um sicherzustellen, dass Operationen mit den richtigen Datentypen durchgeführt werden, was die Programmlogik korrekt und sicher macht.
- Typkonversionen in C sind ein grundlegendes Konzept, um mit verschiedenen Datentypen zu arbeiten.
- Es gibt sowohl automatische als auch manuelle Möglichkeiten, und beide haben ihre eigenen Vor- und Nachteile.
- Es ist wichtig, die Auswirkungen von Typkonversionen zu verstehen, um Fehler wie **Datenverlust** oder **Überlauf** zu vermeiden.

![E-Book K9.11 - Konvertierungsvorschriften](./x_gitres/k09-ausdrücke-anweisungen-operatoren.pdf)

## 1.1. Automatische Typkonversion (Implizite Typkonversion)

**Automatische Typkonversion** (auch type promotion genannt) tritt auf, wenn der Compiler **einen kleineren Datentyp in einen grösseren Datentyp konvertiert**, ohne dass der Programmierer dies explizit anweist. Diese Konversionen passieren oft innerhalb von Ausdrücken, um mit unterschiedlichen Datentypen zu arbeiten.

```c
#include <stdio.h>

int main() {
    int a = 5;
    double b = 2.3;
    
    // Hier wird `a` automatisch in `double` konvertiert
    double result = a + b;
    
    printf("Result: %f\n", result);  // Ausgabe: Result: 7.300000
    return 0;
}
```

- In diesem Beispiel wird die Ganzzahl `a` automatisch in `double` konvertiert, bevor die Addition durchgeführt wird.
- Dies passiert, weil `b` vom Typ `double` ist und der Compiler sicherstellen möchte, dass **beide Operanden denselben Datentyp haben**, um eine genaue Berechnung durchzuführen.

Wann wird die automatische Typkonversion ausgeführt:

- Ganzzahlen (int, short, long) werden zu Gleitkommazahlen (float, double) konvertiert.
- char wird automatisch zu int konvertiert.
- kleinere Ganzzahlen zu grösseren Ganzzahlen.

## 1.2. Explizite Typkonversion (Casting)

- Explizite Typkonversion, auch als type **casting** bekannt, ist eine manuelle Umwandlung eines Datentyps in einen anderen.
- Dies erfolgt durch den Einsatz eines Cast-Operators. Der Cast-Operator wird in Klammern vor dem Zieltyp geschrieben.

```c
#include <stdio.h>

int main() {
    double a = 5.6;
    int b;
    
    // Explizite Typkonversion von double zu int
    b = (int)a;
    
    printf("a: %f, b: %d\n", a, b);  // Ausgabe: a: 5.600000, b: 5
    return 0;
}
```

- In diesem Beispiel wird der double-Wert von `a` explizit in einen `int`-Wert konvertiert.
- Dabei wird der **Dezimalteil abgeschnitten**, sodass nur der ganzzahlige Wert 5 übrig bleibt.

> **Wichtig**
>
> - Bei der Konversion von Gleitkommawerten in Ganzzahlen werden die Dezimalstellen **abgeschnitten** (keine Rundung).
> - Bei der Konversion von `int` zu `char` oder `float` zu int kann es zu **Datenverlust** kommen, wenn der Zieltyp **nicht gross genug ist**, um den Wert zu speichern.

## 1.3. C-Standard-Methoden für Typkonversionen

Es gibt auch C-Standardfunktionen für die Konversion von Datentypen, z. B. `atoi()`, `atof()`, `sprintf()`, und `strtol()`.

- `atoi()`: Konvertiert eine Zeichenkette (String) in eine Ganzzahl.
- `atof()`: Konvertiert eine Zeichenkette in einen double-Wert.
- `sprintf()`: Wandelt verschiedene Datentypen in Zeichenketten um.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "123";
    char str2[] = "45.67";
    
    int num1 = atoi(str1);       // String zu int
    double num2 = atof(str2);    // String zu double
    
    printf("num1: %d, num2: %f\n", num1, num2);  // Ausgabe: num1: 123, num2: 45.670000
    return 0;
}
```

## 1.4. Zusammenfassung

- **Datenverlust**
  - Bei der Konversion von grösseren Datentypen zu kleineren kann es zu einem Verlust von Daten kommen, wenn der Zieltyp nicht genügend Platz für die Originaldaten hat.
  - Beispiel: `long` zu `short` oder `double` zu `int` kann zu unerwarteten Ergebnissen führen.
- **Überlauf**
  - Wenn die konvertierten Daten den Bereich des Zieltyps überschreiten (z. B. ein sehr grosser `long` wird in einen `int` konvertiert), kann es zu einem Überlauf kommen.
- **Präzisionsverlust**
  - Bei der Konversion von `float` oder double zu `int` oder bei der Konversion von double zu `float` kann es zu Präzisionsverlust kommen, da Gleitkommazahlen auf eine kleinere Genauigkeit gerundet werden.

---

</br>

# 2. Aufgaben

## 2.1. Typenkonversion

| **Vorgabe**         | **Beschreibung**                                                   |
| :------------------ | :----------------------------------------------------------------- |
| **Lernziele**       | Kennen die implizite Typenkonversion                               |
|                     | Kennen die Regeln der Datypenkonversionen                          |
|                     | Können Umwandlungen mit der expliziten Typenkonversion durchführen |
| **Sozialform**      | Einzelarbeit                                                       |
| **Auftrag**         | siehe unten                                                        |
| **Hilfsmittel**     |                                                                    |
| **Zeitbedarf**      | 20min                                                              |
| **Lösungselemente** | Vollständiges C-Programm                                           |

Führe das untenstehende Programm aus und kontrolliere wie die konvertierten Datenwerte gespeichert werden.

```c
#include <stdio.h>
int main() 
{
    // Implizite Typkonvertierung (Automatic Type Conversion)
    int a = 10;
    double b = 5.5;
    double result;

    // Int wird implizit in double konvertiert
    result = a + b;
    printf("Implizite Typkonvertierung: %d + %.1f = %.1f\n", a, b, result);

    // Explizite Typkonvertierung (Type Casting)
    double x = 9.7;
    int y;

    // Double wird explizit in int konvertiert
    y = (int)x;
    printf("Explizite Typkonvertierung: (int)%.1f = %d\n", x, y);

    // Ein weiteres Beispiel für explizite Typkonvertierung
    char c = 'A';
    int ascii_value;

    // Char wird explizit in int konvertiert, um den ASCII-Wert zu erhalten
    ascii_value = (int)c;
    printf("ASCII-Wert von '%c' = %d\n", c, ascii_value);

    // Konvertierung von int zu float
    int m = 3;
    float n;

    // Int wird explizit in float konvertiert
    n = (float)m;
    printf("Explizite Typkonvertierung: (float)%d = %.1f\n", m, n);
    return 0;
}
```
