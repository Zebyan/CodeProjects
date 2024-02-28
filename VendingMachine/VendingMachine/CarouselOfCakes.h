#pragma once
#include "Cake.h"
#include <list>


class CarouselOfCakes {
	list <Cake> cake;
	int maxCapacity = 10;
	int lowLimit = 3;
public:
	CarouselOfCakes();

	//add cake to carousel
	bool addCake(Cake* cake);

	//get cake from the carousel
	Cake getCake(string name);

	//get the number of cakes that are at that moment in the carousel
	int getCurrentCapacity();
};