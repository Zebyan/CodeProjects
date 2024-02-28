#include "CommandTaker.h"

CommandTaker::CommandTaker()
	: carouselRecipe(make_unique<RecipeCake>("", 0)),
	cakeMaker(make_unique<CakeMaker>()),
	carousel(make_unique<CarouselOfCakes>()) {}

bool CommandTaker::checkCarouselOfCakes()
{
	//returns true if the capacity is valid (between 3 and 10)
	if (carousel->getCurrentCapacity() <= 10 && carousel->getCurrentCapacity() >= 3)
	{
		return true;
	}

	return false;
}

bool CommandTaker::refillCarousel()
{
	//first we add cakes until full capacity
	while (carousel->getCurrentCapacity() < 10)
	{
		//create a new cake with the function takeCommand of CakeMaker
		Cake newCake = cakeMaker->takeCommand(carouselRecipe.get());
		//check if we can add the new cake to the carousel by using addCake functio
		if (!carousel->addCake(&newCake))
		{
			//return false because the carousel can no be refilled to the max
			return false;
		}
	}
	//if the while loop completes succesfully (meaning the carousel is full)
	//than return true indicating that the carousel in now full
	return true;
}

Cake CommandTaker::takeCommand(RecipeCake* recipe)
{
	//first check if the carousel needs to be refiled
	if (!checkCarouselOfCakes())
	{
		refillCarousel();
	}

	//get a cake from the recipe that is the same as the recipe
	Cake takeCake = carousel->getCake(recipe->getName());

	//if the cake is found in the carousel,than return it
	if (!takeCake.getName().empty())
	{
		cout << "takeCake.getName()" << takeCake.getName() << endl;
		return takeCake;
	}
	cout << "CakeMaker" << endl; 
	return cakeMaker->takeCommand(recipe);
}

list<Cake> CommandTaker::takeCommand(RecipeCake* recipe, int nrOfCakes) {
	std::list<Cake> cakeList;

	// Gets a number equal to nrOfCakes from the carousel
	for (int i = 0; i < nrOfCakes; ++i) {
		// Makes sure we always have enough cakes in the carousel
		if (!checkCarouselOfCakes()) {
			// Attempts to refill the carousel
			if (!refillCarousel()) {
				// Handles the case where the carousel cannot be refilled
				// You might want to throw an exception or handle it in a specific way
				return cakeList;
			}
		}

		// Gets the cake from the carousel or makes a new one
		Cake takeCake = carousel->getCake(recipe->getName());

		// Adds the cake to the list
		if (!takeCake.getName().empty()) {
			cakeList.push_back(takeCake);
		}
		else {
			cakeList.push_back(cakeMaker->takeCommand(recipe));
		}
	}

	// Returns a list of cakes
	return cakeList;
}

list <Cake> CommandTaker::getCakesFromCarousel()
{
	list <Cake> cakeList;

	//iterate through the cakes from the carousel based on its current capacity
	for (int i = 0; i < carousel->getCurrentCapacity(); i++)
	{
		Cake cake = carousel->getCake("");


		//if the cake has not empty string as name,means is valid and it is added to the list
		if (!cake.getName().empty())
		{
			cout << "Cake name in getCakesFromCarousel: " << cake.getName() << endl;
			cakeList.push_back(cake);
		}
	}

	return cakeList;
}