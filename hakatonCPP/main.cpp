/*
Raphael Benoliel, 209946854
Daniel Vaknin, 314753161
Hodaya Einy, 206753444*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#include "Dolphin.h"
#include"Cat.h"
#include"Beetle.h"
#include"Penguin.h"
#include"Araneae.h"

int main() {
	Animal** arr = nullptr;
	int size=0;
	int choose = 1, type;
	bool run = true;
	int id;
	while (run) {
		cout << "menu:" << endl << "1. Print animal" << endl << "2. Information" << endl << "3. Add animal" << endl << "4. Delete animal" << endl << "5. Exit" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1: {
			if (size) {
				for (int i = 0; i < size; i++)
					arr[i]->print();
			}
			else
				cout << "there is not animal in array." << endl;
			break;
		}
		case 2: {
			cout << "Enter id for animal" << endl;
			cin >> id;
			bool flag = false;
			for (int i = 0; i < size; i++) {
				if (arr[i]->getID() == id)
				{
					arr[i]->print();
					flag = true;
				}

			}
			if (!flag)
				cout << "Animal not found";
			break;
		}
		
		case 3: {
			cout << "Choose type of animal:" << endl << "1. Araneae" << endl << "2. Insects" << endl << "3. Mammals" << endl << "4. Marine" << endl << "5. Poultry" << endl << "6. Beetle" << endl << "7. Cat" << endl << "8. Dolphin" << endl << "9. Penguin" << endl;
			cin >> type;
			int weight, eyes, legs, teeth, blackDots, underWater;
			bool isOverland, arthropoda, predator, isPoisonous, isFlying, isWild, isInBand;
			char bodyCover[100], watertype[100];
			Animal** temp = new Animal * [size + 1];
			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			size++;
			if (type == 1) {
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter amount of eyes: ";
				cin >> eyes;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				cout << "Enter if the animal is arthropoda:" << endl << "if is arthropoda enter 1" << endl << "if is not enter 0" << endl;
				cin >> arthropoda;
				temp[size - 1] = new Araneae(id, weight, isOverland, arthropoda, eyes);
			}
			else if (type == 2) {
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				cout << "Enter if the animal is arthropoda:" << endl << "if is arthropoda enter 1" << endl << "if is not enter 0" << endl;
				cin >> arthropoda;
				cout << "Enter amount of legs: ";
				cin >> legs;
				temp[size - 1] = new Insects(id, weight, isOverland, arthropoda, legs);
			}
			else if (type == 3) {
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				strcpy(bodyCover, "fur");
				cout << "Enter if predator: " << endl << "is yes enter 1" << endl << "is no enter 0" << endl;
				cin >> predator;
				cout << "Enter amount of teeth: ";
				cin >> teeth;
				cout << "Enter if is poisonous: " << endl << "is yes enter 1" << endl << "is no enter 0" << endl;
				cin >> isPoisonous;
				temp[size - 1] = new Mammals(id, weight, isOverland, bodyCover, predator, teeth, isPoisonous);
			}
			else if (type == 4) {
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				strcpy(bodyCover, "dandruff");
				cout << "Enter if predator: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> predator;
				cout << "Enter the water type: ";
				cin >> watertype;
				temp[size - 1] = new Marine(id, weight, isOverland, bodyCover, predator, watertype);
			}
			else if (type == 5) {
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				strcpy(bodyCover, "Feathers");
				cout << "Enter if predator: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> predator;
				cout << "Enter if is flying: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> isFlying;
				temp[size - 1] = new Poultry(id, weight, isOverland, bodyCover, predator, isFlying);
			}
			else if (type == 6) {
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				cout << "Enter if the animal is arthropoda:" << endl << "if is arthropoda enter 1" << endl << "if is not enter 0" << endl;
				cin >> arthropoda;
				cout << "Enter amount of legs";
				cin >> legs;
				cout << "Enter amount of black dots";
				cin >> blackDots;
				temp[size - 1] = new Beetle(id, weight, isOverland, arthropoda, legs, blackDots);
			}
			else if (type == 7)//cat
			{
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				strcpy(bodyCover, "fur");
				cout << "Enter if predator: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> predator;
				cout << "Enter amount of teeth: ";
				cin >> teeth;
				cout << "Enter if is poisonous: " << endl << "is yes enter [1]" << endl << "is no enter 0";
				cin >> isPoisonous;
				cout << "Enter if is wild: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> isWild;
				temp[size - 1] = new Cat(id, weight, isOverland, bodyCover, predator, teeth, isPoisonous, isWild);
			}
			else if (type == 8)//dolphin
			{
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				strcpy(bodyCover, "dandruff");
				cout << "Enter if predator: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> predator;
				cout << "Enter amount of teeth: ";
				cin >> teeth;
				cout << "Enter if is poisonous: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> isPoisonous;
				cout << "Enter the water type: ";
				cin >> watertype;
				cout << "Enter if predator: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> isInBand;
				temp[size - 1] = new Dolphin(id, weight, isOverland, bodyCover, predator, teeth, isPoisonous, watertype, isInBand);
			}
			else if (type == 9)//penguin
			{
				cout << "Enter id: ";
				cin >> id;
				cout << "Enter weight: ";
				cin >> weight;
				cout << "Enter if the animal is the land:" << endl << "if is in land enter 1" << endl << "if is in sea enter 0" << endl;
				cin >> isOverland;
				strcpy(bodyCover, "Feathers");
				cout << "Enter if predator: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> predator;
				cout << "Enter the water type: ";
				cin >> watertype;
				cout << "Enter if is flying: " << endl << "is yes enter 1" << endl << "is no enter 0";
				cin >> isFlying;
				cout << "Enter the time under the water: ";
				cin >> underWater;
				temp[size - 1] = new Penguin(id, weight, isOverland, bodyCover, predator, watertype, isFlying, underWater);
			}
			delete[] arr;
			arr = temp;
			break;
		}
		case 4: {
			cout << "enter id of the animal to remove: ";
			cin >> id;
			bool flag = false;
			for (int i = 0; i < size; i++) {
				if (arr[i]->getID() == id)
				{
					flag = true;
					Animal** temp = new Animal * [size - 1];
					for (int j = 0; j < i; j++)
					{
						temp[j] = arr[j];
					}
					for (int k = i; k < size; k++)
					{
						temp[k] = arr[k + 1];
					}
					size--;
					delete[] arr;
					arr = temp;

				}
			}
			if (!flag)
				cout << "the animal do not exist." << endl;
			break;
		}
		case 5:
		{
			run = false;
			cout << "Good Bye!" << endl;
			break;
		}
		default: cout << "Worng choice pls try again." << endl;
		}
	}
}