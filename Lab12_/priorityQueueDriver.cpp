#include "priority_queue.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int main(int argc, char** argv)

{

       priority_queue<int> q;

       cout << "Random numbers: ";

       for (int i = 0; i < 10; i++)

       {

              //generete random number between 1 to 100

              int randomNum = rand() % 100 + 1;

              cout << randomNum << " ";

              //insert data into queue

              q.push(randomNum);

             

       }     

      

       cout << endl;

       for (int i = 0; i < 10; i++)

       {

              //print top of the queue and remove element from queue

              cout << "Entery: " << q.top() << "  Order : " << q.orderOfTop() << endl;

              q.pop();//pop the lement fro the queue

       }

       cout << "it worked" << endl;

       //system("pause");

       return 0;

}