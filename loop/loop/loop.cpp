#include <iostream>

using namespace std;

/*
DO - WHILE
* Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.

WHILE
* Miasto T.ma obecnie 100 tys.mieszkańców,
ale jego populacja rośnie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszkańców i ta liczba rośnie w tempie 2 % na rok.
Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, gdy liczba mieszkańców miasta T.przekroczy liczbę z miasta B.
* Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
* Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką,
której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).

FOR
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
* Program, kóry wyświetli poniższe cztery zwory :
****54321        121212        122333
* **65432        212121        223334444
* *76543        121212        333444455555
* 87654        212121        444455555666666

* Oblicz sumę szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Jeżeli się nie pomylisz,
to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6
i spierwiastkowaniu powinieneś otrzymać wartość liczby π(suma szeregu jest równa π2 / 6).
Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0.
Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
*/

//Napisz program, który pobiera od uzytkownika liczbę dopóki będzie ona różna od zera

void task1()
{
	int number;
	do
	{
		cout << "insert number\n";
		cin >> number;
	} while (number != 0);

	//tak dlugo jak liczba bedzie != 0 program bedzie dalej kazal uzytkownikowi wpisac liczbe
}

//Napisz program, który obliczy NWD dwóch liczb

void task2()
{
	int a, b;
	cout << "insert a\n";
	cin >> a;
	cout << "insert b\n";
	cin >> b;

	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	/*
	for (; b != 0; )
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	*/

	cout << "NWD = " << a << "\n";
}

//Napisz program który wyświetli na ekranie kolejne liczby naturalne od 1 do n

void task3()
{
	int number;
	cout << "insert number\n";
	cin >> number;

	int i = 0;
	while (number > i)
	{
		cout << (i + 1) << ", ";
		i++;
	}
	cout << "\n";

	/*
	for (int i = 0; number > i; i++)
	{
		cout << (i + 1) << ", ";
	}
	cout << "\n"; 
	*/
}

//Napisz program, który wylosuje liczbę a uzytkownik ma zgodnąć ją.

void task4()
{
	srand(time(NULL));

	int secretNumber = rand() % 10;

	int number;
	do
	{
		cout << "Zgadnij liczbe:\n";
		cin >> number;
	} while (number != secretNumber);
	cout << "Gratulacje\n";
}

//Program obliczający sumę liczb od 1 do 100

void task5()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}

	cout << "Suma od 1  do 100 wynosi " << sum << "\n";

	/*
	int i = 1, sum = 0;
	while (i <= 100)
	{
		sum = sum + i;
		i++;
	}

	cout << "The sum from 1 to 100 is: " << sum << "\n";
	*/
}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void task6()
{
	int sum = 0, i = 1;
	while (i <= 10)
	{
		cout << i * i << ",";
		i++;
	}

	/*
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		cout << i * i << ",";
	}
	*/
}

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

void task7()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			cout << i << ",";
	}

}

//Program obliczający sumę kwadratów liczb od 1 do 10

void task8()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum = sum + i * i;
	}

	cout << "the sum of squared numbers from 1 to 10 is: " << sum << "\n";
}

// Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

void task9()
{
	cout << "0 , 1, ";

	int fib2 = 0;
	int fib1 = 1;
	for (int i = 0; i < 18; i++)
	{
		int fib = fib2 + fib1;
		cout << fib << ", ";
		fib2 = fib1;
		fib1 = fib;
	}
}

//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)

void task10()
{
	int silnia = 1;
	for (int i = 1; i <= 10; i++)
	{
		cout << (silnia *= i) << ",";
	}
}

//Program obliczający n!.

void task11()
{
	int number, silnia = 1;
	cout << "insert number \n";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		silnia *= i;
	}
	cout << silnia;
}

int main()
{
	task11();
}
