/* Assignment: 1
Author: Raphael Benoliel
*/

#include "Menu.h"

void Menu::mainMenu()
{
	SCEmazon* storeDB = new SCEmazon;
	Cart* clientDB = new Cart;
	bool run = true;
	int option;//the choosen option for the menu.
	while (run)//as long as this is true continue running.
	{
		cout << "============WELCOME TO SCEmazon============" << endl;
		cout << "Please choose one of the following options:" << endl;
		cout << "1. Add item to store data base" << endl;
		cout << "2. Handle client" << endl;
		cout << "3. Exit" << endl;
		cin >> option;
		switch (option)
		{
		case 1://In case we choose 1.Add item to store data base option.
		{
			bool run1 = true;
			while (run1)//second loop for option 1.Add item to store data base option.
			{
				cout << "============SCEmazon MENU============" << endl;
				cout << "1. Add new item" << endl;
				cout << "2. Delete item" << endl;
				cout << "3. Print item" << endl;
				cout << "4. Print all items" << endl;
				cout << "5. Return" << endl;
				cin >> option;
				switch (option)
				{
				case 1://In case we choose 1.Add new item option.
				{
	
					storeDB->creatItem();
					break;
				}
				case 2:
				{
					storeDB->removeItem();
					break;
				}
				case 3:
				{
					int serial;
					cout << "Enter serial of item you wish to print: " << endl;
					cin >> serial;
					storeDB->printItem(serial);
					break;
				}
				case 4:
				{
					storeDB->printAll();
					break;
				}
				case 5:
				{
					run1 = false;
					break;
				}
				default:
				{
					cout << "ERROR:You choose an Incorect option.Try again" << endl;
				}
				}
			}//end of second loop of option 1.
			break;
		}//end of case 1 from option 1.Add item to store data base option.
		case 2://In case we choose 2.Handle Client option.
		{
			bool run2 = true;
			while (run2)//second loop for option 2.Handle Client option.
			{
				cout << "============SCEClient MENU============" << endl;
				cout << "1. Build new product basket" << endl;
				cout << "2. Print product basket" << endl;
				cout << "3. Print all product baskets" << endl;
				cout << "4. Delete product basket" << endl;
				cout << "5. Return" << endl;
				cin >> option;	
				switch (option)
				{
				case 1:
				{//build new product basket.
					bool run3 = true;
					while (run3)//third loop for option 2.
					{
						cout << "============New Basket MENU============" << endl;
						cout << "1. Select products" << endl;
						cout << "2. Copy existing product basket" << endl;
						cout << "3. Union of two product baskets" << endl;
						cout << "4. Intersection of two product" << endl;
						cout << "5. Return" << endl;
						cin >> option;
						switch (option)
						{//to select products:
						case 1:
						{
							cout << "Enter product serial and amount: " << endl;
							int serial, amount;
							cin >> serial >> amount;
							clientDB->addItem(serial, amount);
							break;
						}
						case 2:
						{//to Copy existing product basket.
							cout << "Which product basket to copy? " << endl;

							break;
						}
						case 3:
						{//to Union of two product baskets.
							break;
						}
						case 4:
						{ //to Intersection of two product.
							break;
						}
						case 5:
						{//return to the lasst mennu.
							run3 = false;
						}
						default:
						{
							cout << "ERROR:You choose an Incorect option.Try again" << endl;
						}
						}
					}//end of third loop of option 2 
					break;
				}
				case 2:
				{//print product

					break;
				}
				case 3:
				{//print all product
					break;
				}
				case 4:
				{//delete product

					break;
				}
				case 5:
				{
					run2 = false;
					break;
				}
				default:
				{
					cout << "ERROR:You choose an Incorect option.Try again" << endl;
				}
				}
			}
			break;
		}//end of case 2 from option 2.Handle Client option..
		case 3:
		{
			run = false;
			cout << "GOOD BYE!" << endl;
			break;
		}
		default:
		{
			cout << "ERROR:You choose an Incorect option.Try again" << endl;
		}
		}
	}//end of first loop 

}
	

