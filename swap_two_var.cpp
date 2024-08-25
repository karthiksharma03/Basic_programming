/*
know let us write the algoritm for swapping the variable with the third variable and without the third variable

*/

#include<iostream>
using namespace std;

void swp(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
    int a=5,b=2;
    cout<<"Before swapping a is :"<<a<<endl;
    cout<<"Before swapping b is :"<<b<<endl;
    swp(&a,&b);
    cout<<"After swapping a is :"<<a<<endl;
    cout<<"After swapping b is :"<<b<<endl;
    return 0;
}

