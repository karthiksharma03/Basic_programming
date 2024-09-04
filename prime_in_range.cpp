// Range Based Prime Numbers 

#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    
    return true;
}

void print_prime(int n1,int n2){
    
    for(int i=n1;i<=n2;i++){
        if(is_prime(i)){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n1=10;
    int n2=20;
    print_prime(n1,n2);
    
    return 0;
}
