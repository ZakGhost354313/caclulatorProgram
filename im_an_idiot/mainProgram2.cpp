#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void calcProgram(int firstNumber,int secondNumber,int Operation) {
	int Answer 
	if (Operation == "+") {
		if (firstNumber == "0") {
			if (secondNumber == "0") {
			    Answer = firstNumber + secondNumber;
				cout << "Answer : "<< Answer << "\n";
			}
		}
	}
}

int main() {
	int firstNumber1;
	int secondNumber1;
	char Operation1;
	
	cout << "INPUT(firstNumber) : ";
	cin >> firstNumber1;
	cout << "\n";
	cout << "INPUT(secondNumber) : ";
	cin >> secondNumber1;
	cout << "\n";
	cout << "INPUT(Operation) : ";
	cin >> Operation1;
	cout << "\n";
	
	calcProgram(firstNumber1,secondNumber1,Operation1)
    }
