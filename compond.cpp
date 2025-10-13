#include <iostream>
#include <cmath> 
using namespace std;

double compound(int p, double r, int n, int t)
 {
    // r is percentage; divide by 100
    return p * pow(1 + (r / (100 * n)), n * t);
}

int main() 
{
    int principal, time, no_of_years;
    double interest_rate;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter interest rate (%): ";
    cin >> interest_rate;

    cout << "Enter time (t): ";
    cin >> time;

    cout << "Enter number of times interest is compounded per year (n): ";
    cin >> no_of_years;

    double result = compound(principal, interest_rate, no_of_years, time);
    cout << "Compound interest amount = " << result << endl;

    return 0;
}

