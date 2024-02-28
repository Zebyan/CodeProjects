#include "CarouselOfCakes.h"

CarouselOfCakes::CarouselOfCakes() {}
bool CarouselOfCakes::addCake(Cake* cake)
{
	//adds a cake if the current capacity is less than max capacity of 10 and if the cake is not an empty string

	if (getCurrentCapacity() <= maxCapacity && !cake->getName().empty())
	{
		this->cake.push_back(*cake);
		return true;
	}
	else
	{
		return false;
	}

}

Cake CarouselOfCakes::getCake(string name)
{

	//iterate through the cakes in the carousel
	auto it = cake.begin();
	for (it; it != cake.end(); ++it)
	{
		cout << "Debug:Cake name in getCakesFromCarousel: " << it->getName() << endl;

		//return the cake if is found
		if (it->getName() == name)
		{
			return *it;
		}
	}
	//return a empty cake if the given name is not found
	return Cake("");
}

int CarouselOfCakes::getCurrentCapacity()
{
	//return the number of cakes in the carousel
	return static_cast<int>(cake.size());
}