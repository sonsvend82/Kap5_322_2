#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void main()
{
	char x=0;
	int n=0;
	string input;

	while (true)
	{
		cout << "Enter amount of Ascii to output: ";
		getline(cin, input);
		stringstream myStream(input);
		if (myStream >> n)
		{
			break;
		}
		cout << "Amount must be a number" << endl;
	}

	for (int i=0; i<= n; i++)
	{
		x=i;
		cout << x;
		if ((i%16)==15)
		{
			cout << endl;
		}
	}
	cout << endl;
}