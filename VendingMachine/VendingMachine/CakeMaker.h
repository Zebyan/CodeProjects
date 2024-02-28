#pragma once
#include "RecipeCake.h"
#include "Cake.h"
class CakeMaker {
public:
	CakeMaker();
	
	//takes 5 seconds to create the recipe
	Cake takeCommand(RecipeCake* recipe);
};
