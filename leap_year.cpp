// Baisc Leap year Chk program

#include <iostream>
using namespace std;

void leap_year_chk(int num) {
    if ((num % 400 == 0) || (num % 4 == 0 && num % 100 != 0)) {
        cout << "The year is a leap year !!!" << endl;
    } else {
        cout << "The year is not a leap year !!" << endl;
    }
}

int main() {
    int num = 1900; 
    leap_year_chk(num);
    
    return 0;
}

