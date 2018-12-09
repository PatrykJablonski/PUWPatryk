#include <iostream>>


using namespace std;

bool czyPrzestepny(int year) {
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) && (year >= 1752)) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int year;
	int dzien;
	int miesiac;

	cout << "Podaj dzien: ";
	cin >> dzien;

	cout << "Podaj miesiac: ";
	cin >> miesiac;

	cout << "Podaj rok: ";
	cin >> year;

	int liczbaDni = 0;

	if ((miesiac <= 12)&&(dzien <=31)) {

		for (int i = 1; i < miesiac; i++) {
			if ((i % 2 == 0 && i >= 8) || (i % 2 != 0 && i <= 7) || (i != 2)) {
				liczbaDni += 31;
			}
			else
				if (i != 2) {
					liczbaDni += 30;
				}
				else {
					liczbaDni += 28 + czyPrzestepny(year);
				}
		}
        cout << endl << liczbaDni + dzien;
	}
	else {
		cout << "Nieprawidlowa data!!"<<endl;
	}

	




	system("PAUSE");

}
