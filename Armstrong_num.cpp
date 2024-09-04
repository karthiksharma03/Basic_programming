// Armstrong Number Calculation !!!

#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int num){
    int sum=0;
    int original=num;
    while(num>0){
        int last_digit=num%10;
        last_digit=pow(last_digit,3);
        sum=sum+last_digit;
        num=num/10;
    }
    
    if(sum==original){
        cout<<"Armstrong\n";
    }
    else{
        cout<<"Not an Armstrong !!\n";
    }
     
}

int main(){
    int num=153;
    armstrong(num);
    
    return 0;
}
