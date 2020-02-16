#include <string>
#include "bst.h"
#include <list> 
#include <iterator>
using namespace std;
static list<int> lab;
int rnd() {
    return rand() % 10000;
}
template<class Item>
void bstadd(int data)
{
    lab.push_back(data);
}
template<class Item>
void print_list(binary_search_tree<Item> bst)
{
    inorder(bstadd<Item>, bst.get_root());
    list <int> :: iterator it; 
    for(it = lab.begin(); it != lab.end(); it++)
    {
        cout<< *it << " "; 
    }
    cout << '\n';
}
int main() {
    list <string> list1;
    binary_search_tree<string> bst;
    cout << bst << endl;
    bst.insert("baker");
    cout << bst << endl;

    // making sure the output operator was working properly.
    bst.get_root()->set_left(new binary_tree_node<string>("able"));
    cout << bst << endl;
    bst.get_root()->set_right(new binary_tree_node<string>("charlie"));
    cout << bst << endl;
    bst.insert("arthur");
    print(bst.get_root(), 0);
    cout<<endl;
    
    string data[] = {"able", "baker", "charlie", "dog", "easy", "fox", "george"};
    int size = 7;
    binary_search_tree<string> bst1;
    for (int i = 0; i < size; ++i) {
        bst1.insert(data[i]);
        cout << bst1 << endl;
    }
    cout << "balanced? " << bst1.is_balanced() << endl << endl;;

    string data2[] = {"dog", "baker", "able", "fox", "charlie",  "george", "easy"};
    binary_search_tree<string> bst2;
    for (int i = 0; i < size; ++i) {
        bst2.insert(data2[i]);
        cout << bst2 << endl;
    }
    print(bst2.get_root(), 0);
    cout << "balanced? " << bst2.is_balanced() << endl << endl;
    
    binary_search_tree<int> bst3;
    for(int i = 0; i < 5; i++ ) {
        bst3.insert(rnd());
    }
    cout << bst3 << endl;
    cout << "balanced? " << bst3.is_balanced() <<  endl << endl;
    
    cout << "remove " << bst2.remove("able") << endl;
    cout << bst2 << endl;
    cout << "remove " << bst2.remove("baker") << endl;
    cout << bst2 << endl;
    cout << "remove " << bst2.remove("fox") << endl;
    cout << bst2 << endl;
    print(bst2.get_root(), 0);
    cout << "______________Output______________";
    cout << "\n";
    print_list(bst3);
    
}
