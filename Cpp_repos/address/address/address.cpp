#include<iostream>

int main()
{
	int donuts = 6;
	double cups = 4.5;

	std::cout << "donuts value = " << donuts;
	std::cout << " and donuts address = " << &donuts << std::endl;
	std::cout << "cups value = " << cups;
	std::cout << " and cups address = " << &cups << std::endl;
	//std::cout << "And the different between two address = " << &cups - &donuts << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(double) << std::endl;

	return 0;
}