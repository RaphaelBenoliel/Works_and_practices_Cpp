/* Assignment: 1
Author: Raphael Benoliel
*/

#include "SCEmazon.h"

int SCEmazon::serial = 0;

void SCEmazon::creatItem() {
    int id = genrateSerial();
    Item* theNewOne = nullptr;
    string input;
    cout << "Enter an item you would like to creat with format (<word>): " << endl;
    cin >> input;
    string* parameters = separate(input);
    string type = parameters[0];
    if (type == "<Reading Book>") theNewOne = new ReadBook(id, parameters);
    else if (type == "<Children Book>") theNewOne = new ChildBook(id, parameters);
    else if (type == "<Music Album>") {
        int size = 1;
        theNewOne = new MusicAlbum(id, parameters);
        cout << "How many songs would you like to add?" << endl;
        cin >> size;
        for (int i = 0; i < size; i++) {
            cin >> input;
            string* songParameters = separate(input);
            ((MusicAlbum*)theNewOne)->addSong(songParameters[1], stoi(songParameters[2]));
            delete[] songParameters;
        }
    }
    else if (type == "<Movie>" && parameters[1] == "<Sci-Fi>") theNewOne = new Scifi(id, parameters);
    else if (type == "<Movie>" && parameters[1] == "<Thriller>") theNewOne = new Thriller(id, parameters);
    else if (type == "<Movie>" && parameters[1] == "<Action>") theNewOne = new Action(id, parameters);

    delete[] parameters;
    sizeItem++;
    for (int i = 0; i < MAX_ITEMS; ++i)
        if (items[i] == nullptr) {
            items[i] = theNewOne;
            break;
        }
    //    this->items[id] = theNewOne; // improve - efficient way after remove some items.
}

string* SCEmazon::separate(string& parameters) {
    string del = "> <";
    string* p = new string[10];
    int index = 0;
    parameters = parameters.substr(1, parameters.length() - 1);
    while (parameters.find(del) != string::npos) {
        int i = parameters.find(del);
        p[index++] = parameters.substr(0, i);
        parameters = parameters.substr(i + del.length(), parameters.length());
    }
    p[index++] = parameters;
    return p;
}

int SCEmazon::findSerial(int serial) const {
    for (int i = 0; i < SCEmazon::serial; i++)  // update after remove item
    {
        if (items[i]->getSerial() == serial)
            return i;
    }
    return -1;
}

void SCEmazon::removeItem() {
    int inputSerial;
    cout << "Enter the serial Item you wish to remove: " << endl;
    cin >> inputSerial;
    bool success = removeItem(inputSerial);
    if (success) cout << "The Item was successfully removed!!" << endl;
    else cout << "Error: Item with corresponding serial does not exist." << endl;
}

void SCEmazon::printAll() {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (items[i] != nullptr)
            items[i]->print();
    }
}

void SCEmazon::printItem(int serial) {
    int index = findSerial(serial);
    if (index == -1)return;
    items[index]->print();
}

SCEmazon::SCEmazon() {
    for (int i = 0; i < MAX_ITEMS; ++i)
        items[i] = nullptr;
}

bool SCEmazon::removeItem(int serial) {
    int index = findSerial(serial);
    if (index == -1)return false;
    sizeItem--;
    items[index] = nullptr;
    return true;
}

SCEmazon::~SCEmazon()
{
}
