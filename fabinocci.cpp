#include<iostream>
using namespace std;

void fabinocci(int n){
    int a=0;
    int a1=1;
    int sum;
    for(int i=1;i<=n;i++){
        cout<<a<<"\n";
        sum=a+a1;
        a=a1;
        a1=sum;
    }

}

int main(){
    int n=5;
    fabinocci(n);
    return 0;
}
