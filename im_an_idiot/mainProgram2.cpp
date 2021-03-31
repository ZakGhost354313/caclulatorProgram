#include <iostream>
#include <cmath>
#include <string>

//what other namespace am i going to use with this?
using namespace std;

//function definition
void calcProgram(int firstNumber,int secondNumber,int Operation, int thirdNumber = 1) { 
    string Answer = ""
	// main thingy
	if (Operation == "+") {
		Answer = firstNumber + secondNumber;
		if (firstNumber == "0") {
			if (secondNumber == "0") {
				cout << "Answer : "<< Answer << "\n";
			}
		}
	}
	if (Operation == "-"){
		Answer = firstNumber - secondNumber;
		if (firstNumber == "0") {
			if (secondNumber == "0") {
				cout << "Answer : "<< Answer << "\n";
			}
		}
	}
	if (Operation == "÷" || Operation == "/") {
		Answer = firstNumber / secondNumber
	}
	if (Operation == "×" || Operation == "*") {
		Answer = firstNumber * secondNumber
	}
}

int main() {
	int firstNumber1;
	int secondNumber1;
	char Operation1;
	
	//input
	cout << "INPUT(firstNumber) : ";
	cin >> firstNumber1;
	cout << "\n";
	cout << "INPUT(secondNumber) : ";
	cin >> secondNumber1;
	cout << "\n";
	cout << "INPUT(Operation) : ";
	cin >> Operation1;
	cout << "\n";
	
	//function call
	calcProgram(firstNumber1,secondNumber1,Operation1);
}
