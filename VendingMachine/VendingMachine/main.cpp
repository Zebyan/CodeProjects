#include "Cake.h"
#include "CakeMaker.h"
#include "CarouselOfCakes.h"
#include "CommandPanel.h"
#include "CommandTaker.h"
#include "RecipeCake.h"
#include <string>
#include <iostream>

using namespace std;



//I have the problem that my program always seems to pass an empty string when the users enters an name of the menu list
//Disclaimer:I wasn't able to identify my logic error,the program compiles and runs,but i don t know why,it seems to pass an empty string every time an cake from the menu is entered
int main()
{
	CommandPanel commandPanel;
	RecipeCake recipe1("ChocholateCake", 5);
	commandPanel.addRecipeToMenu(recipe1);
	RecipeCake recipe2("VanillaCake", 5);
	commandPanel.addRecipeToMenu(recipe2);
	RecipeCake recipe3("CandyCake", 5);
	commandPanel.addRecipeToMenu(recipe3);
	RecipeCake recipe4("Strawberry", 5);
	commandPanel.addRecipeToMenu(recipe4);
	int option;
	string cakeName;
	int nrOfCakes;

	do
	{
		cout << "____________________________________________________________________" << endl;
		cout << "Options: " << endl;
		cout << "1.Show Products: " << endl;
		cout << "2.Select Prouduct: " << endl;
		cout << "3.Select Products and the Quantity" << endl;
		cout << "4.Show Cakes on Carousel" << endl;
		cout << "0.Exit" << endl;
		cout << "Enter an Option: ";
		cin >> option;
		switch (option)
		{
		case 0:
			cout << "Exiting...." << endl;
			break;
		case 1:
			commandPanel.showProducts();
			break;
		case 2:
			cout << "Enter the Product Name: ";
			//also reads the spaces
			cin.ignore();
			getline(cin, cakeName);
			commandPanel.selectProduct(cakeName);

			break;
		case 3:
			cout << "Enter the Product Name: ";
			cin.ignore();
			getline(cin, cakeName);
			cout << "Enter the Amount You Want to Buy: ";
			cin >> nrOfCakes;
			commandPanel.selectProduct(cakeName, nrOfCakes);
			break;
		case 4:
			commandPanel.showProductsinCarousel();
			break;
		default:
			cout << "That Wan an Invalid Option";
			break;
		}

	} while (option != 0);

	return 0;
}