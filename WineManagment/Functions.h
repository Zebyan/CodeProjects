#pragma once
#include "VinSpumat.h"
#include "VinNespumat.h"
#include <list>
#include <sstream>


void readCSV(string numeFisier, list<Vin*>& vin);

void cautare(list<Vin*>& vin, string perlaj);