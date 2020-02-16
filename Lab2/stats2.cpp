/*
 * Chinonso Chilaka
 * Lab 2
 * Section 5
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string.h>    // Provides memcpy function
#include "stats2.h"
using namespace std;

statistician::statistician()
{
count = 0;
total = 0;
tinyest = 0;
largest = 0;
}
void statistician::next(double r)
{
count++;
total += r;
if (count == 1)
{
tinyest = r;
largest = r;
}
else
{
if (tinyest > r)
tinyest = r;
if (largest < r)
largest = r;
}
}
void statistician::reset()
{
count = 0;
total = 0;
tinyest = 0;
largest = 0;
}
int statistician::length() const
{
return count;
}
double statistician::sum() const
{
return total;
}
double statistician::mean() const
{
if (count == 0)
return 0;
return (total / count);
}
double statistician::minimum() const
{
return tinyest;
}
double statistician::maximum() const
{
return largest;
}
statistician operator + (const statistician& s1, const statistician& s2)
{
    statistician s3;
    if (s1.count ==0)
    s3 = s2;
    else if (s2.count == 0)
        s3 = s1;
    s3.count = s1.count + s2.count; // count 
    s3.total = s1.total + s2.total; // total
    if (s1.largest > s2.largest)
    {
        s3.largest = s1.largest;
        
    }
    else
    {
        s3.largest = s2.largest;
    }
    
    if (s1.tinyest < s2.tinyest)
    {
        s3.tinyest = s1.tinyest;
        
    }
        else
        {
    s3.tinyest = s2.tinyest;
        }
        
    return s3;
} 


statistician operator * (double scale, const statistician& s)
{
    statistician s2;
    s2.count = s.count; // count 
    s2.total = (s.total * scale); // total
    if (scale < 0)
        {
       s2.largest = (s.tinyest * scale);
       s2.tinyest = (s.largest * scale);
        }
   else
   {
    s2.largest = (s.largest * scale);
    s2.tinyest = (s.tinyest * scale);
   }
   return s2;
}
bool operator ==(const statistician& s1, const statistician& s2){

    if (s1.length() == s2.length() && s1.sum() == s2.sum() && s1.maximum() == s2.maximum() && s1.minimum() == s2.minimum())
{
    return true;
}

return false;
}