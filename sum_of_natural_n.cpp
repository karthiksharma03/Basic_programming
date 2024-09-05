#include<iostream>
using namespace std;

int sum_of_natural(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
   
   return sum; 
}

int main(){
    int n=5;
    int ans=sum_of_natural(n);
    cout<<"The sum of first 5 natural numbers :"<<ans;
    
    return 0;
}
