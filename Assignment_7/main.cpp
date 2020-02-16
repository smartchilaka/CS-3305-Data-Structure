#include <iostream>
using namespace std;

void numbers(ostream& outs, const string& prefix, unsigned int levels)
        {
            char c;

            if (levels == 0)
                cout << prefix << endl;
            else
            {
                for (c = '1'; c <= '9'; c++)
                    numbers(outs, prefix + c + '.', levels-1);
            }
        }
        
        int main()
{
numbers(cout, "THERBLIG", 2);
}