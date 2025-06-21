|                             |                          |                                        |
| --------------------------- | ------------------------ | -------------------------------------- |
| **Elektrotechniker/-in HF** | **Programmiertechnik A** | ![IPSO Logo](./x_gitres/ipso_logo.png) |

- [1. Operatoren](#1-operatoren)
  - [1.1. Arithmetische Operatoren](#11-arithmetische-operatoren)
  - [1.2. Beispiel Arithmetische Operatoren](#12-beispiel-arithmetische-operatoren)
  - [1.3. Vergleichsoperatoren](#13-vergleichsoperatoren)
  - [1.4. Beispiel Vergleichsoperatoren](#14-beispiel-vergleichsoperatoren)
  - [1.5. Logische Operatoren](#15-logische-operatoren)
  - [1.6. Beispiel Logische Operatoren](#16-beispiel-logische-operatoren)
  - [1.7. Zuweisungsoperatoren](#17-zuweisungsoperatoren)
  - [1.8. Beispiel Zuweisungsoperatoren](#18-beispiel-zuweisungsoperatoren)
  - [1.9. Bitweise Operatoren](#19-bitweise-operatoren)
  - [1.10. Inkrement- und Dekrementoperatoren](#110-inkrement--und-dekrementoperatoren)
  - [1.11. Beispiel Inkrement- und Dekrementoperatoren](#111-beispiel-inkrement--und-dekrementoperatoren)
  - [1.12. Bedingte (ternäre) Operatoren](#112-bedingte-ternäre-operatoren)
  - [1.13. Beispiel Bedingte (ternäre) Operatoren](#113-beispiel-bedingte-ternäre-operatoren)
  - [1.14. Vorrang und Assoziativität von Operatoren](#114-vorrang-und-assoziativität-von-operatoren)
    - [1.14.1. Vorrang der Operatoren (Operator Precedence)](#1141-vorrang-der-operatoren-operator-precedence)
    - [1.14.2. Assoziativität der Operatoren (Operator Associativity)](#1142-assoziativität-der-operatoren-operator-associativity)
    - [1.14.3. Beispiel 1: Zuweisung](#1143-beispiel-1-zuweisung)
    - [1.14.4. Beispiel: Logische Operatoren](#1144-beispiel-logische-operatoren)
    - [1.14.5. Beispiel 3: Mischoperationen](#1145-beispiel-3-mischoperationen)
    - [1.14.6. Zusammenfassung der Vorrang- und Assoziativitätsregeln](#1146-zusammenfassung-der-vorrang--und-assoziativitätsregeln)
- [2. Aufgaben](#2-aufgaben)
  - [2.1. Aufgabe Operatoren](#21-aufgabe-operatoren)
  - [2.2. Aufgabe Vorrang- und Assoziativitätsregeln](#22-aufgabe-vorrang--und-assoziativitätsregeln)
  - [2.3. Aufgabe Beispielprogramm Vorrang- und Assoziativitätsregeln](#23-aufgabe-beispielprogramm-vorrang--und-assoziativitätsregeln)

---

# 1. Operatoren

- In C gibt es eine Vielzahl von **Operatoren**, die für die Durchführung von Berechnungen, Vergleichen, logischen Operationen und vielen anderen Aufgaben verwendet werden können.
- Jeder **Operator** hat seinen spezifischen Anwendungsbereich und ist in vielen Programmierszenarien unverzichtbar.

![E-Book K9 - Ausdrücke, Anweisungen und Operatoren](./x_gitres/k09-ausdrücke-anweisungen-operatoren.pdf)

## 1.1. Arithmetische Operatoren

**Arithmetische Operatoren** werden verwendet, um mathematische Operationen auf numerischen Werten durchzuführen.

| **Operator** | **Beschreibung**           | **Beispiel**                       |
| ------------ | -------------------------- | ---------------------------------- |
| `+`          | Addition                   | `a + b` → `5` (wenn `a=2`, `b=3`)  |
| `-`          | Subtraktion                | `a - b` → `-1` (wenn `a=2`, `b=3`) |
| `*`          | Multiplikation             | `a * b` → `6` (wenn `a=2`, `b=3`)  |
| `/`          | Division                   | `a / b` → `0` (wenn `a=2`, `b=3`)  |
| `%`          | Modulo (Rest der Division) | `a % b` → `2` (wenn `a=5`, `b=3`)  |

## 1.2. Beispiel Arithmetische Operatoren

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);  // Ausgabe: 13
    printf("a - b = %d\n", a - b);  // Ausgabe: 7
    printf("a * b = %d\n", a * b);  // Ausgabe: 30
    printf("a / b = %d\n", a / b);  // Ausgabe: 3
    printf("a %% b = %d\n", a % b); // Ausgabe: 1
    return 0;
}
```

## 1.3. Vergleichsoperatoren

**Vergleichsoperatoren** vergleichen zwei Werte und liefern einen Wahrheitswert (0 für falsch, 1 für wahr).

| **Operator** | **Beschreibung**    | **Beispiel**                       |
| ------------ | ------------------- | ---------------------------------- |
| `==`         | Gleichheit          | `a == b` → `0` (wenn `a=2`, `b=3`) |
| `!=`         | Ungleichheit        | `a != b` → `1` (wenn `a=2`, `b=3`) |
| `>`          | Grösser als         | `a > b` → `0` (wenn `a=2`, `b=3`)  |
| `<`          | Kleiner als         | `a < b` → `1` (wenn `a=2`, `b=3`)  |
| `>=`         | Grösser oder gleich | `a >= b` → `0` (wenn `a=2`, `b=3`) |
| `<=`         | Kleiner oder gleich | `a <= b` → `1` (wenn `a=2`, `b=3`) |

## 1.4. Beispiel Vergleichsoperatoren

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    printf("a == b: %d\n", a == b);  // Ausgabe: 0
    printf("a != b: %d\n", a != b);  // Ausgabe: 1
    printf("a > b: %d\n", a > b);    // Ausgabe: 1
    printf("a < b: %d\n", a < b);    // Ausgabe: 0
    return 0;
}
```

## 1.5. Logische Operatoren

**Logische Operatoren** werden verwendet, um boolesche Ausdrücke zu verbinden.

| **Operator** | **Beschreibung**        | **Beispiel**                       |
| ------------ | ----------------------- | ---------------------------------- |
| `&&`         | Logisches UND (AND)     | `a && b` → `1` (wenn `a=1`, `b=1`) |
| `\\`         | Logisches ODER (OR)     | `a \|\| b`→`1`(wenn`a=1`,`b=0\`)   |
| `!`          | Logische Negation (NOT) | `!a` → `0` (wenn `a=1`)            |

## 1.6. Beispiel Logische Operatoren

```c
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    printf("a && b: %d\n", a && b);  // Ausgabe: 0
    printf("a || b: %d\n", a || b);  // Ausgabe: 1
    printf("!a: %d\n", !a);          // Ausgabe: 0
    return 0;
}
```

## 1.7. Zuweisungsoperatoren

**Zuweisungsoperatoren** werden verwendet, um einen Wert einer Variablen zuzuweisen.

| **Operator** | **Beschreibung**             | **Beispiel**           |
| ------------ | ---------------------------- | ---------------------- |
| `=`          | Zuweisung                    | `a = 5` → `a = 5`      |
| `+=`         | Addition und Zuweisung       | `a += 3` → `a = a + 3` |
| `-=`         | Subtraktion und Zuweisung    | `a -= 2` → `a = a - 2` |
| `*=`         | Multiplikation und Zuweisung | `a *= 4` → `a = a * 4` |
| `/=`         | Division und Zuweisung       | `a /= 2` → `a = a / 2` |
| `%=`         | Modulo und Zuweisung         | `a %= 3` → `a = a % 3` |

## 1.8. Beispiel Zuweisungsoperatoren

```c
#include <stdio.h>

int main() {
    int a = 5;
    a += 3;  // a = a + 3 → a = 8
    printf("a += 3: %d\n", a);
    a *= 2;  // a = a * 2 → a = 16
    printf("a *= 2: %d\n", a);
    return 0;
}
```

## 1.9. Bitweise Operatoren

**Bitweise Operatoren** arbeiten auf der Bit-Ebene der Operanden. Sie werden häufig bei der Manipulation von Flags oder bei Optimierungen verwendet.

| **Operator** | **Beschreibung**          | **Beispiel** |
| ------------ | ------------------------- | ------------ |
| `&`          | Bitweises UND             | `a & b`      |
| `\|`         | Bitweises ODER            | `a \| b`     |
| `^`          | Bitweises exklusives ODER | `a ^ b`      |
| `~`          | Bitweise Negation (NOT)   | `~a`         |
| `<<`         | Linksverschiebung         | `a << 1`     |
| `>>`         | Rechtsverschiebung        | `a >> 1`     |

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3;  // a = 0101, b = 0011 in binär
    printf("a & b: %d\n", a & b);  // Ausgabe: 1 (0001 in binär)
    printf("a | b: %d\n", a | b);  // Ausgabe: 7 (0111 in binär)
    printf("a ^ b: %d\n", a ^ b);  // Ausgabe: 6 (0110 in binär)
    printf("~a: %d\n", ~a);        // Ausgabe: -6 (invertierte Bits von a)
    printf("a << 1: %d\n", a << 1);  // Ausgabe: 10 (1010 in binär)
    return 0;
}
```

## 1.10. Inkrement- und Dekrementoperatoren

Diese Operatoren erhöhen oder verringern den Wert einer Variablen um **1**.

| **Operator** | **Beschreibung**            | **Beispiel**        |
| ------------ | --------------------------- | ------------------- |
| `++`         | Inkrement (erhöht um 1)     | `a++` → `a = a + 1` |
| `--`         | Dekrement (verringert um 1) | `a--` → `a = a - 1` |

## 1.11. Beispiel Inkrement- und Dekrementoperatoren

```c
#include <stdio.h>

int main() {
    int a = 5;
    printf("a++: %d\n", a++);  // Ausgabe: 5, a wird danach zu 6
    printf("a: %d\n", a);      // Ausgabe: 6
    printf("--a: %d\n", --a);  // Ausgabe: 5, a wird vorher zu 5
    return 0;
}
```

## 1.12. Bedingte (ternäre) Operatoren

Der ternäre Operator ist eine Kurzform für eine einfache **if-else-Bedingung.**

| **Operator** | **Beschreibung**            | **Beispiel**                                                           |
| ------------ | --------------------------- | ---------------------------------------------------------------------- |
| `?:`         | Bedingte (ternäre) Operator | `a ? b : c` → Wenn `a` wahr ist, wird `b` ausgewählt, andernfalls `c`. |

## 1.13. Beispiel Bedingte (ternäre) Operatoren

```c
#include <stdio.h>

int main() {
    int a = 5;
    int result = (a > 3) ? 10 : 20;  // Wenn a > 3, setze result auf 10, andernfalls auf 20
    printf("result: %d\n", result);  // Ausgabe: 10
    return 0;
}
```

## 1.14. Vorrang und Assoziativität von Operatoren

- In der Programmiersprache C gibt es eine Vielzahl von **Operatoren**, die unterschiedliche Operationen wie **Arithmetik**, **Vergleiche** und **logische Verknüpfungen** durchführen.
- Der **Vorrang** (auch Präzedenz genannt) und die **Assoziativität** von Operatoren bestimmen, in welcher **Reihenfolge** diese Operatoren innerhalb eines Ausdrucks ausgewertet werden.

### 1.14.1. Vorrang der Operatoren (Operator Precedence)

- Der **Vorrang** gibt an, welcher Operator in einem Ausdruck **zuerst** ausgewertet wird, wenn mehrere Operatoren vorhanden sind.
- Operatoren mit **höherem Vorrang werden zuerst** ausgeführt.

```c
int a = 3 + 4 * 2;
```

- In diesem Fall wird zuerst die Multiplikation (\*) durchgeführt, da der Multiplikationsoperator (\*) einen höheren Vorrang hat als der Additionsoperator (+).
- Die Berechnung erfolgt also in folgender Reihenfolge:
- `4 * 2 = 8`, `3 + 8 = 11`
- Reihenfolge des Vorrangs:
  - - (Multiplikation)
  - - (Addition)

### 1.14.2. Assoziativität der Operatoren (Operator Associativity)

- Die Assoziativität gibt an, in welcher Reihenfolge Operatoren mit dem gleichen Vorrang ausgewertet werden, wenn sie nebeneinander stehen.
- Es gibt zwei Hauptarten der Assoziativität:
  - **Linksassoziativität**: Der Ausdruck wird von links nach rechts ausgewertet.
  - **Rechtsassoziativität**: Der Ausdruck wird von rechts nach links ausgewertet.
- Die meisten Operatoren in C sind **linksassoziativ**, was bedeutet, dass sie von links nach rechts ausgeführt werden.
- Einige wenige Operatoren sind jedoch rechtsassoziativ, wie zum Beispiel der Zuweisungsoperator

Beispiel für **linksassoziative** Operatoren:

```c
int a = 5 - 3 - 2;
```

Hier werden die Subtraktionen von links nach rechts durchgeführt:

- `5 - 3 = 2`
- `2 - 2 = 0`

Beispiel für **rechtsassoziative** Operatoren:

```c
int a = 5;
a = a = 3;
```

In diesem Fall wird die Zuweisung von rechts nach links durchgeführt:

1. `a = 3` wird zuerst ausgeführt und der Wert 3 wird a zugewiesen.
2. Danach wird `a = 3` erneut durchgeführt und der Wert 3 wird erneut zugewiesen.

### 1.14.3. Beispiel 1: Zuweisung

```c
int a, b, c;
a = b = c = 5;
```

- Hier wird zuerst c = 5 ausgeführt (rechtsassoziative Zuweisung), danach b = 5 und schliesslich a = 5.

### 1.14.4. Beispiel: Logische Operatoren

```c
int a = 1, b = 0, c = 1;
if (a && b || c) {
    printf("True");
}
```

> Die logischen Operatoren (**&&**, **||**) sind **linksassoziativ**, also wird zuerst `a && b` ausgewertet. Da `a && b` **false** ergibt, wird anschliessend `false || c` ausgewertet, was zu **true** führt, da c gleich 1 ist.

### 1.14.5. Beispiel 3: Mischoperationen

```c
int result = 5 + 3 * 2;
```

Da die Multiplikation (*) einen höheren Vorrang hat, wird zuerst `3 * 2 = 6` berechnet, dann `5 + 6 = 11`.

### 1.14.6. Zusammenfassung der Vorrang- und Assoziativitätsregeln

- **Vorrang**
  - Bestimmt, welcher Operator zuerst ausgeführt wird.
  - Arithmetische Operatoren wie * und / haben einen **höheren** Vorrang als + und -.
- **Assoziativität**
  - Bestimmt, in welcher Reihenfolge Operatoren mit dem **gleichen Vorrang** ausgeführt werden.
  - Die meisten Operatoren sind **linksassoziativ**, aber Zuweisungsoperatoren sind **rechtsassoziativ**.

---

</br>

# 2. Aufgaben

## 2.1. Aufgabe Operatoren

| **Vorgabe**         | **Beschreibung**                                                   |
| :------------------ | :----------------------------------------------------------------- |
| **Lernziele**       | Kennen die verschiedenen Datentypen in C                           |
|                     | Kennen den Wertebereich der jeweiligen Datentypen                  |
|                     | Können Variablen Deklarationen und Initialisierungen programmieren |
| **Sozialform**      | Einzelarbeit                                                       |
| **Auftrag**         | siehe unten                                                        |
| **Hilfsmittel**     |                                                                    |
| **Zeitbedarf**      | 15min                                                              |
| **Lösungselemente** | Liste der Antworten                                                |

Schreibe ein C-Programm, das folgende Anforderungen erfüllt:

1. Deklariere zwei ganzzahligen Variablen `x` und `y` und weise ihnen Werte zu.
2. Deklariere eine dritte Variable `z`, die die Ergebnisse der Berechnungen speichert.
3. Führe folgende Operationen durch und speichere die Ergebnisse jeweils in `z`.
   1. Addition von `x` und `y`
   2. Subtraktion von `x` und `y`
   3. Multiplikation von `x` und `y`
   4. Ganzzahlige Division `x` und `y
   5. Modulo von `x` und `y`
   6. Inkrementiere `x` und speichere den Wert in `z`
   7. Dekrementiere `y` und speichere den Wert in `z`
4. Gebe die Ergebnisse jeder Berechnung aus

---

## 2.2. Aufgabe Vorrang- und Assoziativitätsregeln

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennen die Vorrangs und der Assoziativität Regeln |
|                     | Kann komplexe Ausdrücke korrekt auswerten         |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 10min                                             |
| **Lösungselemente** |                                                   |

Berechne den Wert des folgenden Ausdrucks mittels den Vorrang und Assoziativität Regeln.

- In Theorie auf Papier
- Schreibe ein kleines C-Programm und prüfe das Resultat

```c
int x = 5 + 3 * 2 - 4 / 2;
```

---

## 2.3. Aufgabe Beispielprogramm Vorrang- und Assoziativitätsregeln

| **Vorgabe**         | **Beschreibung**                                  |
| :------------------ | :------------------------------------------------ |
| **Lernziele**       | Kennen die Vorrangs und der Assoziativität Regeln |
|                     | Kann komplexe Ausdrücke korrekt auswerten         |
| **Sozialform**      | Einzelarbeit                                      |
| **Auftrag**         | siehe unten                                       |
| **Hilfsmittel**     |                                                   |
| **Zeitbedarf**      | 20min                                             |
| **Lösungselemente** |                                                   |

Führe das untenstehende Programm aus und kontrolliere wie die Ausdrücke mittels den Vorrangs und der Assoziativität Regeln ausgewertet werden..

```c
#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15;
    int result;

    // Beispiel für Operator-Vorrang
    // Multiplikation hat höheren Vorrang als Addition
    result = a + b * c;

    // Erwartetes Ergebnis: 5 + (10 * 15) = 5 + 150 = 155
    printf("Vorrang: %d + %d * %d = %d\n", a, b, c, result);

    // Klammern ändern die Reihenfolge der Ausführung
    result = (a + b) * c;

    // Erwartetes Ergebnis: (5 + 10) * 15 = 15 * 15 = 225
    printf("Vorrang mit Klammern: (%d + %d) * %d = %d\n", a, b, c, result);

    // Beispiel für Assoziativität
    int x = 20;

    // Zuweisungsoperatoren sind rechtsassoziativ
    a = b = c = x;

    // Erwartetes Ergebnis: c wird zu 20, dann b wird zu 20, dann a wird zu 20
    printf("Assoziativität der Zuweisungsoperatoren: a = %d, b = %d, c = %d\n", a, b, c);

    // Beispiel für linke Assoziativität von arithmetischen Operatoren
    result = a - b - c;

    // Erwartetes Ergebnis: (a - b) - c = (20 - 20) - 20 = 0 - 20 = -20
    printf("Linke Assoziativität: %d - %d - %d = %d\n", a, b, c, result);

    return 0;
}
```
