#include <stdio.h>

int main()
{
  float zahl1 = 0.0, zahl2 = 0.0, summe = 0.0;

  // Eingabe (E)
  printf("Bitte eine Dezimalzahl eingeben:");
  scanf("%f", &zahl1);

  printf("Bitte eine Dezimalzahl eingeben:");
  scanf("%f", &zahl2);

  // Verarbeitung (V)
  summe = zahl1 + zahl2;

  // Ausgabe (A)
  printf("Die Summe ist: %.2f\n", summe);

  return 0;
}
