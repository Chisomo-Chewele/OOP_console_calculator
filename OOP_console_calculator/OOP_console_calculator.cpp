#include <iostream>
#include<cmath>
#include "Arithmetic.h"
#include "display.h"
#include "trig.h"
using namespace std;


Arithmetic arith;
display dis;
trigonometry trig;
int option1, option2, option3 = 0;
double result;
int x, y;

int main()
{
	do
	{
		dis.display_op();
		cin >> option1;
		if (option1 == 1) {
			dis.Arith_op();
			cin >> option2;
			switch (option2)
			{
			case 1:
			{
				dis.show_message(x, y);
				result = arith.add(x, y);
				dis.show_output(result);
				break;
			}
			case 2:
			{
				dis.show_message(x, y);
				result = arith.sub(x, y);
				dis.show_output(result);
				break;
			}
			case 3:
			{
				dis.show_message(x, y);
				result = arith.multi(x, y);
				dis.show_output(result);
				break;
			}
			case 4:
			{
				dis.show_message(x, y);
				result = arith.div(x, y);
				dis.show_output(result);
				break;
			}
			default:
				cout << "Invalid input\n";
				break;
			}
		}
		else if (option1 == 2) {
			dis.trig_op();
			cin >> option3;
			switch (option3)
			{
			case 1:
			{
				dis.show_trig_output(x);
				result = trig.cosine(x);
				dis.show_output(result);
				break;
			}
			case 2:
			{
				dis.show_trig_output(x);
				result = trig.sine(x);
				dis.show_output(result);
				break;
			}
			case 3:
			{
				dis.show_trig_output(x);
				result = trig.tangent(x);
				dis.show_output(result);
				break;
			}
			case 4:
			{
				dis.show_message(x, y);
				result = trig.hypotenuse(x, y);
				dis.show_output(result);
				break;
			}
			default:
				cout << "Invalid input\n";
				break;
			}
		}
		else if (option1 == 3)
		{
			system("cls");
		}
		else
		{
			cout << "retry" << endl;
		}
	} while (option1 != 3);

	return 0;
}