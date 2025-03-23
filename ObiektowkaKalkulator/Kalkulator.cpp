#include <iostream>
using namespace std;

double memory = 0; //pamięć kalkulatora
bool mem_used = false; //

int Menu() {
    cout << "Choose action: \n"
        << "1) +\n"
        << "2) -\n"
        << "3) *\n"
        << "4) /\n"
        << "5) %\n"
        << "6) Clear memory\n"
		<< "7) Show memory\n"
        << "ENTER - exit\n";
    int number;
    cin >> number;
    return number;
}

double add(double a, double b) {
    if (mem_used) {
        a = memory;
    }
    return a + b;
}
double subtract(double a, double b) {
    if (mem_used)
        a = memory;
    return a - b;
}
double multiply(double a, double b) {
    if (mem_used)
        a = memory;
    return a * b;
}
double divide(double a, double b) {
    if (mem_used)
        a = memory;
    return a / b;
}
double modulo(double a, double b) {
    if (mem_used)
        a = memory;
    return a - (int)(a / b) * b;
}
void erase(double& memory) {
    memory = 0;
}
double memory_used(double & memory) {
	if (memory != 0) {
		cout << "Memory used: " << memory << endl;
		return memory;
	}
	else {
		cout << "Memory is empty\nGive the first number: ";
		return cin >> a;
	}
}
void CalculatorBody() {
    int a, b;
    switch (Menu()) {
        case 1: {
			a = memory_used(memory);
            cout << "Give number: ";
            cin >> b;
            cout << add(a, b) << " (added to memory)\n";
            memory += add(a, b);
            break;
        }
        case 2: {
            a = memory_used(memory);
            cout << "Give number: ";
            cin >> b;
            cout << subtract(a, b) << " (added to memory)\n";
            memory += subtract(a, b);
            break;
        }
        case 3: {
            a = memory_used(memory);
            cout << "Give number: ";
            cin >> b;
            cout << multiply(a, b) << " (added to memory)\n";
            memory += multiply(a, b);
            break;
        }
        case 4: {
            a = memory_used(memory);
            cout << "Give number: ";
            cin >> b;
            if (b == 0) {
				cout << "Error: division by 0\n";
				break;
            }
            cout << divide(a, b) << " (added to memory)\n";
            memory += divide(a, b);
            break;
        }
        case 5: {
            a = memory_used(memory);
            cout << "Give number: ";
            cin >> b;
            if (b == 0) {
				cout << "Error: modulo by 0\n";
                break;
            }
            cout << modulo(a, b) << " (added to memory)\n";
            memory += modulo(a, b);
            break;
        }
        case 6: {
			erase(memory);
			cout << "Memory cleared\n";
			break;
        }
        case 7: {
			cout << "In current memory: " << memory << endl;
        }
        default: {
            cout << "Ending program...\n";
            break;
        }
    }
}

int main()//błędy: delenie przez 0 i modulo przez 0
{
    while (true) {
        CalculatorBody();

    }
}