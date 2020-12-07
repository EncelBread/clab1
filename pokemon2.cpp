#include "pch.h"
#include "pokemon2.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

pokemon2::pokemon2()
{
}


pokemon2::~pokemon2()
{
}

pokemon2::pokemon2(std::string nameV) {
	name = nameV;
	health = 0;
	attack = 0;
	defense = 0;
	speed = 0;
	special_attack = 0;
	special_defense = 0;
}

pokemon2::pokemon2(std::string nameV, int healthV) {
	name = nameV;
	health = healthV;
	attack = 0;
	defense = 0;
	speed = 0;
	special_attack = 0;
	special_defense = 0;
}

pokemon2::pokemon2(std::string nameV, int healthV, int attackV) {
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = 0;
	speed = 0;
	special_attack = 0;
	special_defense = 0;
}

pokemon2::pokemon2(std::string nameV, int healthV, int attackV, int defense_V) {
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = defense_V;
	speed = 0;
	special_attack = 0;
	special_defense = 0;
}

pokemon2::pokemon2(std::string nameV, int healthV, int attackV, int defense_V, int speed_V) {
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = defense_V;
	speed = speed_V;
	special_attack = 0;
	special_defense = 0;
}

pokemon2::pokemon2(std::string nameV, int healthV, int attackV, int defense_V, int speed_V, int special_attackV) {
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = defense_V;
	speed = speed_V;
	special_attack = special_attackV;
	special_defense = 0;
}

pokemon2::pokemon2(std::string nameV, int healthV, int attackV, int defense_V, int speed_V, int special_attackV, int special_defenseV) {
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = defense_V;
	speed = speed_V;
	special_attack = special_attackV;
	special_defense = special_defenseV;
}

void pokemon2::setSpecialAttack(int special_attackV) {
	special_attack = special_attackV;
}
void pokemon2::setSpecialDefense(int special_defenseV) {
	special_defense = special_defenseV;
}

void pokemon2::printFile()
{
	string name;
	name = getName();
	ofstream fout("Pokemons.yml", ios::app);
	fout << "- pokemon_two: " << "\n";
	if (!name.empty())
	{
		fout << "   name: " << name << "\n";
	}
	else fout << "no name" << "\n";
	fout << "   health: " << getHealth() << "\n";
	fout << "   attack: " << getAttack() << "\n";
	fout << "   defence: " << getDefense() << "\n";
	fout << "   speed: " << getSpeed() << "\n";
	fout << "   special attack: " << getSpecialAttack() << "\n";
	fout << "   special defence: " << getSpecialDefense() << "\n\n";
	fout.close();
}