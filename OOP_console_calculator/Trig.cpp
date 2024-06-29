#include <cmath>
#include "trig.h"                                                                                                                                                               

double trigonometry::cosine(double c)
{
	return cos(c);
}

double trigonometry::sine(double c)
{
	return sin(c);
}

double trigonometry::tangent(double c)
{
	return tan(c);
}
double trigonometry::hypotenuse(double c, double d)
{
	double hyp;
	hyp = sqrt(pow(c, 2) + pow(d, 2));
	return hyp;
}