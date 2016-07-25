#include <iostream>
#include <cstring>
using namespace std;

void menu ();

int main()
{
	/*variables*/
	
	char charName[15];
	int coffeeChoice;
	/*Function*/
	cout << "Hello and welcome to the coffee shop! To begin, may I have your name?\n";
	cin >> charName;
	cout << charName << "! That's my favorite name. Well what size coffee shall I get for you " << charName << "?\n";
	cout << "We have a choice of: \n" << "1. small \n" << "2. medium \n" << "3. large\n" << "(4. leave)\n";
	cin >> coffeeChoice;
	while (coffeeChoice != 4)
	{
		switch (coffeeChoice)
		{
		case 1: cout << "One small cup of coffee coming right up! \n" << "...\n" << "Here's your coffee " << charName << ". Enjoy!\n\n";
			break;
		case 2: cout << "All right, one medium cup! Please give us a second to make it for you. \n" << "...\n" << "...\n" << "Okay here's your coffee " << charName << ". Enjoy!\n\n";
			break;
		case 3: cout << "A large coffee for your long day! We'll call you up when we finished with your order.\n" << "...\n" << "...\n" << "...\n" << charName << " here is your coffee. Enjoy!\n\n";
			break;
		default: cout << "That is not a choice!\n\n";
		}
		menu();
		cin >> coffeeChoice;
	}
	cout << "goodbye!\n\n";
	system("pause");
	return 0;
}

void menu()
{
	cout << "Is there anything else you would like?\n";
	cout << "1. Small Coffee\n" << "2. Medium Coffee \n" << "3. Large Coffee \n" << "(4. leave)\n";
}
