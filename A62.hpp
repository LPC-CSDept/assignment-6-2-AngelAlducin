//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        // return n_th power number
        int val = 1;
        for(int i = 0; i <n; i++)
                val *= 2;
        return val;
}
double nthpowern(int n)
{
        // return n_th power number
        float val = 1;
        n *= (-1);
        float neg;
        for(int i = 0; i < n; i++)
        {
             val *= 2;
             neg = 1 / val;   
        }

        return neg;
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
