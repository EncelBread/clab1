#pragma once
#include "pokemon.h"
#include <iostream>
class pokemon3 :
	protected pokemon
{
protected:
	int special_attack;
	int special_defense;
public:
	pokemon3();
	~pokemon3();

	pokemon3(std::string);
	pokemon3(std::string, int);
	pokemon3(std::string, int, int);
	pokemon3(std::string, int, int, int);
	pokemon3(std::string, int, int, int, int);
	pokemon3(std::string, int, int, int, int, int);
	pokemon3(std::string, int, int, int, int, int, int);

	void setSpecialAttack(int special_attackV);
	void setSpecialDefense(int special_defenseV);

	int getSpecialAttack() { return special_attack; }
	int getSpecialDefense() { return special_defense; }
	void printFile();
};
