|                             |                          |                                        |
| --------------------------- | ------------------------ | -------------------------------------- |
| **Elektrotechniker/-in HF** | **Programmiertechnik A** | ![IPSO Logo](./x_gitres/ipso_logo.png) |

- [1. Ein- und Ausgabe](#1-ein--und-ausgabe)
  - [1.1. Die \<stdio.h\> Datei](#11-die-stdioh-datei)
  - [1.2. Ausgabe mit printf() Funktion](#12-ausgabe-mit-printf-funktion)
  - [1.3. Eingabe mit scanf()](#13-eingabe-mit-scanf)
    - [1.3.1. Beispiel](#131-beispiel)
  - [1.4. Formatierte Ein- und Ausgabe](#14-formatierte-ein--und-ausgabe)
- [2. Aufgaben](#2-aufgaben)
  - [2.1. E-Book, Kapitel 2 - Einfache Beispielprogramme](#21-e-book-kapitel-2---einfache-beispielprogramme)
  - [2.2. Ein- und Ausgabe](#22-ein--und-ausgabe)
  - [2.3. Aufgabe Datentypen (URI)](#23-aufgabe-datentypen-uri)

---

# 1. Ein- und Ausgabe

## 1.1. Die <stdio.h> Datei

- Die Datei **`stdio.h`** ist eine Header-Datei in der Programmiersprache C, die zur **Standardbibliothek** (Standard Input/Output) gehört.
- Sie stellt **Funktionen** und **Makros** zur Verfügung, mit denen du Ein- und Ausgaben durchführen kannst – z.B. das Lesen von der Tastatur oder das Schreiben auf den Bildschirm.

Diese Datei enthält die Deklarationen für viele zentrale Funktionen wie:

| **Funktion**              | **Zweck**                            |
| ------------------------- | ------------------------------------ |
| **`printf()`**            | Text auf den Bildschirm **ausgeben** |
| **`scanf()`**             | Eingaben von der Tastatur **lesen**  |
| **`fopen()`**             | Datei öffnen                         |
| **`fgets(), fputs()`**    | Zeilenweise Datei lesen/schreiben    |
| **`fprintf(), fscanf()`** | Formatierte Datei-Ein-/Ausgabe       |
| **`fclose()`**            | Datei schliessen                     |

## 1.2. Ausgabe mit printf() Funktion

- **`printf()`**
  - Ist eine Funktion zur Ausgabe, die es ermöglicht, formatierte Daten auf dem Bildschirm anzuzeigen.
  - Beispiel:
    - `printf("Ergebnis: %d\n", ergebnis);`
    - gibt eine Ganzzahl aus.
  - [cppreference.com](https://en.cppreference.com/w/c/io/fprintf)

## 1.3. Eingabe mit scanf()

- **`scanf()`**
  - Eine Funktion zur Eingabe, die es ermöglicht, Werte verschiedener Datentypen von der Benutzereingabe zu lesen.
  - Beispiel:
    - `scanf("%d", &variable);`
    - liest eine Ganzzahl ein.
    - [cppreference.com](https://en.cppreference.com/w/c/io/fscanf)

### 1.3.1. Beispiel

```c
#include <stdio.h>

int main() {
    char name[50];
    int alter;

    printf("Wie heisst du? ");
    scanf("%49s", name);  // bis zu 49 Zeichen + \0

    printf("Wie alt bist du? ");
    scanf("%d", &alter);  // Zahl einlesen

    printf("Hallo %s, du bist %d Jahre alt.\n", name, alter);

    return 0;
}
```

```c
#include <stdio.h>

int main() {
    FILE *datei = fopen("beispiel.txt", "w");  // Datei zum Schreiben öffnen
    if (datei == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }

    fprintf(datei, "Hallo Datei!\nDas ist eine Testzeile.\n");

    fclose(datei);  // Datei wieder schließen
    return 0;
}
```

## 1.4. Formatierte Ein- und Ausgabe

In der Programmiersprache C bezeichnet man mit **„Literals für den Ausgabestring“** (auch Format-Specifiers) die speziellen Platzhalter, die in Funktionen wie **`printf()`** oder **`scanf()`** verwendet werden, um anzugeben, welcher Datentyp ausgegeben oder eingelesen wird.

| **Literal** | **Bedeutung**                 | **Beispielwert** |
| ----------- | ----------------------------- | ---------------- |
| `%d`        | Ganzzahl (int)                | `42`             |
| `%f`        | Fließkommazahl (float/double) | `3.14`           |
| `%c`        | Einzelnes Zeichen (char)      | `'A'`            |
| `%s`        | Zeichenkette (String)         | `"Hallo"`        |
| `%lf`       | `double` (nur bei `scanf()`)  | `2.71828`        |
| `%u`        | Unsigned int                  | `3000`           |
| `%x`        | Hexadezimal (klein)           | `1a`             |
| `%X`        | Hexadezimal (groß)            | `1A`             |
| `%o`        | Oktal                         | `075`            |
| `%%`        | Prozentzeichen ausgeben       | `%`              |

```c
int zahl = 42;
float pi = 3.14;
char buchstabe = 'A';
char name[] = "Max";

printf("Zahl: %d\n", zahl);
printf("Pi: %.2f\n", pi);        // auf 2 Nachkommastellen
printf("Buchstabe: %c\n", buchstabe);
printf("Name: %s\n", name);
printf("Prozentzeichen: %%\n");

printf("%10s\n", "Test");     // rechtsbündig, 10 Zeichen breit
printf("%-10s\n", "Test");    // linksbündig
printf("%.2f\n", 3.14159);    // nur 2 Nachkommastellen
```

---

</br>

# 2. Aufgaben

## 2.1. E-Book, Kapitel 2 - Einfache Beispielprogramme

| **Vorgabe**         | **Beschreibung**                                      |
| :------------------ | :---------------------------------------------------- |
| **Lernziele**       | Programm Ein- und Ausgabe Möglichkeiten sind bekannt  |
|                     | Kann eine Formatierte Ausgabe mit `printf()` umsetzen |
|                     | Können ein Programm Code mit Kommentaren versehen     |
| **Sozialform**      | Einzelarbeit                                          |
| **Auftrag**         | siehe unten                                           |
| **Hilfsmittel**     |                                                       |
| **Zeitbedarf**      | 20min                                                 |
| **Lösungselemente** | Fragenkatalog                                         |

- Lese im offiziellen Buch [C als erste Programmiersprache](./x_gitres/k02-einfache-beispielprogamme.pdf) das Kapitel 2
- Erstelle zu Unklarheiten einen Fragenkatalog, sodass wir die Fragen im Anschluss klären können.

---

## 2.2. Ein- und Ausgabe

| **Vorgabe**         | **Beschreibung**                                |
| :------------------ | :---------------------------------------------- |
| **Lernziele**       | Können Benutzereingaben Format gerecht einlesen |
|                     | Können Daten formatiert ausgeben                |
|                     | Können die Format-Specifiers korrekt einsetzen  |
| **Sozialform**      | Einzelarbeit                                    |
| **Auftrag**         | siehe unten                                     |
| **Hilfsmittel**     |                                                 |
| **Zeitbedarf**      | 30min                                           |
| **Lösungselemente** | Lauffähiges korrektes Programm                  |

- Schreibe ein C-Programm welches vom Benutzer **2 Dezimalzahlen** fragt, diese zusammen zählt und danach das Resultat mit 2 Nachkommastellen ausgibt.
- Mache das Struktogramm oder den PAP dazu.

---

## 2.3. Aufgabe Datentypen (URI)

| **Vorgabe**         | **Beschreibung**                                |
| :------------------ | :---------------------------------------------- |
| **Lernziele**       | Können Benutzereingaben Format gerecht einlesen |
|                     | Können Daten formatiert ausgeben                |
|                     | Können die Format-Specifiers korrekt einsetzen  |
| **Sozialform**      | Einzelarbeit                                    |
| **Auftrag**         | siehe unten                                     |
| **Hilfsmittel**     |                                                 |
| **Zeitbedarf**      | 30min                                           |
| **Lösungselemente** | Lauffähiges korrektes Programm                  |

a)

- Schreibe ein Programm, das eine Zählvariable, eine Konstante `PI` (3.141...) und den Algorithmus **U=R*I** enthält.
- Am Ende sollen die Zählvariable, `PI` und der Wert von `U` ausgegeben werden.
- Wähle passende Datentypen.
- Die Zählvariable soll einmal um eins erhöht werden.
- Die Werte für `R` und `I` sollen vorgegeben sein.
- Berechne `U` und gib das Resultat, `PI` und die Zählvariable Format gerecht aus

b)

- Erweitere das Programm, sodass die Dezimalwerte von `R` und `I` von Benutzer eingegeben werden können.
- Das Resultat soll mit 3 Nachkommastellen ausgegeben werden.
