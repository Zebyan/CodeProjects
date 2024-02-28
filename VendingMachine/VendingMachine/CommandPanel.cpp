#include "CommandPanel.h"

CommandPanel::CommandPanel()
{
	//i kept getting a buffer error and the solution was to use make_unique instead of new
	commandTaker = std::make_unique<CommandTaker>();

}

void CommandPanel::showProducts()
{
	cout << "Cakes For Sale: " << endl;

	int i = 1;
	//iterate and display the cakes from menu
	for (auto it = menu.begin(); it != menu.end(); ++it)
	{
		cout << i << "." << it->getName() << endl;
		i++;
	}
}

void CommandPanel::selectProduct(string name)
{
	bool findCake = false;
	for (auto it = menu.begin(); it != menu.end() ; ++it)
	{
		if (it->getName() == name)
		{
			//if the user selected a valid product from the recipe list
			//than we break from the loop and change findCake=true
			cout << "Comparing " << it->getName() << " with" << name << endl;
			commandTaker->takeCommand(&(*it));//cast to type RecipeCake
			findCake = true;
			cout << "Here Is Your Order: " << it->getName() << endl;
			break;
		}
	}
	if (!findCake)
	{
		cout << "Cake Was Not Found In The Menu..." << endl;
	}
}

void CommandPanel::selectProduct(string name,int nrOfProducts)
{

	for (auto it = menu.begin(); it != menu.end(); ++it)
	{
		if (it->getName() == name)
		{
			//if the user selected a valid product from the recipe list
			//than we break from the loop
			//cast to type RecipeCake
			commandTaker->takeCommand(&(*it),nrOfProducts);
			break;
		}
		else
		{
			cout << "Cake Was Not Found In The Menu!" << endl;
		}
	}
}

void CommandPanel::showProductsinCarousel()
{
	list<Cake> carouselCakes = commandTaker->getCakesFromCarousel();

	cout << "Cakes On The Carousel:"<<endl;

	for (auto it = carouselCakes.begin(); it != carouselCakes.end() ; ++it)
	{
		cout << it->getName() << endl;
	}
}

void CommandPanel::addRecipeToMenu(RecipeCake& recipe)
{
	menu.push_back(recipe);
	cout << "Recipe " << recipe.getName() << " added to menu" << endl;
} 