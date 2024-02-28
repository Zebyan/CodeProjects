#pragma once
#include "Base.h"
#include "User.h"
#include "Manager.h"
#include <list>
#include <string>

void addUser(list<Base*>& base);
void addManager(list<Base*>& base);
void remove(list<Base*>& base);
void readFile(list<Base*>& base,string fileName);
