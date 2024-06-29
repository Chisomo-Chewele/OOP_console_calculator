#pragma once
class display
{
private:
	int k, l;

public:
	void display_op();
	void Arith_op();
	void trig_op();
	int show_message(int& k, int& l);
	double show_output(double& result);
	int show_trig_output(int& x);
}; 
