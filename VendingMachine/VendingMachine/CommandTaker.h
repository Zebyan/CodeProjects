#pragma once
#include <iostream>
#include "RecipeCake.h"
#include "CakeMaker.h"
#include "CarouselOfCakes.h"
#include <list>

using namespace std;
class CommandTaker {
	unique_ptr<RecipeCake> carouselRecipe;
	unique_ptr<CakeMaker> cakeMaker;
	unique_ptr<CarouselOfCakes> carousel;

	//if there are not enough cakes in the carousel,this will require
	//CakeMaker to make cakes until the carousel is at full capacity
	bool refillCarousel();

	//verify the curent capacity in CarouselOfCakes
	bool checkCarouselOfCakes();
public:
	CommandTaker();

	//takes the command from the CommandPanel and passes it to CakeMaker
	//Before it checks again if the cake is in the CarouselOfCakes
	//if the cake is there,than it takes the cake straight from the CarouselOfCakes
	Cake takeCommand(RecipeCake* recipe);

	//takes the order if there are more than 1 cake on the order
	//if it requires an amount of cakes,than we ask the CakeMaker 
	list <Cake> takeCommand (RecipeCake* recipe, int nrOfCakes);

	//returns the list of cakes from the CarouselOfCakes
	list <Cake> getCakesFromCarousel();

};