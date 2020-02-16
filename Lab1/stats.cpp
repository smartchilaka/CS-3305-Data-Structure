/*
 * Chinonso Chilaka
 * Lab 1
 * Section 5
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string.h>    // Provides memcpy function
#include "stats.h"

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