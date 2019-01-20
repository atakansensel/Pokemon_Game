#include <iostream>
#include <string>
#include "Pokemon.h"
//do not forget to include your header files 

using namespace std;

int main()
{
	cout<< "...Creating different types of Pokemons..."<<endl <<endl;

	//Pokemon normalPokemon(name, type, healthPoint)
	Pokemon normalPokemon("UnknownPokemon", "Normal", 100); 
	normalPokemon.printInfo();
	
	//ElectricPokemon pikachu(name, healthPoint) 
	ElectricPokemon pikachu("Pikachu", 300);
	pikachu.printInfo();
	
	FirePokemon charmander("Charmander", 50);
	charmander.printInfo();

	WaterPokemon squirtle("Squirtle", 150);
	squirtle.printInfo();
	cout<<endl;


	cout<< "...Each type of Pokemon speaks differently..."<<endl <<endl;
	Pokemon* poke_ptr = &normalPokemon;
	poke_ptr->speak();
	poke_ptr = &pikachu;
	poke_ptr->speak();
	poke_ptr = &charmander;
	poke_ptr->speak();
	poke_ptr = &squirtle;
	poke_ptr->speak();
	cout <<endl;

	cout<< "...Figting starts..." <<endl;

	while (true)
	{
		cout << endl;
		cout <<"***************************************************************"<<endl
			<<" 0	- Pikachu attacks to Charmander	"<<endl
			<<" 1	- Charmander attacks to Squirtle "<<endl
			<<" 2	- Squirtle attacks to Pikachu "<<endl
			<<" 3	- Feed Pokemon with Berry 	"<<endl
			<<" 4	- EXIT 	"<<endl
			<<"***************************************************************"<<endl; 
		cout << endl;

		int option;
		cout << "Pick an option from above (int number from 0 to 4): "; cin>>option;
		cout<<endl;

		switch (option)
		{
		case 0:
			pikachu.fight(&charmander);
			cout << endl;
			charmander.printInfo();
			break;

		case 1:
			charmander.fight(&squirtle);
			cout << endl;
			squirtle.printInfo();
			break;

		case 2:
			squirtle.fight(&pikachu);
			cout << endl;
			pikachu.printInfo();
			break;

		case 3:
			int pokemon;
			int berry_count;
			
			cout <<"Choose pokemon and berry count..."<<endl
				<<" 0 - Pikachu "<<endl
				<<" 1 - Charmander "<<endl
				<<" 2 - Squirtle "<<endl;

			cout << "Pokemon:";
			cin >> pokemon;
			cout << "Berry count:";
			cin	>>berry_count;
			cout <<endl;

			switch (pokemon)
			{
			case 0:
				pikachu.eatBerry(berry_count);
				pikachu.printInfo();
				break;

			case 1:
				charmander.eatBerry(berry_count);
				charmander.printInfo();
				break;

			case 2:
				squirtle.eatBerry(berry_count);
				squirtle.printInfo();
				break;

			default:
				cout<<"INVALID OPTION!!! Try again"<<endl;
			}
			break;

		case 4:
			cout<<"PROGRAM EXITING ... "<<endl;
			system("pause");
			exit(0);

		default:
			cout<<"INVALID OPTION!!! Try again"<<endl;
		}
	}
	
	cin.ignore();
	cin.get();
	return 0;
}
