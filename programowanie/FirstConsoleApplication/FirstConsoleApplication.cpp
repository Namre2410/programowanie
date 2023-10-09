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
1.
2.
3. 
4.
5.
6.
7.
*/

//Program sprawdzający czy podana liczba jest parzysta czy nieparzysta

void task1()
{
	int a;
	cout << "insert number:\n";
	cin >> a;
	if (a%2==0)
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
	int a;
	cout << "insert number:\n";
	cin >> a;
	if(a > 0)
	{
		cout << "the number is positive \n";
	}

	else if(a < 0)
	{
		cout << "the number is negative \n";
	}

	else if(a == 0)
	{
		cout << "the number is zero \n";
	}

}

//Program sprawdzający czy podany rok jest rokiem przestępnym

void task3()
{
	int a;
	cout << "insert year:\n";
	cin >> a;
	if(a%4==0)
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
	int a;
	cout << "insert mark:\n";
	cin >> a;
	if (a == 6)
	{
		cout << "celujący \n";
	}
	else if (a == 5)
	{
		cout << "bardzo dobry \n";
	}
	else if (a == 4)
	{
		cout << "dobry \n";
	}
	else if (a == 3)
	{
		cout << "dostateczny \n";
	}
	else if (a == 2)
	{
		cout << "dopuszczający \n";
	}
	else if (a == 1)
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
	int a;
	cout << "insert password:\n";
	cin >> a;
	if (a == 5462)
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
	double a, b;
	cout << "insert day: \n";
	cin >> a;
	cout << "insert month: \n";
	cin >> b;
	if (0 < a < 32, 0 < b < 13)
	{
		cout << "poprawna data \n";
	}
	else if (a == 0, b == 0)
	{
		cout << "niepoprawna data \n";
	}
	else if (a > 31, b > 12)
	{
		cout << "niepoprawna data \n";
	}
}

//Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury (np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)

void task7()
{
	int a;
	cout << "insert temerature in celsius:\n";
	cin >> a;
	if (a >= 20)
	{
		cout << "warm \n";
	}
	else
	{
		cout << "cool \n";
	}
}

int main()
{
	task6();

	return 0;
}
