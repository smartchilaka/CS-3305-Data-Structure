#include <iostream>
using namespace std;
int main(){
    //Take user input for level
    int level;
    cout<<"Please enter the level: ";
    cin>>level;
    //Call the recursive method
    recursive_method(level, 1);
    return 0;
}