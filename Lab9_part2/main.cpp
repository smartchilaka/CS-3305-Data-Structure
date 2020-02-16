#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void function_call(int n, size_t j = 1)

{
  if (n==0)
  {
      return;
  }  
  for(size_t k=0; k < j; ++k)
{
 cout <<" ";
 }
 cout << "This was written by call number " << j << ".\n";
 if(n != j)
 {
     function_call(n, j+1);
 }
 for(size_t m = 0; m < j; ++m)
 {
     cout <<" ";
 }
 cout <<"This was ALSO written by call number " << j << ".\n";
 return;
 }
 
 int main(int argc, char **argv)
 {
     function_call(4);
     return 0;
     
 }