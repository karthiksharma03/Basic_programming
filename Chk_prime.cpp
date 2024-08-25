/*
Here we are checking Weather the Given Number is prime or not for that we will try the below logic
*/


#include <iostream>
#include <cmath> 
using namespace std;

bool chk_isprime(int num) {
    
    if (num <= 1) {
        return false; 
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    bool result = chk_isprime(num);
    
    if (result) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }

    return 0;
}

