#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){ 

	srand(time(NULL));
	int zufall;
	string schleife;

	do{
		
		zufall = rand() % 6 + 1;

		cout << endl << "Ich habe eine " << zufall << " gewuerfelt!" << endl;
		
		cin >> schleife;

	}while(schleife != "stopp");

	cout << endl << "Schade, schon vorbei." << endl;

        return 0;
}

