// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	/* //zad1
	int b, i = 0;
	cout << "Podaj liczbe: ";
	cin >> b;

	while (i < b)
	{
		cout << i << " ";
		i++;
	}  */

	 /*  //zad2
	int liczba, i = 0;
	
	do
	{
		cout << "Podaj liczbe: ";
		cin >> liczba;
	} while (liczba >= 0); */

	/*  //zad3
	int liczba, ile_d = 0, ile_u = 0, suma_d = 0, suma_u = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Podaje liczbe: ";
		cin >> liczba;
		if (liczba >= 0)
		{
		
		ile_d++;
		suma_d += liczba;
	    }
		else
		{
			ile_u++;
			suma_u += liczba;
		}
		
	}
	cout << "Suma liczb dodatnich: " << suma_d << " , Ilosc liczb dodatnich: " << ile_d << endl;
	cout << "Suma liczb ujemncyh: " << suma_u << " , Ilosc liczb ujemnych: " << ile_u << endl; */
	/* //zad4
	int liczba, suma = 0, n;

	cout << "Podaj n: ";
	cin >> n;
	if (n > 0)
	{
		for ( int i = 0; i < n; i++)
		{
			cout << "Podaj liczbe: ";
				cin >> liczba;
			if (liczba % 2 == 0) suma += liczba;
		}
		cout << "Suma liczb parzystych: " << suma;
	}
	else
		cout << "N nie moze byc < 0 \n:";
		*/
	 //zad5
	int liczba, suma = 0, n;

	cout << "Podaj n: ";
	cin >> n;
	if (n > 0)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			liczba = rand() % 45 - 10;

			cout << liczba << " ";
			if (liczba % 2 == 0) suma += liczba;
        }
		cout << " \n Suma liczb parzystych: " << suma;
	}
	else
		cout << "N nie moze byc < 0 \n:";
   
	


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
