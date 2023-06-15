#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;

public:

	//constructor
	StackArray() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {																// Step 1
			cout << "Number of data exceeds the limits." << endl;
			return "";
		}

		top++;																		// Step 2
		stack_array[top] = element;													// Step 3
		cout << endl;
		cout << element << " ditambahkan (pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) {																// Step 1
			cout << "\nStack is empty. Cannot pop." << endl;						// step1.a
			return;																	// step 1.b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl;			// step 2
		top--;																		// step 3 decrement
	}

	//Method for check if data is empty
	bool empty() {
		return(top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}

		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main()
{
	StackArray s;
	while (true) {
		cout << endl;
		cout << "\n=== Stack Menu ===\n";
		cout << "1. PUSH\n";
		cout << "2. POP\n";
		cout << "3. DISPLAY\n";
		cout << "4. EXIT\n";
		cout << "\nEnter your Choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		
		switch (ch) {
		case '1': {
			cout << "\nEnter a elmeent : ";
			string element;
			getline(cin, element);
			s.push(element);
			break;
		}
	}
}
