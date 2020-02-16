#include <iostream>
#include "node1.h"
#include "check_lists.h"


using namespace std;
using namespace main_savitch_5;

void list_print(node *head_ptr)
{
    cout << "{";
    for(nodep temp= head_ptr; temp != NULL; temp = temp->link())
        cout << temp->data() << " ";
    cout << "}" << endl;
}

int main()
{
    node *head_ptr= NULL;
    list_head_insert(head_ptr, 23.5);
    list_head_insert(head_ptr, 45.6);
    list_head_insert(head_ptr, 67.7);
    list_head_insert(head_ptr, 89.8);
    list_head_insert(head_ptr, 12.9);
    list_print(head_ptr);
    check_list1(head_ptr);
    
    
    node *head= NULL;
    list_head_insert(head, 23.5);
    list_insert(head, 45.6);
    node *tail = head->link();
    list_insert(tail, 67.7);
    tail = tail->link();
    list_insert(tail, -123.5);
    tail = tail->link();
    list_insert(tail, 89.8);
    tail = tail->link();
    list_insert(tail, 12.9);
    list_print(head);
    check_list2(head);

    node *head2;
    node *tail2;
    list_copy(head_ptr, head2, tail2);
    list_print(head2);
    check_list1(head2);
    list_print(tail2);
    
    list_head_remove(head);
    list_print(head);
    check_list2B(head);
    
    list_remove(head->link());
    list_print(head);
    check_list2C(head);
    
}
