#pragma once
#include <string>
class Creature {
protected:
	std::string  m_name;
	char m_simbol;
	int m_hp;
	int m_dmg;
	int m_gold;
public:
	Creature(std::string name, char simbol, int hp, int dmg, int gold) :
		m_name{ name },m_simbol {simbol}, m_hp{hp},m_dmg{dmg},m_gold{gold}
	{}
	std::string getName() { return m_name; }
	char getSimbol() { return m_simbol; }
	int getHealth(){return m_hp;}
	int getdmg(){return m_dmg;}
	int getGold(){return m_gold;}
	void reduceHealth(int);
	bool isDead();
	void addGold(int);
};