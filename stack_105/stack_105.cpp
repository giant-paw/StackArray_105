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
		if (top == 4) {
			cout << "Number of data exceeds the limits." << endl;
			return "";
		}
	}
};

int main()
{
}
