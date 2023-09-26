//1. Program obliczający średnią artmetyczną 2 liczb
//2. Program obliczający pole prostokąta.
//3. Program obliczający objętość stożka.
//4. Program obliczający pole koła.
//5. Program obliczający wartość wyrażenia a ^ 2 + b ^ 2
//6. Program obliczający pole trójkąta o podstawie b i wysokości h
//7. Program obliczający objętość kuli o promieniu r
//8. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
//9. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

#include <iostream>

using namespace std;

void task1()
{
	double FirstNumber, SecondNumber;
	cout << "insert First number:\n";
	cin >> FirstNumber;
	cout << "insert Second number:\n";
	cin >> SecondNumber;

	double AverageofgivenNumbers = (FirstNumber + SecondNumber) / 2;

	cout << "The average equals:" << AverageofgivenNumbers << "\n";
}

int main()
{
	task1();

	return 0;
}
