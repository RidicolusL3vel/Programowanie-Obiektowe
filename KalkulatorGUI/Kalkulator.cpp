#include <iostream>
#include "Kalkulator.h"
using namespace std;

//double memory = 0; //pamięć kalkulatora
//bool mem_used = false; //czy pamięć jest używana
//bool exit_operand = false; //wyjście z nieskończonej pętli w int main()

// int Menu() {
//     cout << "Choose action: \n"
//         << "1) +\n"
//         << "2) -\n"
//         << "3) *\n"
//         << "4) /\n"
//         << "5) %\n"
//         << "6) Clear memory\n"
// 		<< "7) Show memory\n"
//         << "Enter any other number to exit\n";
//     int number;
//     cin >> number;
//     return number;
// }

void Kalkulator::add(double & a, double b) {
    this->memory = a + b;
}

void Kalkulator::add(double b){
    if(checkforMemory())
        this->memory += b;
}
void Kalkulator::subtract(double& a, double b) {
    this->memory =  a - b;
}

void Kalkulator::subtract(double b){
    if(checkforMemory())
        this->memory -= b;
}
void Kalkulator::multiply(double& a, double b) {
    this->memory = a * b;
}

void Kalkulator::multiply(double b){
    if(checkforMemory())
        this->memory *= b;
}
void Kalkulator::divide(double& a, double b) {
    this->memory = a / b;
}

void Kalkulator::divide(double b){
    if(checkforMemory())
        this->memory /= b;
}
void Kalkulator::modulo(double& a, double b) {
    this->memory = a - (int)(a / b) * b;
}

void Kalkulator::modulo(double b){
    if(checkforMemory())
        this->memory = this->memory - (int)(this->memory / b) * b;
}

void Kalkulator::sqrt(double b)
{
    this->memory = std::sqrt(b);
}
void Kalkulator::erase() {
    this->memory = 0;
    this->mem_used = false;
}
double Kalkulator::checkForMemory(double & memory) {
    if (mem_used == false || memory == 0) {
        return memory;
    }
    else {
        double a;
        cout << "Give number: ";
        cin >> a;
        return a;
    }
}

bool Kalkulator::checkforMemory(){
    if(this->memory == 0)
        return false;
    else {
        return true;
    }
}

void Kalkulator::setMemory(double display){
    this->memory = display;
}

double Kalkulator::getMemory() {
    return this->memory;
}

//void firstMultiplyOrDivide(double & memory) {
//    if (memory == 0)
//        memory = 1;
//}
//double getSecondNumber() {
//	double b;
//	cout << "Give second number: ";
//	cin >> b;
//	return b;
//}

/*
void CalculatorBody() {
    Kalkulator Calc;
    double a, b;
    if(memory == 0)
		mem_used = false;
    switch (Menu()) {
        case 1: {
			a = Calc.checkForMemory(memory);
			b = getSecondNumber();
            Calc.add(a, b);
            break;
        }
        case 2: {
            a = Calc.checkForMemory(memory);
			b = getSecondNumber();
            Calc.subtract(a, b);
            break;
        }
        case 3: {
            firstMultiplyOrDivide(memory);
            a = Calc.checkForMemory(memory);
            b = getSecondNumber();
            Calc.multiply(a, b);
            break;
        }
        case 4: {
            firstMultiplyOrDivide(memory);
            a = Calc.checkForMemory(memory);
            b = getSecondNumber();
            if (b == 0) {
				cout << "Error: division by 0\n\n";
				break;
            }
            Calc.divide(a, b);
            break;
        }
        case 5: {
            a = Calc.checkForMemory(memory);
            b = getSecondNumber();
            if (b == 0) {
				cout << "Error: modulo by 0\n\n";
                break;
            }
            Calc.modulo(a, b); //a - (int)(a / b) * b działa jak modulo z jakiegoś powodu
            break;
        }
        case 6: {
			Calc.erase(memory);
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
			Calc.exit();
            break;
        }
    }
}
*/
// int main()//błędy: delenie przez 0 i modulo przez 0
// {
//     //Kalkulator Calc;
//     //while (!Calc.close()) {
//       //  CalculatorBody();
//     //}
//     /*
//     Calc1.add(2);
//     Calc1.readMemory();
//     Calc1.add(4);
//     Calc1.readMemory();*/
//     /*while (!Calc.close()) {
//         switch (Menu()) {
//             case 1: {
//                     a = Calc.checkForMemory();
//                     b = getSecondNumber();
//                     Calc.add(a, b);
//                     break;
//             }

//             default:
//                 Calc.exit();
//                 break;
//         }

//     }*/
// }
