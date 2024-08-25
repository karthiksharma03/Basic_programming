// Sum of the digits of an number !!! 
/*
In this algorithm we will print the sum of the digits and we will also write an algorithm for the digit manipulation method
which is also known as digit spliting technique
*/

#include<iostream>

using namespace std;

void digit_print(int num){
    int digit;
    
    while(num>0){
        digit=num%10;
        num=num/10;
        cout<<digit<<endl;
    }
}

int sum_of_digits(int num){
    int sum=0,digit;
    
    while(num>0){
        digit=num%10;
        num=num/10;
        sum=sum+digit;
    }
    
    return sum;
}

int main(){
    int num=345;
    int res=sum_of_digits(num);
    cout<<"The sum is :"<<res;
    
    return 0;
}

