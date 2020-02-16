#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
void triangleSum(); // prototype function for part two
void labZeroCountdown(); // protype function for three
int main(int argc, char **argv)
{
	//part one
cout<<"\n Name:Chinonso Chilaka.\n ";
cout<<"\n Phone:6785765330\n";
cout<<"\n Email:cchilak1@students.kennesaw.edu\n";
cout<<"\n Hometown:I am from Nigeria.\n";
cout<<"\n High School:Federal Governmnet college ohafia Nigeria.\n";
cout<<"\n Previous College:Georgia State University.\n";
cout<<"\n College Math/CS courses:Discrete Mathematics, Data Structure, Computer Org., Computer Network.\n";
cout<<"\n My last Math class was Dicrete Math, Sprng semester, in the math building.";
cout<<"\n My last CS course was Data Structure, Computer Org., Computer Network, spring/summer semester, in atrium buliding.\n";
cout<<"\n I am confident working with all types of computers.\n";
cout<<"\n I play Soccer.\n";
cout<< "\n My favorite book of all time is Poor Dad Rich Dad.\n";
cout<<"\n After Graduation a plan to get a consulting job in cyber security.\n";
    //part two
    triangleSum();
    cout<<"\n";
    
    // part three
    labZeroCountdown();
	return 0;
}
// part two inplementation
void triangleSum()
{
  int n = 0;
 int sum = 0;
  cout<<"\n Enter a position number   \n";
  cin>> n;
  for(int i=0; i<=n; i++)
      sum +=i;
      cout<<"\n sum =  "<< sum;
}
// part three implementation
void labZeroCountdown()
{
    for(int i = 10; i>=0; i-=2)
    {
        for(int j = i; j>=0; j-=2)
        {
            cout<<j<< " ";
        }
        cout<<"\n";
    }
}