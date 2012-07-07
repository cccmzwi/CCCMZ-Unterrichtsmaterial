/**
Das ist das Spiel "Zahlenraten" (oder "guess the number" in englisch)

Das Programm denkt sich eine Zahl aus, die der Spieler moeglichst schnell erraten muss
**/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){ 


	int gesucht, eingabe, runde = 0;

	// Wird fuer den Zufall benoetigt
	srand(time(NULL));

	// Zahl zwichen 1 und 20 "ausdenken"
	gesucht = rand() % 20 + 1;

	cout << endl << "Ich habe mir eine Zahl zwischen 1 und 20 ausgedacht.";

	// Den Spieler hoechstens 6 Runden raten lassen
	do{
		// Eine Runde mehr
		runde++;

		// Spieler eine Zahl raten lassen ...
		cout << endl << "Du darfst jetzt raten: > ";
		// .. und in "eingabe" speichern
		cin >> eingabe;

		// Wenn die Zahl kleiner als die gedachte Zahl ist
		if(eingabe < gesucht){
			cout << endl << "Du hast zu niedrig geraten.";
		// Wenn die Zahl groesser als die gedachte Zahl ist
		}else if(eingabe > gesucht){
			cout << endl << "Du hast zu hoch geraten.";
		// Wenn die Zahl gleich der gedachten Zahl ist
		}else if(eingabe == gesucht){
			cout << endl << "Gut gemacht, du hast die Zahl in " << runde << " Runden erraten!";
			//Schleife unterbrechen
			break;
		}
		
	}while(runde < 6);

	// Wenn die Zahl am Schluss immernoch falsch ist
	if(eingabe != gesucht){
		cout << endl << "Falsch. Ich habe an die " << gesucht << " gedacht...";
	}

        return 0;
}

