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
void CalculatorBody() {
    int a, b;
    switch (Menu()) {
    case 1: {
        if (!mem_used) {
            cout << "Give numbers: ";
            cin >> a >> b;
        }
        else {
            cout << "Give number: ";
            cin >> b;
        }
        cout << add(a, b);
        memory += add(a, b);
        break;
    }
    case 2: {
        if (!mem_used) {
            cout << "Give numbers: ";
            cin >> a >> b;
        }
        else {
            cout << "Give number: ";
            cin >> b;
        }
        cout << subtract(a, b);
        memory += subtract(a, b);
        break;
    }
    case 3: {
        if (!mem_used) {
            cout << "Give numbers: ";
            cin >> a >> b;
        }
        else {
            cout << "Give number: ";
            cin >> b;
        }
        cout << multiply(a, b);
        memory += multiply(a, b);
        break;
    }
    case 4: {
        if (!mem_used) {
            cout << "Give numbers: ";
            cin >> a >> b;
        }
        else {
            cout << "Give number: ";
            cin >> b;
        }
        cout << divide(a, b);
        memory += divide(a, b);
        break;
    }
    case 5: {
        if (!mem_used) {
            cout << "Give numbers: ";
            cin >> a >> b;
        }
        else {
            cout << "Give number: ";
            cin >> b;
        }
        cout << modulo(a, b);
        memory += modulo(a, b);
        break;
    }
    }
}

int main()//błędy: delenie przez 0 i modulo przez 0hjhj
{
    //while (true) {
    CalculatorBody();

    //}
}