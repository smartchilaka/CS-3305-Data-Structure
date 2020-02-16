#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    double numInput;
    double sumover(int numInput);
    cout << "\nPlease enter an integer: ";
    cin >> numInput;
    cout<<"The sum of reciprocal is " << sumover(numInput) << endl;
}
double sumover(int numInput)
{
    if(numInput==0)
    {
        return 0;
    }
    else{
        return (1.00 / numInput) + sumover(numInput - 1);
    }
}