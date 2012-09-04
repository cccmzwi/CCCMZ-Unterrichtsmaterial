/**
Das ist das Spiel "Zahlenraten" (oder "guess the number" in Englisch)

Das Programm denkt sich eine Zahl aus, die der Spieler möglichst schnell erraten muss
**/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){ 


	int gesucht, eingabe, runde = 0;

	// Der Zufallszahlengenerator wird mit der Systemzeit initialisiert
	// Setzt also einen Startwert
	srand(time(NULL));

	// Zahl zwischen 1 und 20 "ausdenken"
	gesucht = rand() % 20 + 1;

	cout << endl << "Ich habe mir eine Zahl zwischen 1 und 20 ausgedacht.";

	do{
		// Eine Runde mehr
		runde++;

		// Den Spieler eine Zahl raten lassen ...
		cout << endl << "Du darfst jetzt raten: > ";
		// ... und die Zahl in "eingabe" speichern
		cin >> eingabe;

		// Wenn die Zahl kleiner als die gedachte Zahl ist:
		if(eingabe < gesucht){
			cout << endl << "Du hast zu niedrig geraten.";
		// Wenn die Zahl groesser als die gedachte Zahl ist:
		}else if(eingabe > gesucht){
			cout << endl << "Du hast zu hoch geraten.";
		// Wenn die Zahl gleich der gedachten Zahl ist:
		}else if(eingabe == gesucht){
			cout << endl << "Gut gemacht, du hast die Zahl in " << runde << " Runden erraten!";
			// Der Spieler hat gewonnen! Deshalb wird die Schleife abgebrochen
			break;
		}
	// Den Spieler höchstens 6 Runden raten lassen
	}while(runde < 6);

	// Wenn die Zahl am Schluss immernoch falsch ist:
	if(eingabe != gesucht){
		cout << endl << "Falsch. Ich habe an die " << gesucht << " gedacht...";
	}

	// Programm ordnungsgemäß beenden
	return 0;
}

