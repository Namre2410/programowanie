/*
1. Program obliczający średnią artmetyczną 2 liczb
2. Program obliczający pole prostokąta.
3. Program obliczający objętość stożka.
4. Program obliczający pole koła.
5. Program obliczający wartość wyrażenia a ^ 2 + b ^ 2
6. Program obliczający pole trójkąta o podstawie b i wysokości h
7. Program obliczający objętość kuli o promieniu r
8. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
9. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

#include <iostream>

using namespace std;

void task()
{
	double FirstNumber, SecondNumber;
	cout << "insert First number:\n";
	cin >> FirstNumber;
	cout << "insert Second number:\n";
	cin >> SecondNumber;

	double AverageofgivenNumbers = (FirstNumber + SecondNumber) / 2;

	cout << "The average equals:" << AverageofgivenNumbers << "\n";
}


/*
Operatory porównania:
== - równości
!= - różności
>
<
>=
<=

*/

/*
12. Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
13. Napisz program, który na podstawie współczynników równania kwadratowego(a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.
*/

//Program sprawdzający czy podana liczba jest parzysta czy nieparzysta

void task1()
{
	int number;
	cout << "insert number:\n";
	cin >> number;
	if (number%2==0)
	{
		cout << "the number is even \n";
	}

	else
	{
		cout << "the number is odd \n";
	}
}

 //Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero

void task2()
{
	int number;
	cout << "insert number:\n";
	cin >> number;
	if(number > 0)
	{
		cout << "the number is positive \n";
	}

	else if(number < 0)
	{
		cout << "the number is negative \n";
	}

	else if(number == 0)
	{
		cout << "the number is zero \n";
	}

}

//Program sprawdzający czy podany rok jest rokiem przestępnym

void task3()
{
	int year;
	cout << "insert year:\n";
	cin >> year;
	if(year%4==0)
	{ 
		cout << "the year is a leap year \n";
	}
	else
	{
		cout << "the year is not a leap year \n";
	}
}

//Program wyświetlający odpowiedni komunikat w zależności od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)

void task4()
{
	int mark;
	cout << "insert mark:\n";
	cin >> mark;
	if (mark == 6)
	{
		cout << "celujący \n";
	}
	else if (mark == 5)
	{
		cout << "bardzo dobry \n";
	}
	else if (mark == 4)
	{
		cout << "dobry \n";
	}
	else if (mark == 3)
	{
		cout << "dostateczny \n";
	}
	else if (mark == 2)
	{
		cout << "dopuszczający \n";
	}
	else if (mark == 1)
	{
		cout << "niedostateczny \n";
	}
	else
	{
		cout << "wrong mark \n";
	}
}

//Program sprawdzający czy podane hasło jest poprawne (np.jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").

void task5()
{
	int password;
	cout << "insert password:\n";
	cin >> password;
	if (password == 5462)
	{
		cout << "the password is correct \n";
	}
	else
	{
		cout << "the password is incorrect \n";
	}
}

//Program sprawdzający czy podana data jest poprawna (np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)

void task6()
{
	int day, month, year;
	cout << "insert day: \n";
	cin >> day;
	cout << "insert month: \n";
	cin >> month;
	cout << "insert year: \n";
	cin >> year;

	bool isLeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	if (day < 1
		|| day > 31

		|| month < 1
		|| month > 12

		|| (day == 31
			&& (month == 4
				|| month == 6
				|| month == 9
				|| month == 11))

		|| (month == 2
			&& day > 29)

		|| (month == 2
			&& day == 29
			&& !isLeapYear)
		)
	
		{
		cout << "the date doesnt exist\n";
		}
	{
		cout << "the date exists\n";
	}
}

//Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury (np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)

void task7()
{
	int temperature;
	cout << "insert temerature in celsius:\n";
	cin >> temperature;
	if (temperature >= 20)
	{
		cout << "warm \n";
	}
	else
	{
		cout << "cool \n";
	}
}

 //Program sprawdzjący czy podana liczba jest z przediału < 1; 15)

void task8()
{
	int number;
	cout << "insert number:\n";
	cin >> number;
	if (number > 0
		&& number < 15)
	{
		cout << "liczba jest w przedziale <1 ; 15) \n";
	}
	else
	{
		cout << "liczba nie jest w przedziale <1 ; 15) \n";
	}
}

// Program sprawdzający czy osoba jest pełnoletnia.

void task9()
{
	int age;
	cout << "insert the persons age:\n";
	cin >> age;
	if (age >= 18)
	{
		cout << "the person is an adult \n";
	}
	else
	{
		cout << "the person is not an adult \n";
	}
}

//Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.

void task10()
{
	int side1, side2, side3;
	cout << "insert the traingles lengths:\n";
	cin >> side1;
	cin >> side2;
	cin >> side3;

	if (side1 + side2 > side3)
	{
		cout << "you can build a triangle from those lengths \n";
	}
	else
	{
		cout << "you cant build a triangle from those lengths \n";
	}
}

//Napisz program, który będzie działać jako prosty kalkulator matematyczny, 
// umożliwiając użytkownikowi wybór operacji(dodawanie, odejmowanie, mnożenie, dzielenie) i wprowadzanie liczb do obliczeń.

void task11()
{

}
int main()
{
	task11();

	return 0;
}
