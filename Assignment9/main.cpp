#include "Bst.h"
#include <iostream>
#include <fstream>
using namespace std;
//using std::cin;
//using std::cout;
//using std::endl;
using std::fstream;

int main(void) {

    char c = '\0';
    fstream Convert;
    Convert.open("Convert.txt");
    Bst Tree;
    Tree.print();
    cout << endl << endl;
    while (!Convert.eof()) {
        Convert >> c;

        Tree.search(c);


    }

    cout << endl;

    if (Convert.is_open()) {
        Convert.close();
    }
}
