#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number 1 - 4\n";
	int num;
	cin >> num;

	switch (num)
	{
	case 1: cout << "You picked 1!\n";
		break;
	case 2: cout << "You picked 2!\n";
		break;
	case 3: cout << "You picked 3!\n";
		break;
	case 4: cout << "You picked 4!\n";
		break;
	default: cout << "That isn't a valid number. \n";
	}

	system("pause");
	return 0;

}