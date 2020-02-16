//header files

#include <iostream>

#include "set.h"

using namespace std;

//main method

int main()

{

     //declare class objects for the set

     set s;

     set s2;

     //declare variables

     int findelement,deleteelement;

     int size1, size2;

     //prompt and read the user input

     cout << "Enter the size of the set One: ";

     cin >> size1;

     cout << "Enter the elements to insert in the set Two: ";

     int *set1,*set2;

     set1= new int[size1];

     //insert the elements ine set1

     for (int i = 0; i < size1; i++)

     {

          cin >> set1[i];

          s.insert(set1[i]);

     }

     cout<< "Enter the size of the set Two: ";

     cin >> size2;

     cout << "Enter the elements to insert in the set Two: ";

     set2 = new int[size2];

     //insert the elements in the set2

     for (int i = 0; i < size2; i++)

     {

          cin >> set2[i];

          s2.insert(set2[i]);

     }

          //perform the operations and display the result

          cout << "\n\nset One: "<<s << endl;

          cout << "\n\nset Two: "<< s2 << endl;

          set_union(s,s2);

          set s3= set_union(s, s2);

cout << "\n\nUnion of set One and set Two and store in the set Three: " << s3;

          set s4=set_intersection(s, s2);

cout << "\n\nIntersection of set One and set Two: " << s4;

          set s5 = relative_complement(s, s2);

cout << "\n\nrelative_complement of set One and set Two: " << s5;

         

cout << "\n\nEnter the element to check in the set or not: ";

          cin>> findelement;

          bool n=s3.contains(findelement);

          if (n ==0)

cout << "\n"<<findelement<<" is not in the new set";

          else

cout << "\n" << findelement << " is in the new set";

         

    

cout << "\n\nEnter the element to delete in the set Three: ";

          cin >> deleteelement;

         

          s3.deletion(deleteelement);

cout << "\nAfter removing element in the set Three is :" << s3;

          int n2 = s3.size();

          cout << "\n\nsize of the set Three is: " << n2 <<endl;

          system("pause");

          return 0;

}
