#pragma once
#include <iostream>
class pokemon
{
protected:
	int health, attack, defense, speed; std::string name;
public:
	pokemon();
	~pokemon();

	pokemon(std::string);
	pokemon(std::string, int);
	pokemon(std::string, int, int);
	pokemon(std::string, int, int, int);
	pokemon(std::string, int, int, int, int);

	int getHealth() { return health; }
	void setHealth(int);

	int getAttack() { return attack; }
	void setAttack(int);

	int getDefense() { return defense; }
	void setDefense(int);

	int getSpeed() { return speed; }
	void setSpeed(int);

	std::string  getName() { return name; }
	void setName(std::string);
};

