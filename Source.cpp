#include <iostream>
#include "Creature.h"
using namespace std;
/*
class Fruit {
protected:
	string m_name;
	string m_color;
public:
	Fruit(string name, string color) :m_name{ name }, m_color {color} 
	{}
	string getName() { return m_name; }
	string getColor() { return m_color; }
};

class Apple :public Fruit {
public:
	Apple(string color,string name="apple" ):Fruit(name,color) {}
};


class Banana :public Fruit {
public:
	Banana(string name = "banana", string color = "yellow") :Fruit(name, color) {}
};

class GrannySmith : public Apple {
public:
	GrannySmith(string name = "Granny Smith apple", string color = "green") :Apple(color, name) {}
};
*/




int main() {
	/*
	Apple a("red");
	Banana b;
	GrannySmith c;


	cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";*/

	
		
		Creature o("orc", 'o', 4, 2, 10);
		o.addGold(5);
		o.reduceHealth(1);
		std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.";

		return 0;
}

