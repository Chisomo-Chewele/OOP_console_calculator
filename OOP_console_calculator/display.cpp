#include "display.h"
#include <iostream>
#include "Arithmetic.h"
#include "trig.h"
using namespace std;


void display::display_op()
{
	cout << "*******************************************************\n";
	cout << "Which type of calculation do want to perform?\n";
	cout << "1. Arithmetic\t";
	cout << "2.Trigonometry\t";
	cout << "3. Close\n";
	cout << "*******************************************************\n";
}
void display::Arith_op()
{
	cout << "*******************************************************\n";
	cout << "1. Addition\t";
	cout << "\t2. Subtraction\n";
	cout << "3. Multiplication\t";
	cout << "4. Division\n";
	cout << "*******************************************************\n";
}
void display::trig_op()
{
	cout << "*******************************************************\n";
	cout << "Choose a trig function\n" << "1. Cosine\t" << "2. Sine\n" << "3. Tangent\t" << "4. hypotenuse\n";
	cout << "*******************************************************\n";
}
int display::show_message(int& k, int& l)
{
	cout << "Enter two numbers\n";
	cout << "Enter first number\n";
	cin >> k;
	cout << "Enter second number\n";
	cin >> l;

	return k, l;
}
double display::show_output(double& result)
{
	cout << "result is : ";
	cout << result << endl;
	return result;
}
int display::show_trig_output(int& k)
{
	cout << "Enter angle \n";
	cin >> k;
	return k;
}