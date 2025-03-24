#pragma once
using namespace std;
class Kalkulator
{
private:
	double memory = 0;
	bool mem_used = false;
	bool exit_operand = false;

public:
	void add(double& a, double b);

	void subtract(double& a, double b);

	void multiply(double& a, double b);

	void divide(double& a, double b);

	void modulo(double& a, double b);

	double checkForMemory(double & memory);

	void erase(double& memory);

	double getMemory();
	
	void exit() {
		this->exit_operand = true;
	}

	bool close() {
		return exit_operand;
	};
};

