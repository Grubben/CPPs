// #include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


#include <iostream>
#include <cmath>

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal	*arr[10];
	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	for (size_t i = 0; i < 10; i++)
	{
		delete arr[i];
	}

	return 0;
}