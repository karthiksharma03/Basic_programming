/*
here we will dicuss about the conversion of the binary number to the decimal number 

where we need to use the concept of the digit manipulation and basic knowldege about 
conversion 
*/
#include<iostream>
#include<cmath>
using namespace std;

int bin_to_deci(int num){
    int digit;
    int ans=0;
    int base=1;
    
    while(num>0){
        digit=num%10;
        ans=ans+digit*base;
        base=base*2;
        num=num/10;
    }
    
    return ans;
}

int main(){
    int bin=1011;
    int res=bin_to_deci(bin);
    cout<<res<<endl;
    
    return 0;
}

