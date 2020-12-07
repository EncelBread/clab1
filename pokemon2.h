#pragma once
#include "pokemon.h"
#include <iostream>
class pokemon2 :
	protected pokemon
{
protected:
	int special_attack;
	int special_defense;
public:
	pokemon2();
	~pokemon2();

	pokemon2(std::string);
	pokemon2(std::string, int);
	pokemon2(std::string, int, int);
	pokemon2(std::string, int, int, int);
	pokemon2(std::string, int, int, int, int);
	pokemon2(std::string, int, int, int, int, int);
	pokemon2(std::string, int, int, int, int, int, int);

	void setSpecialAttack(int special_attackV);
	void setSpecialDefense(int special_defenseV);

	int getSpecialAttack() { return special_attack; }
	int getSpecialDefense() { return special_defense; }
	void printFile();
};
