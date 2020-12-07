#pragma once
#include "pokemon.h"
#include <iostream>
class pokemon1 :
	protected pokemon
{
protected:
	int special_attack;
	int special_defense;
public:
	pokemon1();
	~pokemon1();

	pokemon1(std::string);
	pokemon1(std::string, int);
	pokemon1(std::string, int, int);
	pokemon1(std::string, int, int, int);
	pokemon1(std::string, int, int, int, int);
	pokemon1(std::string, int, int, int, int, int);
	pokemon1(std::string, int, int, int, int, int, int);

	void setSpecialAttack(int special_attackV);
	void setSpecialDefense(int special_defenseV);

	int getSpecialAttack() { return special_attack; }
	int getSpecialDefense() { return special_defense; }
	void printFile();
};



