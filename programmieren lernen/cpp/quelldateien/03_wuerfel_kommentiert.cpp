// Ein Programm, das so oft eine Zahl würfelt, bis der Spieler "stopp" eintippt

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){ 
	
	srand(time(NULL));	// Wird für die Zufallszahlenerzeugung benötigt
	int zufall;	// Die gewürfelte Zahl
	string schleife;	// Die Eingabe des Spielers

	// Eine Schleife - Alles bis 'while' wird wiederholt
	do{
		// Eine Zufallszahl zwischen 1 und 6 wird in der Variablen "zufall" gespeichert
		zufall = rand() % 6 + 1;

		// Die "gewürfelte" Zahl ausgeben
		cout << endl << "Ich habe eine " << zufall << " gewuerfelt!" << endl;
		
		// Der Benutzer darf hier etwas eingeben
		cin >> schleife;

	// War die Eingabe nicht "stopp", wird die Schleife wiederholt
	}while(schleife != "stopp");

	cout << endl << "Schade, schon vorbei." << endl;

	// Das Programm beenden
	return 0;
}

