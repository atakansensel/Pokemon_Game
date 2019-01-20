#include <iostream>
#include "Pokemon.h"
#include <string>

using namespace std;


void Pokemon::printInfo()const
{
	cout<< "Name :" << this->name<<endl;
	cout << "Type :" << this->type << endl;
	cout << "Health Point :" << this->healthPoint << endl;
}

void Pokemon::speak()
{

	cout << "Speaking like a normal pokemon" << endl ; 

}

ElectricPokemon::ElectricPokemon(string name3,int healthPoint3)
{
	name = name3;
	type = "Electric";
	healthPoint = healthPoint3;

}






void ElectricPokemon :: speak() 
{
	cout << "Speaking like a electric pokemon" << endl;
}

void ElectricPokemon::fight(Pokemon *p)
{ 
	if (this->healthPoint >= 0) 
	{
		p->healthPoint = p->healthPoint - 30;
		cout << this->name << "  has fighted against " << p->name<<endl;
		cout << p->name<<" lost 30 HP"<<endl;

	}

	else 
	{
		cout << this->name << " has not enough HP to fight!" << endl;
	
	}


}

void ElectricPokemon::eatBerry(int k)
{

	int addHP = k * 30;
	this->healthPoint = this->healthPoint + addHP;
	cout << this->name << " ate " << k <<" berries"<< endl;
	cout << this->name << "'s HP increased by " << addHP << endl;


}



FirePokemon::FirePokemon(string name4, int healthPoint4)
{
	name = name4;
	type = "Fire";
	healthPoint = healthPoint4;

}


void FirePokemon::speak()
{
	cout << "Speaking like a fire pokemon" << endl;
}

void FirePokemon::fight(Pokemon *p)
{
	if (this->healthPoint >= 0)
	{
		p->healthPoint = p->healthPoint - 20;
		cout << this->name << "  has fighted against " << p->name << endl;
		cout << p->name << " lost 20 HP" << endl;

	}

	else
	{
		cout << this->name << " has not enough HP to fight!" << endl;

	}


}

void FirePokemon::eatBerry(int k)
{

	int addHP = k * 50;
	this->healthPoint = this->healthPoint + addHP;
	cout << this->name << " ate " << k << " berries" << endl;
	cout << this->name << "'s HP increased by " << addHP << endl;


}




WaterPokemon::WaterPokemon(string name5, int healthPoint5)
{
	name = name5;
	type = "Water";
	healthPoint = healthPoint5;

}


void WaterPokemon::speak()
{
	cout << "Speaking like a water pokemon" << endl;
}

void WaterPokemon::fight(Pokemon *p)
{
	if (this->healthPoint >= 0)
	{
		p->healthPoint = p->healthPoint - 10;
		cout << this->name << "  has fighted against " << p->name << endl;
		cout << p->name << " lost 10 HP" << endl;

	}

	else
	{
		cout << this->name << " has not enough HP to fight!" << endl;

	}


}

void WaterPokemon::eatBerry(int k)
{

	int addHP = k * 80;
	this->healthPoint = this->healthPoint + addHP;
	cout << this->name << " ate " << k << " berries" << endl;
	cout << this->name << "'s HP increased by " << addHP << endl;


}