#include "CakeMaker.h"
#include <chrono>
#include <thread>


CakeMaker::CakeMaker() {};

Cake CakeMaker::takeCommand(RecipeCake* recipe)
{
	//we simulate the time needed to make a new cake
	cout << "Waiting..." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	//create a new cake based on the recipe
	return Cake(recipe->getName());
}
