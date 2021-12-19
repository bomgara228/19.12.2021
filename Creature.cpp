#include "Creature.h"
void Creature::reduceHealth(int hp) { m_hp-=hp; }
bool Creature::isDead() {return m_hp <= 0; }
void Creature::addGold(int gold) { m_gold += gold; }