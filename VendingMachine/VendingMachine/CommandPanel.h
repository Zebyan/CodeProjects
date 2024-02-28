#pragma once
#include <iostream>
#include <list>
#include "RecipeCake.h"
#include "CommandTaker.h"


using namespace std;


class CommandPanel {
	list<RecipeCake> menu;
	unique_ptr<CommandTaker> commandTaker;
public:
	CommandPanel();

	//displays all the products available for sale
	void showProducts();

	//selects the desired cake from the menu and sends it
	//to CommandTaker to process the order
	void selectProduct(string name);

	//overrides the previous function also mentioning
	//the amount of the cake
	void selectProduct(string name, int numberOfProducts);
	
	//this function will keep track of the 
	//cakes in the carousel
	void showProductsinCarousel();

	void addRecipeToMenu(RecipeCake& recipe);
};