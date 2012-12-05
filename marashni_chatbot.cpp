// Author: Taylor Hawkins
// Handle: Marashni
// Purpose: This is a simple chatbot

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	// Declarations
	int Condition = 0;
	string Test = "Good day!";
	string Input = "";
	string Output = "";
	string Reply[] = {
		"How very interesting.",
		"Please, go on.",
		"I'm not so sure about that.",
		"Is that so?",
		"Brilliant!",
		"That's nice. Now run along."
	};

	srand(time(0));
	
	cout << "This is a simple chatbot. To exit type 'Good day!' and press enter." << endl;
	
	// Initialize Session
	while(Condition != 1) {
		cout << ">";
		getline(cin, Input);
		if (Input.compare(Test) == 0)
		{
			Condition = 1;
		}
		else
		{
			int Selection = rand() % 6;
			Output = Reply[Selection];
			cout << Output << endl;
		}
	}

	return 0;
}