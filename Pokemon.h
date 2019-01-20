#ifndef POKEMON_H
#define POKEMON_H

using namespace std;

class Pokemon {


public:
	
	Pokemon() :name("name"), type("Normal"), healthPoint(0) {}
	Pokemon(string name2, string type2, int healthPoint2) : name(name2), type(type2), healthPoint(healthPoint2) {}
	void printInfo()const;
	virtual void speak();// virtual keyword added because we use these func in the child class
	int healthPoint;
	string name;
	string type;

};

class ElectricPokemon :public Pokemon
{
  public:
	  ElectricPokemon(string name3, int healthPoints3);
	  void speak();
	  void fight(Pokemon *);
	  void eatBerry(int);

};

class FirePokemon :public Pokemon
{
public:
	FirePokemon(string name4, int healthPoints4);
	void speak();
	void fight(Pokemon *);
	void eatBerry(int);

};

class WaterPokemon :public Pokemon
{
public:
	WaterPokemon(string name5, int healthPoints5);
	void speak();
	void fight(Pokemon *);
	void eatBerry(int);

};





#endif