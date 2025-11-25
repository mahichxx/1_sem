#include <iostream>
void main()
{
	double y, r, b = 4.5e-4, a = 1.75;
	y = a* exp(-2*b)- sqrt(1+a);
	r = log(1+20*b)/(1+a);
	std::cout << "y=" << y << std::endl;
	std::cout << "r=" << r;
}

