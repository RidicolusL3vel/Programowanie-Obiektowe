#pragma once
#include <cmath>
class Kalkulator
{
private:
    double cache = 0.0;
    double Memory = 0.0;
	bool mem_used = false;
	bool exit_operand = false;

public:
    void add(double& a, double b);          //dwa parametry dla kalkulatora cmd

	void subtract(double& a, double b);

	void multiply(double& a, double b);

	void divide(double& a, double b);

	void modulo(double& a, double b);

    void add(double b);                  //jeden parametr dla kalkulatora GUI

    void subtract(double b);

    void multiply(double b);

    void divide(double b);

    void modulo(double b);

    void sqrt(double b);  //dla GUI i CMD

    double checkForMemory(double & memory);  //dla kalkulatora cmd

    bool checkforMemory();    //dla kalkulatora GUI

    void setMemory(double display);    //dla kalkulatora GUI

    void setCache(double display);

    void erase();

    double getMemory(bool type);
	
    void exit() {                    //te dwie są do cmd
		this->exit_operand = true;
	}

	bool close() {
		return exit_operand;
	};
};

