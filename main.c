/*
 * main.c
 *
 *  Created on: 31.03.2021
 *      Author: swt
 */

#include <stdio.h>

int main() {   /* mit F6 */

	float r1, r2, erg;  /* Automatische Var's sind nicht initialisiert */

	/* Werte einlesen */
	printf("Bitte Widerstandswerte fuer R1 und R2 in Ohm eingeben : ");
	scanf("%f%f", &r1, &r2);

	/* Plausibilitaet */
	if ( r1 > 0 && r2 > 0 ) { /* Es gibt keine negativen Widerstaende */

		/* Berechnung durchfuehren */
		erg = r1*r2/(r1+r2);

		/* Ausgabe */
		printf("Ergebnis r1||r2 = %.2f Ohm", erg);


	} else /* Fehler */
		printf("Fehler: Widerstandswerte muessen > 0 sein!");

}

