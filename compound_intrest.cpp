#include <iostream>
#include <cmath>
using namespace std;

double compound_interest(double principal, double rate_of_interest, double n, double t) {
    
    double rate = rate_of_interest / 100.0;


    double amount = principal * pow(1 + (rate / n), n * t);
    
    
    double compound = amount - principal;
    
    return compound;
}

int main() {
    double p, r, n, t;
    
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> r;
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> n;
    cout << "Enter the number of years: ";
    cin >> t;
    
    double ans = compound_interest(p, r, n, t);
    cout << "The compound interest is: " << ans << endl;
    
    return 0;
}

