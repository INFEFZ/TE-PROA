|                             |                          |                                        |
| --------------------------- | ------------------------ | -------------------------------------- |
| **Elektrotechniker/-in HF** | **Programmiertechnik A** | ![IPSO Logo](./x_gitres/ipso_logo.png) |

- [1. Lexikalische Konventionen der Programmiersprache C](#1-lexikalische-konventionen-der-programmiersprache-c)
  - [1.1. Bezeichner (Identifiers)](#11-bezeichner-identifiers)
    - [1.1.1. Die Regeln](#111-die-regeln)
  - [1.2. Schlüsselwörter (Keywords)](#12-schlüsselwörter-keywords)
  - [1.3. Operatoren (Operators)](#13-operatoren-operators)
    - [1.3.1. Arithmetische Operatoren](#131-arithmetische-operatoren)
    - [1.3.2. Vergleichsoperatoren](#132-vergleichsoperatoren)
    - [1.3.3. Logische Operatoren](#133-logische-operatoren)
    - [1.3.4. 3.4 **Zuweisungsoperatoren**](#134-34-zuweisungsoperatoren)
      - [1.3.4.1. Beispiel](#1341-beispiel)
  - [1.4. Literals](#14-literals)
    - [1.4.1. Ganzzahlige Literale](#141-ganzzahlige-literale)
    - [1.4.2. Fliesskomma-Literale](#142-fliesskomma-literale)
    - [1.4.3. Zeichenliterale](#143-zeichenliterale)
    - [1.4.4. String-Literale](#144-string-literale)
  - [1.5. Kommentare](#15-kommentare)
    - [1.5.1. Einzeilige Kommentare](#151-einzeilige-kommentare)
    - [1.5.2. Mehrzeilige Kommentare](#152-mehrzeilige-kommentare)
  - [1.6. Whitespace (Leerzeichen, Tabulatoren, Zeilenumbrüche)](#16-whitespace-leerzeichen-tabulatoren-zeilenumbrüche)
  - [1.7. Sonderzeichen](#17-sonderzeichen)
    - [1.7.1. Semikolon (`;`)](#171-semikolon-)
    - [1.7.2. Klammern (`()`, `{}`, `[]`)](#172-klammern---)
- [2. Aufgaben](#2-aufgaben)
  - [2.1. Aufgabe Literale](#21-aufgabe-literale)

---

# 1. Lexikalische Konventionen der Programmiersprache C

- Die **lexikalischen Konventionen** einer Programmiersprache beschreiben die **grundlegenden Regeln**, wie die **Quellcodezeichenfolgen** (also der Text, den ein Programmierer schreibt) in für den Compiler verständliche Einheiten (Token) zerlegt werden.
- In der Programmiersprache C umfassen diese Konventionen unter anderem die Regeln für **Bezeichner**, **Schlüsselwörter**, **Operatoren**, **Literale** und **Kommentare**.

![E-Book K6-Lexikalische Konventionen](./x_gitres/k06-lexikalische-konventionen.pdf)

---

## 1.1. Bezeichner (Identifiers)

Ein **Bezeichner** ist der Name, den man **Variablen**, **Funktionen**, **Typen** oder andere Programmbestandteile zuweist.

### 1.1.1. Die Regeln

- Ein **Bezeichner** muss mit einem **Buchstaben** (`A-Z`, `a-z`) oder einem **Unterstrich** (`_`) beginnen.
- Danach können **Bezeichner** beliebig viele Buchstaben, Ziffern (`0-9`) und Unterstriche enthalten.
- **Bezeichner** sind **case-sensitive**, das heisst, `myVariable` und `myvariable` sind zwei verschiedene Bezeichner.
- **Bezeichner** dürfen keine Schlüsselwörter (wie `int`, `return`, `if` etc.) sein.

**Beispiel:**

```c
int age;         // Gültiger Bezeichner
float _radius;   // Gültiger Bezeichner (beginnt mit Unterstrich)
int var1;        // Gültiger Bezeichner (beginnt mit Buchstaben und enthält Ziffern)
int 1var;        // Ungültiger Bezeichner (beginnt mit einer Zahl)
int return;      // Ungültiger Bezeichner (Schlüsselwort)
```

---

## 1.2. Schlüsselwörter (Keywords)

- **Schlüsselwörter** sind **reservierte Wörter**, die eine spezielle Bedeutung in der Programmiersprache C haben.
- Diese Wörter dürfen **nicht** als Bezeichner verwendet werden.

**Beispiel:**

```c
int x = 10;  // "int" ist ein Schlüsselwort für den Datentyp
if (x > 0) {  // "if" ist ein Schlüsselwort für bedingte Anweisungen
return x;     // "return" ist ein Schlüsselwort, um eine Funktion zu verlassen
```

Die vollständige Liste der Schlüsselwörter in C umfasst unter anderem: `int`, `float`, `char`, `if`, `else`, `for`, `while`, `return`, `switch`, `case`, `struct`, `union`, `typedef` und viele andere.

---

## 1.3. Operatoren (Operators)

- **Operatoren** sind **Symbole**, die bestimmte Operationen auf Operanden ausführen.
- C bietet eine Vielzahl von Operatoren, die in Kategorien unterteilt werden.

### 1.3.1. Arithmetische Operatoren

```c
+   // Addition
-   // Subtraktion
*   // Multiplikation
/   // Division
%   // Modulo (Rest der Division)
```

**Beispiel:**

```c
int a = 5, b = 2;
int sum = a + b;    // sum = 7
int product = a * b; // product = 10
```

### 1.3.2. Vergleichsoperatoren

```c
==  // Gleich
!=  // Ungleich
>   // Grösser als
<   // Kleiner als
>=  // Grösser oder gleich
<=  // Kleiner oder gleich
```

**Beispiel:**

```c
int a = 5, b = 10;
if (a < b) {
    printf("a ist kleiner als b");
}
```

### 1.3.3. Logische Operatoren

```c
&&  // Logisches UND
||  // Logisches ODER
!   // Logisches NICHT
```

**Beispiel:**

```c
int a = 5, b = 10;
if (a < b && b > 5) {
    printf("Beide Bedingungen sind wahr");
}
```

### 1.3.4. 3.4 **Zuweisungsoperatoren**

```c
=   // Zuweisung
+=  // Addiere und weise zu
-=  // Subtrahiere und weise zu
*=  // Multipliziere und weise zu
/=  // Dividiere und weise zu
```

#### 1.3.4.1. Beispiel

```c
int a = 5;
a += 3;  // a = a + 3 -> a = 8
```

---

## 1.4. Literals

- Literals sind Werte, die direkt in den Code geschrieben werden.
- Sie können in verschiedenen Formaten

### 1.4.1. Ganzzahlige Literale

```c
int a = 10;     // Dezimal (Basis 10)
int b = 0xA;    // Hexadezimal (Basis 16)
int c = 012;    // Oktal (Basis 8)
```

### 1.4.2. Fliesskomma-Literale

```c
float f = 3.14;
double d = 2.71828;
```

### 1.4.3. Zeichenliterale

Ein Zeichenliteral wird durch einfache Anführungszeichen (`'`) umschlossen:

```c
char c = 'A';    // Einzelnes Zeichen
```

### 1.4.4. String-Literale

Ein String-Literal wird durch doppelte Anführungszeichen (`"`) umschlossen:

```c
char *str = "Hello, World!";
```

---

## 1.5. Kommentare

Kommentare werden vom Compiler ignoriert und dienen zur Dokumentation des Codes.

### 1.5.1. Einzeilige Kommentare

```c
// Dies ist ein einzeiliger Kommentar
int x = 10;  // Kommentar am Ende einer Zeile
```

### 1.5.2. Mehrzeilige Kommentare

```c
/*
  Dies ist ein mehrzeiliger Kommentar.
  Er kann über mehrere Zeilen gehen.
*/
int y = 20;
```

---

## 1.6. Whitespace (Leerzeichen, Tabulatoren, Zeilenumbrüche)

- **Whitespace**-Zeichen wie Leerzeichen, Tabulatoren und Zeilenumbrüche dienen der Formatierung und Lesbarkeit des Codes.
- Sie sind für den Compiler von Bedeutung, da sie die **Trennung** von Token darstellen.
- Diese Zeichen werden jedoch im Allgemeinen **ignoriert**, es sei denn, sie trennen zwei Token oder erzeugen eine neue Zeile.

**Beispiel:**

```c
int a = 5;  // Leerzeichen zwischen den Tokens
int b = 10; // Kommentar
```

---

## 1.7. Sonderzeichen

C verwendet auch einige Sonderzeichen, die spezielle Bedeutungen haben:

### 1.7.1. Semikolon (`;`)

Das Semikolon wird verwendet, um das Ende einer Anweisung zu kennzeichnen.

**Beispiel:**

```c
int a = 5;  // Ende der Anweisung
```

### 1.7.2. Klammern (`()`, `{}`, `[]`)

- **`()`**: Wird verwendet, um Funktionsaufrufe zu kennzeichnen und Parameter zu gruppieren.
- **`{}`**: Wird verwendet, um Codeblöcke zu definieren (z. B. in Schleifen, Funktionen).
- **`[]`**: Wird verwendet, um auf Elemente von Arrays zuzugreifen.

**Beispiel:**

```c
if (a > b) {
    printf("a ist grösser als b");
}
```

---

</br>

# 2. Aufgaben

## 2.1. Aufgabe Literale

| **Vorgabe**         | **Beschreibung**                                               |
| :------------------ | :------------------------------------------------------------- |
| **Lernziele**       | Kennen die Regeln zu korrekten Benennung der Bezeichner        |
|                     | Kennen die Literale für Zahlen, Zeichen, und Strings           |
|                     | Können den Programmcode einzeilig oder mehrzeilig kommentieren |
| **Sozialform**      | Einzelarbeit                                                   |
| **Auftrag**         | siehe unten                                                    |
| **Hilfsmittel**     |                                                                |
| **Zeitbedarf**      | 20min                                                          |
| **Lösungselemente** |                                                                |

a) **Bezeichner und Schlüsselwörter:**

- Erstelle eine Liste mit fünf gültigen und fünf ungültigen **Bezeichnern**.
- Begründe, warum die ungültigen Bezeichner nicht erlaubt sind.

b) **Literals und Datentypen:**

- Deklariere drei Variablen:
  - Eine **Ganzzahl** mit dem Wert `100` (Verwende ein Dezimalliteral)
  - Eine **Fliesskommazahl** mit dem Wert `3.14` (Verwende ein Fliesskomma-Literal)
  - Ein **Zeichen** mit dem Wert `'A'` (Verwende ein Zeichenliteral)

Weise den Variablen Werte zu und gib diese auf der Konsole aus.

c) **Kommentare:**

- Kommentiere deinen Code entsprechend, damit er für andere Programmierer verständlich ist.
