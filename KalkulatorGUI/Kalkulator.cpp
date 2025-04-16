#include <iostream>
#include "Kalkulator.h"
using namespace std;

void Kalkulator::add(double & a, double b) {
    this->cache = a + b;
}

void Kalkulator::add(double b){
    if(checkforMemory())
        this->cache += b;
}
void Kalkulator::subtract(double& a, double b) {
    this->cache =  a - b;
}

void Kalkulator::subtract(double b){
    if(checkforMemory())
        this->cache -= b;
}
void Kalkulator::multiply(double& a, double b) {
    this->cache = a * b;
}

void Kalkulator::multiply(double b){
    if(checkforMemory())
        this->cache *= b;
}
void Kalkulator::divide(double& a, double b) {
    this->cache = a / b;
}

void Kalkulator::divide(double b){
    if(checkforMemory())
        this->cache /= b;
}
void Kalkulator::modulo(double& a, double b) {
    this->cache = a - (int)(a / b) * b;
}

void Kalkulator::modulo(double b){
    if(checkforMemory())
        this->cache = this->cache - (int)(this->cache / b) * b;
}

void Kalkulator::sqrt(double b)
{
    this->cache = std::sqrt(b);
}
void Kalkulator::erase() {
    this->cache = 0;
    this->mem_used = false;
}
double Kalkulator::checkForMemory(double & cache) {
    if (mem_used == false || cache == 0) {
        return cache;
    }
    else {
        double a;
        cout << "Give number: ";
        cin >> a;
        return a;
    }
}

bool Kalkulator::checkforMemory(){
    if(this->cache == 0)
        return false;
    else {
        return true;
    }
}

void Kalkulator::setMemory(double display){
    this->Memory = display;
}

void Kalkulator::setCache(double display){
    this->cache = display;
}

double Kalkulator::getMemory(bool type) {
    if(type)
        return this->cache;
    else
        return this->Memory;
}
