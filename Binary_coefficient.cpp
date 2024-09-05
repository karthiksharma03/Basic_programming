//Binary Coefficient calculation !!!

#include<iostream>
using namespace std;

int fact(int num){
    int f1=1;
    
    for(int i=1;i<=num;i++){
        f1=f1*i;
    }
    
    return f1;
}

int binary_coefficient(int n,int r){
     if (r > n || r < 0) {
        return 0;
    }
    if (r == 0 || r == n) {
        return 1;
    }
    int res=fact(n);
    int res1=fact(r);
    int res2=fact(n-r);
    int ans=res/(res2*res1);
    
    return ans;
}

int main(){
    int n=5;
    int r=4;
    
   int ans=binary_coefficient(n,r);
    
    cout<<ans<<"\n";
    
    return 0;
}
