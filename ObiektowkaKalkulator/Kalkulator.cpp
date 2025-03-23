#include <iostream>
using namespace std;

double memory = 0; //pamięć kalkulatora
bool mem_used = false; //czy pamięć jest używana
bool exit_operand = false; //wyjście z nieskończonej pętli w int main()

int Menu() {
    cout << "Choose action: \n"
        << "1) +\n"
        << "2) -\n"
        << "3) *\n"
        << "4) /\n"
        << "5) %\n"
        << "6) Clear memory\n"
		<< "7) Show memory\n"
        << "Enter any other number to exit\n";
    int number;
    cin >> number;
    return number;
}

double add(double & a, double b) {
    return a + b;
}
double subtract(double& a, double b) {
    return a - b;
}
double multiply(double& a, double b) {
    return a * b;
}
double divide(double& a, double b) {
    return a / b;
}
double modulo(double& a, double b) {
    return a - (int)(a / b) * b;
}
void erase(double& memory) {
    memory = 0;
}
double memory_used(double & memory) {
	if (memory != 0 && mem_used == true) {
		cout << "Memory used: " << memory << endl;
		return memory;
	}
	else {
		cout << "Memory is empty\nGive the first number: ";
        int a = 0;
		mem_used = true;
        cin >> a;
		return a;
	}
}
void firstMultiplyOrDivide(double & memory) {
    if (memory == 0)
        memory = 1;
}
double getSecondNumber() {
	double b;
	cout << "Give second number: ";
	cin >> b;
	return b;
}


void CalculatorBody() {
    double a, b;
    if(memory == 0)
		mem_used = false;
    switch (Menu()) {
        case 1: {
			a = memory_used(memory);
			b = getSecondNumber();
            memory = add(a, b);
            break;
        }
        case 2: {
            a = memory_used(memory);
			b = getSecondNumber();
            memory = subtract(a, b);
            break;
        }
        case 3: {
            firstMultiplyOrDivide(memory);
            a = memory_used(memory);
            b = getSecondNumber();
            memory = multiply(a, b);
            break;
        }
        case 4: {
            firstMultiplyOrDivide(memory);
            a = memory_used(memory);
            b = getSecondNumber();
            if (b == 0) {
				cout << "Error: division by 0\n\n";
				break;
            }
            memory = divide(a, b);
            break;
        }
        case 5: {
            a = memory_used(memory);
            b = getSecondNumber();
            if (b == 0) {
				cout << "Error: modulo by 0\n\n";
                break;
            }
            memory = modulo(a, b); //a - (int)(a / b) * b działa jak modulo z jakiegoś powodu
            break;
        }
        case 6: {
			erase(memory);
			mem_used = false;
			cout << "Memory cleared\n\n";
			break;
        }
        case 7: {
            cout << "In current memory: " << memory << "\n\n";
            break;
        }
        default: {
            cout << "Ending program...\n\n";
			exit_operand = true;
            break;
        }
    }
}

int main()//błędy: delenie przez 0 i modulo przez 0
{
    while (true) {
        CalculatorBody();
		if (exit_operand)
            break;
    }
}