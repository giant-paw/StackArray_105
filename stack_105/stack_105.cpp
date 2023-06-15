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

		
	}

	//Method for check if data is empty
	bool empty() {
		return(top == -1);
	}
};

int main()
{
}
