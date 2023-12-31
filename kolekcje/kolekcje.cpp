#include <iostream>
using namespace std;

/*
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
}

void task2()
{
	string userName;
	cout << "insert your name:\n";
	cin >> userName;

	cout << "witaj " << userName << " tutaj. \n";
}

void task3()
{
    char signFromUser;
    //signFromUser = 'a';
    cout << "Podaj znak\n";
    cin >> signFromUser;

    cout << "Podałeś znak " << signFromUser << "\n";

    //if (signFromUser >= 97 && signFromUser <= 122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        cout << "Znak jest małą literą alfabetu\n";
    else
        cout << "Znak nie jest małą literą alfabetu\n";

    signFromUser = signFromUser + 2;
    cout << "Podałeś znak " << signFromUser << "\n";

    signFromUser = 'a' + 2;
    cout << "Podałeś znak " << signFromUser << "\n";
}


//Napisz program, który poprosi cie o twoje imię i cię przywita.
void task4()
{
    string userName;
    //userName = "Ala";
    cout << "Podaj swoje imię:\n";
    cin >> userName;

    cout << "Witaj " << userName << " tutaj.\n";
}

//Napisz program, który policzy ile w napisie jest liter 'a'.
void task5()
{
    string textFromUser;
    cout << "Podaj tekst\n";
    cin >> textFromUser;

    //textFromUser = "";
    //textFromUser[0] = 'h';
    //std::cout << textFromUser[1] << "\n";
    //std::cout << textFromUser.length() << "\n"; 
    //if (textFromUser == "Ala")

    int counter = 0;
    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            counter++;
    }

    std::cout << "Małych liter 'a' jest " << counter << "\n";
}

// Napisz program, który będzie prosił o hasło. Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo.
void task6()
{
    string TextFromUser;
    cout << "insert password\n";
    cin >> TextFromUser;
    
    if (TextFromUser == "password")
    {
        cout << "the passoword is correct\n";
    }
    else
    {
        cout << "the passoword is incorrect\n";
    }
}

// Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
void task7()
{
    string textFromUser;
    cout << "insert text\n";
    cin >> textFromUser;

    int counterV = 0, counterC = 0;
    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a', 'o', 'u', 'y', 'e')
        {
            counterV++;
        }
        else if (textFromUser[i] == 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't','v', 'w', 'x', 'z')
        {
            counterC++;
        }
    }   

    cout << "the number of vowels equals: " << counterV << "\n";
    cout << "the number of consonants equals: " << counterC << "\n";

}

void task8()
{
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        cout << numbers[i] << ", ";
    cout << "\n";
}

// napisz obliczajacy srednia arytmetyczna elementow w tablicy liczb calkowitych
void task9()
{
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        cout << numbers[i] << ", ";
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        sum = sum + numbers[i];
    }

    double average = sum + 1.0 / SIZE_OF_ARRAY;
    cout << "the average of the number is: " << average << "\n";

}

//napisz program ktory zlicza ilosc wystapien danych w tablicy
void task10()
{
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        cout << numbers[i] << ", ";
    cout << "\n";

    // wersja 1
    for (int NumbersFromRange = LOWER_RANGE; NumbersFromRange <= UPPER_RANGE; NumbersFromRange++)
    {
        int numberOfOccourrences = 0;
        for (int j = 0; j < SIZE_OF_ARRAY; j++)
        {
            if (numbers[j] == NumbersFromRange)
                numberOfOccourrences++;
        }
        cout << "liczba " << NumbersFromRange << " wystapila " << numberOfOccourrences << "\n";
    }
}
int main()
{
	task10();
}
