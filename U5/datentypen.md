|                             |                          |                                        |
| --------------------------- | ------------------------ | -------------------------------------- |
| **Elektrotechniker/-in HF** | **Programmiertechnik A** | ![IPSO Logo](./x_gitres/ipso_logo.png) |

- [1. Datentypen](#1-datentypen)
  - [1.1. Elementare Datentypen](#11-elementare-datentypen)
    - [1.1.1. Ganzzahlige Datentypen (Integer Types)](#111-ganzzahlige-datentypen-integer-types)
    - [1.1.2. Modifizierte Typen](#112-modifizierte-typen)
    - [1.1.3. Zeichen (Character Type)](#113-zeichen-character-type)
    - [1.1.4. Fliesskommazahlen (Floating Point Types)](#114-fliesskommazahlen-floating-point-types)
    - [1.1.5. Boolescher Typ (Wahrheitswerte)](#115-boolescher-typ-wahrheitswerte)
    - [1.1.6. Beispiele zu elementare Typen](#116-beispiele-zu-elementare-typen)
  - [1.2. Konstanten und Variablendefinition](#12-konstanten-und-variablendefinition)
    - [1.2.1. Deklaration von Konstanten](#121-deklaration-von-konstanten)
    - [1.2.2. Besondere Zeichenkonstanten (Escape-Sequenzen)](#122-besondere-zeichenkonstanten-escape-sequenzen)
  - [1.3. Beispiele](#13-beispiele)
  - [1.4. Abgeleitete Datentypen](#14-abgeleitete-datentypen)
    - [1.4.1. Arrays](#141-arrays)
    - [1.4.2. Pointer](#142-pointer)
    - [1.4.3. Funktionen](#143-funktionen)
    - [1.4.4. Strukturen (struct)](#144-strukturen-struct)
    - [1.4.5. Union](#145-union)
    - [1.4.6. Enumeration (enum)](#146-enumeration-enum)
  - [1.5. Variablendefinition und -initialisierung](#15-variablendefinition-und--initialisierung)
    - [1.5.1. Grundstruktur](#151-grundstruktur)
    - [1.5.2. Beispiel](#152-beispiel)
    - [1.5.3. Gängige Datentypen in C](#153-gängige-datentypen-in-c)
  - [1.6. Beispielprogramm](#16-beispielprogramm)
- [2. Aufgaben](#2-aufgaben)
  - [2.1. Strukturierte Datentypen – Array (Felder) + Structs](#21-strukturierte-datentypen--array-felder--structs)
  - [2.2. Strukturierte Datentypen – Array (Felder) + Structs](#22-strukturierte-datentypen--array-felder--structs)

# 1. Datentypen

## 1.1. Elementare Datentypen

In C gibt es elementare Datentypen, mit denen einfache Werte gespeichert werden können, z. B. Zahlen, Zeichen oder Wahrheitswerte. Diese Typen sind die Grundlage jeder C-Programmierung.

> Die tatsächliche Grösse und Wertebereiche können von Compiler und Plattform abhängen (z. B. 32-bit vs. 64-bit).

### 1.1.1. Ganzzahlige Datentypen (Integer Types)

| **Typ**     | **Beschreibung**        | **Speichergrösse** | **Wertebereich (typisch)**        |
| ----------- | ----------------------- | ------------------ | --------------------------------- |
| `int`       | Ganze Zahl (Standard)   | 4 Byte             | −2.147.483.648 bis +2.147.483.647 |
| `short`     | Gekürzte ganze Zahl     | 2 Byte             | −32.768 bis +32.767               |
| `long`      | Lange ganze Zahl        | 4 oder 8 Byte      | Plattformabhängig                 |
| `long long` | Sehr grosse ganze Zahl  | 8 Byte             | −2⁶³ bis +2⁶³−1                   |
| `unsigned`  | Nur positive ganze Zahl | entspricht `int`   | 0 bis 4.294.967.295               |

> unsigned-Typen speichern nur positive Werte, dafür mit doppelt so grosser Obergrenze.

### 1.1.2. Modifizierte Typen

Diese Grundtypen können mit folgenden Modifikatoren modifiziert werden, um den Wertebereich und/oder die Speichergrösse zu ändern:

- `signed`
  - Kann positive und negative Zahlen einschliesslich Null darstellen (ist standardmässig für die meisten Typen gesetzt).
- `unsigned`
  - Für positive Zahlen und Null, verdoppelt den oberen Bereich des Wertebereichs, indem negative Werte ausgeschlossen werden.
- `short`
  - Verringert den Wertebereich für den Typ `int`.
- `long`
  - Erweitert den Wertebereich für den Typ `int` oder `double`.

### 1.1.3. Zeichen (Character Type)

| **Typ** | **Beschreibung**          | **Speichergrösse** | **Wertebereich**                                |
| ------- | ------------------------- | ------------------ | ----------------------------------------------- |
| `char`  | Einzelnes Zeichen (ASCII) | 1 Byte             | −128 bis 127 (signed) oder 0 bis 255 (unsigned) |

> Wird verwendet für einzelne Zeichen ('A', '1', '#'). Kann auch als kleine ganze Zahl genutzt werden.

### 1.1.4. Fliesskommazahlen (Floating Point Types)

| **Typ**       | **Beschreibung**          | **Speichergrösse** | **Genauigkeit**       |
| ------------- | ------------------------- | ------------------ | --------------------- |
| `float`       | Fliesskommazahl (einfach) | 4 Byte             | \~7 Nachkommastellen  |
| `double`      | Fliesskommazahl (doppelt) | 8 Byte             | \~15 Nachkommastellen |
| `long double` | Sehr hohe Genauigkeit     | 12–16 Byte         | Plattformabhängig     |

### 1.1.5. Boolescher Typ (Wahrheitswerte)

| **Typ**             | **Beschreibung** | **Werte**               | **Hinweis**                                      |
| ------------------- | ---------------- | ----------------------- | ------------------------------------------------ |
| `_Bool` oder `bool` | Wahr oder falsch | `0` (false), `1` (true) | Für `bool` muss `<stdbool.h>` eingebunden werden |

### 1.1.6. Beispiele zu elementare Typen

- int: Ein Datentyp für Ganzzahlen. Beispiel: `int zaehler = 10;`
- char: Ein Datentyp für einzelne Zeichen. Beispiel: `char buchstabe = 'A';`
- float: Ein Datentyp für Fliesskommazahlen (mit einfacher Genauigkeit). Beispiel: `float pi = 3.14;`
- double: Ein Datentyp für Fliesskommazahlen (mit doppelter Genauigkeit). Beispiel: `double e = 2.718281828;`

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int zahl = 42;
    float pi = 3.14;
    char buchstabe = 'A';
    bool wahr = true;

    printf("Zahl: %d\n", zahl);
    printf("Pi: %.2f\n", pi);
    printf("Buchstabe: %c\n", buchstabe);
    printf("Boolescher Wert: %d\n", wahr);

    return 0;
}
```

## 1.2. Konstanten und Variablendefinition

- Konstanten
  - Werte, die während der Laufzeit des Programms **nicht** verändert werden können.
  - In C werden Konstanten mit dem Schlüsselwort **`const`** definiert. Beispiel: **`const int MAX = 100;`**
- Variablendefinition
  - Die Deklaration einer Variablen reserviert Speicherplatz für die Variable und legt ihren Typ fest.
  - Beispiel: `int alter = 30;` definiert eine Ganzzahlvariable mit dem Namen **`alter`** und weist ihr den Wert 30 zu.

- Numerische Konstanten
  - Ganzzahlen (Integer), z.B. `10, -3, 0`
  - Fließkommazahlen (Floating Point), z.B. `3.14, -0.001, 2.0e5`
- Zeichenkonstanten
  - Einzelne Zeichen, in einfachen Anführungszeichen, z.B. `'A', '9', '\n'`
- Zeichenkettenkonstanten
  - Text in doppelten Anführungszeichen, z.B. `"Hallo"`, `"C-Programm"`

### 1.2.1. Deklaration von Konstanten

Mit #define (Präprozessor-Makro)

```c
#define PI 3.14159
#define MAX_WERT 100
```

- Wird vom Präprozessor ersetzt, keine Typsicherheit.
- Kann auch für komplexe Werte oder Makros genutzt werden.

Mit const (typisierte Konstante)

```c
const int maxZahl = 100;
const float pi = 3.14;
```

- Typ ist bekannt, ermöglicht Typsicherheit.
- Kann bei Bedarf auch mit `static` oder `extern` kombiniert werden.

### 1.2.2. Besondere Zeichenkonstanten (Escape-Sequenzen)

| **Sequenz** | **Bedeutung**                    |
| ----------- | -------------------------------- |
| `\n`        | Neue Zeile                       |
| `\t`        | Tabulator                        |
| `\\`        | Backslash                        |
| `\'`        | Einfaches Anführungszeichen      |
| `\"`        | Doppeltes Anführungszeichen      |
| `\0`        | Nullzeichen (Ende eines Strings) |

## 1.3. Beispiele

```c
#include <stdio.h>

#define WERT 10
const float pi = 3.14159;

int main() {
    const char zeichen = 'A';
    const char *text = "Konstanten in C";

    printf("WERT = %d\n", WERT);
    printf("pi = %.2f\n", pi);
    printf("Zeichen = %c\n", zeichen);
    printf("Text = %s\n", text);

    return 0;
}
```

## 1.4. Abgeleitete Datentypen

- In C gibt es neben den grundlegenden (einfachen) Datentypen wie int, float, char usw. auch abgeleitete Datentypen.
- Diese bauen auf den Grundtypen auf und ermöglichen komplexere Datenstrukturen und flexible Speicherverwaltung.

| **Typ**                  | **Beschreibung**                                              |
| ------------------------ | ------------------------------------------------------------- |
| **Array**                | Sammlung gleichartiger Elemente im Speicher                   |
| **Pointer**              | Variable, die die Adresse einer anderen Variable speichert    |
| **Function**             | Codeblock mit Eingabeparametern und (optionalem) Rückgabewert |
| **Structure (`struct`)** | Gruppierung verschiedener Datentypen in einem Block           |
| **Union (`union`)**      | Speicherplatz wird von allen Feldern gemeinsam genutzt        |
| **Enumeration (`enum`)** | Aufzählung symbolischer Konstanten                            |

### 1.4.1. Arrays

- Ein Array ist eine Sammlung von Elementen gleichen Typs, die im Speicher nebeneinander liegen.
- Beispiel: `int zahlen[5] = {1, 2, 3, 4, 5};`

### 1.4.2. Pointer

- Ein Pointer speichert die **Adresse einer Variable**.

```c
int a = 10;
int *p = &a;  // p zeigt auf die Adresse von a
```

- `*p` dereferenziert den Pointer → Zugriff auf den Wert
- `&a` gibt die Adresse von a zurück

### 1.4.3. Funktionen

Funktionen sind ebenfalls ein abgeleiteter Typ, da sie wie Daten behandelt werden können (z. B. Funktionszeiger).

```c
int addiere(int x, int y) {
    return x + y;
}
```

- Kann als Rückgabewert oder Funktionszeiger verwendet werden
- Ermöglicht Modularisierung und Wiederverwendbarkeit

### 1.4.4. Strukturen (struct)

Strukturen ermöglichen es, mehrere unterschiedliche Datentypen zu einem neuen Typ zu kombinieren.

```c
struct Person {
    char name[50];
    int alter;
};

struct Person p1 = {"Anna", 30};
```

### 1.4.5. Union

Eine Union ist ähnlich wie eine Struktur, aber alle Mitglieder teilen sich denselben Speicherplatz.

```c
union Daten {
    int i;
    float f;
};

union Daten d;
d.i = 42;
```

- Immer nur ein Feld ist gültig zur selben Zeit
- Spart Speicherplatz, nützlich bei Protokollen, Hardwarezugriffen etc.

### 1.4.6. Enumeration (enum)

Enums sind eine Art benannter Ganzzahlen, um Code lesbarer zu machen.

```c
enum Wochentag { Mo, Di, Mi, Do, Fr, Sa, So };
enum Wochentag heute = Mi;
```

## 1.5. Variablendefinition und -initialisierung

- In C müssen Variablen deklariert werden, bevor sie verwendet werden können.
- Die Deklaration informiert den Compiler über den Datentyp der Variable und ihren Namen.
- Die Initialisierung weist der Variable direkt bei der Deklaration einen Wert zu.

### 1.5.1. Grundstruktur

```c
datentyp variablenname;              // Deklaration
datentyp variablenname = wert;      // Deklaration + Initialisierung
```

### 1.5.2. Beispiel

```c
int zahl;             // Deklaration einer Ganzzahl
zahl = 5;             // Zuweisung eines Werts

float pi = 3.14;      // Initialisierung einer Fließkommazahl
char buchstabe = 'A'; // Zeichen
```

### 1.5.3. Gängige Datentypen in C

| **Datentyp** | **Beschreibung**                  | **Beispiel**         |
| ------------ | --------------------------------- | -------------------- |
| `int`        | Ganze Zahl                        | `int a = 10;`        |
| `float`      | Fließkommazahl (einfach)          | `float b = 3.14;`    |
| `double`     | Fließkommazahl (doppelt)          | `double c = 3.1415;` |
| `char`       | Einzelnes Zeichen                 | `char d = 'Z';`      |
| `bool`       | Wahrheitswert (C99+, `stdbool.h`) | `bool e = true;`     |

Mehrere Variablen auf einmal

```c
int x = 1, y = 2, z = 3;
float a, b = 4.5;  // a wird deklariert, b wird initialisiert
```

> Nicht initialisierte Variablen enthalten undefinierte Werte.
> Variablen sollten möglichst vor der ersten Verwendung initialisiert werden.
> Initialisierung ist besonders wichtig bei lokalen Variablen innerhalb von Funktionen.

## 1.6. Beispielprogramm

```c
#include <stdio.h>

int main() {
    int alter = 25;
    float temperatur = 36.6;
    char initial = 'L';

    printf("Alter: %d\n", alter);
    printf("Temperatur: %.1f\n", temperatur);
    printf("Initiale: %c\n", initial);

    return 0;
}
```

---

</br>

# 2. Aufgaben

## 2.1. Strukturierte Datentypen – Array (Felder) + Structs

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

a) Erkläre die Datentypen in, char, float, double.
b) Was ist eine Konstante? Wie mache ich die Deklaration in C?
c) Was ist eine Variablendefinition?
d) Was bedeutet unsigned int?
e) Was bedeutet int?
f) Was bedeuteet int zahl=1?

---

## 2.2. Strukturierte Datentypen – Array (Felder) + Structs

| **Vorgabe**         | **Beschreibung**                       |
| :------------------ | :------------------------------------- |
| **Lernziele**       | Können Strukturen (Record) deklarieren |
|                     | Können Strukturvariablen deklarieren   |
|                     | Können auf Strukturvariablen zugreifen |
| **Sozialform**      | Einzelarbeit                           |
| **Auftrag**         | siehe unten                            |
| **Hilfsmittel**     |                                        |
| **Zeitbedarf**      | 30min                                  |
| **Lösungselemente** | C-Programm                             |

- Erstelle ein Programm in C, welches der Name und die Adresse als Record (Struct) verwaltet.
- Definiere 2 Datensätze und gib diese aus.
