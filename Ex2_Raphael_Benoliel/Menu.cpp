/* Assignment: 2
Author: Raphael Benoliel
*/
#include "Menu.h"

Menu::Menu()
{
    bool run = true;
    int option;//the choosen option for the menu.
    while (run)//as long as this is true continue running.
    {
        printOptions();//print the menu
        cin >> option;//get the user choise
        switch (option) {//act accordingly:
        case ADD_NEW_CLIENT: //if we want to add a new client
            addClient();//activate the methods 
            break;//end iteration
        case REMOVE_CLIENT:
            removeClient();//a private method in menu class that remove client from the database
            break;
        case PRINT_ALL_CLIENT:
            printDb();// method that print the database
            break;
        case PRINT_ALL_MATCH:
            printAllMatch();
            break;
        case EXIT: run = false; //we want to stop running.
            cout << "Goodbye!\n";//tell the user goodbye.
            //since DataBase wasn't dynamically allocated, its Dtor will clean everything for us.
            break;
        default: cout << "Wrong option. Please try again!\n"; //not a supported option
        }//end switch
    }
}


void Menu::printOptions() const
{///////Print All the Menu to screen////////
    cout << "Please choose one of the following options:\n Press\n"
        << "==================================================================\n"
        << ADD_NEW_CLIENT << " Add a new client to the database." << endl
        << REMOVE_CLIENT << " Remove an existing client from the database." << endl
        << PRINT_ALL_CLIENT << " Print all clients." << endl
        << PRINT_ALL_MATCH << " Print all matches for a client." << endl
        << EXIT << " Quit the program." << endl
        << "==================================================================\n";
}

void Menu::addClient()
{
    /////////Add a new client to database.///////
    char gender,id[MAX_SIZE], name[MAX_SIZE];
    int age;
    int sizehobb;
    cout << "Please enter all the detailed in order to add a new Client to the Database.\n";
    cout << "Please enter Client I.D :\n";
    cin >> id;//get id from user.
    cout << "Please enter Client first name and last name :\n";
    getchar();
    cin.getline(name, MAX_SIZE);//get full name from user.
    cout << "Please enter Client gender (M/F) :\n";
    cin >> gender;//get gender from user.
    cout << "Please enter Client age :\n";
    cin >> age;//get age from user.
    cout << "Please enter number of hobbies :\n";
    cin >> sizehobb;//get number of hobbies.
    char** hobby = new char* [sizehobb];//allocate memory to a dual ptr.
    for (int i = 0; i < sizehobb; i++)
    {
        char* Chobby = new char[MAX_SIZE];//allocate memory to ptr to go through the dual ptr.
        cout << "Enter hobby " << i+1 << ": ";
        cin >> Chobby;//get the hobbies one by one with ptr.
        hobby[i] = Chobby;//copies the hobby into the dual ptr.
    }
    Client* newClient = new Client(id, name, gender, age, hobby, sizehobb);//memory allocatoin to a new client
    db+=*newClient;   //add a new client to database with operator+= .
}

void Menu::removeClient()
{///////Remove a client from database///////
    char id[MAX_SIZE];//input id
    cout << "Please enter the I.D of the client you wish to remove:\n";
    cin >> id;//get the input I.D 
    String IdString(id);// Call Ctor from class String to get a char to a string
    db -= IdString;// remove the client with same id in database .
}

void Menu::printDb() const
{//print all clients from data the database.
    cout << "===========All Client in DataBase===========\n";
    cout << db << endl;
}

void Menu::printAllMatch()
{//////input id and print all clients from database that have a matching////// 
    char id[MAX_SIZE];// input I.D
    cout << "Please enter the I.D of the client you wish to search a match:\n";
    cin >> id;//get the input I.D 
    String IdString(id); //Call Ctor from class String to get a char to a string
    db.searchClient(IdString);//send the id to the method "searchClient" to find a match from database. 
}

