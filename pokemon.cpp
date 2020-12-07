#include "pch.h"
#include "pokemon.h"
#include <iostream>

pokemon::pokemon()
{
}


pokemon::~pokemon()
{
}

pokemon::pokemon(std::string nameV) {
	name = nameV;
	health = 0;
	attack = 0;
	defense = 0;
	speed = 0;
}

pokemon::pokemon(std::string nameV, int healthV)
{
	name = nameV;
	health = healthV;
	attack = 0;
	defense = 0;
	speed = 0;
}

pokemon::pokemon(std::string nameV, int healthV, int attackV)
{
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = 0;
	speed = 0;
}

pokemon::pokemon(std::string nameV, int healthV, int attackV, int defenseV)
{
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = defenseV;
	speed = 0;
}

pokemon::pokemon(std::string nameV, int healthV, int attackV, int defenseV, int speedV) {
	name = nameV;
	health = healthV;
	attack = attackV;
	defense = defenseV;
	speed = speedV;
}

void pokemon::setName(std::string nameV)
{
	name = nameV;
}

void pokemon::setHealth(int healthV)
{
	health = healthV;
}

void pokemon::setAttack(int attackV) 
{ 
	attack = attackV; 
}

void pokemon::setDefense(int defenseV) 
{ 
	defense = defenseV; 
}

void pokemon::setSpeed(int speedV) 
{
	speed = speedV; 
}