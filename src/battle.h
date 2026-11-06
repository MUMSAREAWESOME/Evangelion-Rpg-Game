#pragma once
#include <string>
#include "classes.h"

int attack(std::string target, Enemy& enemy, Player& player);

int battle(std::string name, int health, int damage, Player& player);
