#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){ 

	int gesucht, eingabe, runde = 0;

	srand(time(NULL));

	gesucht = rand() % 20 + 1;

	cout << endl << "Ich habe mir eine Zahl zwischen 1 und 20 ausgedacht.";

	do{
		runde++;
		cout << endl << "Du darfst jetzt raten: > ";
		cin >> eingabe;

		if(eingabe < gesucht){
			cout << endl << "Du hast zu niedrig geraten.";
		}else if(eingabe > gesucht){
			cout << endl << "Du hast zu hoch geraten.";
		}else if(eingabe == gesucht){
			cout << endl << "Gut gemacht, du hast die Zahl in " << runde << " Runden erraten!";
			break;
		}
		
	}while(runde < 6);

	if(eingabe != gesucht){
		cout << endl << "Falsch. Ich habe an die " << gesucht << " gedacht...";
	}

        return 0;
}

