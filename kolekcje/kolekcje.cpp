#include <iostream>
using namespace std;

/*
* Napisz program, który będzie prosił o hasło. Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo.
* Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
* Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.
* Program sprawdzający czy podany ciąg znaków jest palindromem (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
*

* Program wyciągający informacje z numeru PESEL
* Program implementujący algorytm szyfrowania Cezara (proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).


* Program który na wejściu przyjmie równanie a na wyjściu da równanie w odwrotnej notacji polskiej ONP. Np. na wejściu 2+3*4 na wyjścu da 234*+
* Program, który na wejściu przyjmie rówanie w ONP a na wyjściu wyświetli wynik rówania.
*/

//Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to mała litera aldfabetu.

void task1()
{
	char SignFromUser;
	cout << "insert sign \n";
	cin >> SignFromUser;

	cout << "you inserted a sign" << SignFromUser << "\n";

	if (SignFromUser >= 'a' && SignFromUser <= 'z')
		cout << "the sign is a small letter of the alphabet\n";
	else
	{
		cout << "the sign is not a small letter of the alphabet\n";
	}

	SignFromUser - SignFromUser + 2;
	cout << "you inserted a sign" << SignFromUser << "\n";

	SignFromUser - 'a' + 2;
	cout << "you inserted a sign" << SignFromUser << "\n";
}

void task2()
{
	string userName;
	cout << "insert your name:\n";
	cin >> userName;

	cout << "witaj " << userName << " tutaj. \n";
}

int main()
{
	task2();
}
