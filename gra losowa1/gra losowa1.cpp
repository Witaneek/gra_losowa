// gra losowa1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int wylosowana;
	int strzal;
	wylosowana = rand() % 10;
	//cout << "wylosowana cyfra " << wylosowana << endl;
	cout << "Zagraj w gre, zgadnij wylosowana cyfre od 0 do 9 " << endl;
	cout << "Masz na to trzy podejscia " << endl << endl;

	for (int i = 0; i < 4; i++) {
		if (i == 3) {
			cout << "przegrales, myslalem o cyfrze: " << wylosowana << endl;
			break;
		}
		cout << "Podaj cyfre: ";
		cin >> strzal;
		if (strzal == wylosowana) {
			cout << "gratulacje, wygrales " << endl;
			break;
		}
		if (strzal > wylosowana) {
			cout << "strzal jest wiekszy od wylosowanej cyfry " << endl;
		}
		if (strzal < wylosowana) {
			cout << "strzal jest mniejszy od wylosowanej cyfry " << endl;
		}

	}


}






