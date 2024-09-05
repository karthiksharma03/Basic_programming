//Pascal triangle 

/*
1
11
121
1331
14641

this is the pascal triangle which is the combination of the binomial 
coeficient 

*/

#include<iostream>
using namespace std;

int fact(int num){
    int f1=1;
    
    for(int i=1;i<=num;i++){
        f1=f1*i;
    }
    
    return f1;
}

int binomial_coefficient(int n,int r){
    
     if (r > n || r < 0) {
        return 0; 
    }
    if (r == 0 || r == n) {
        return 1; 
    }
    
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    
    int ans=a/(c*b);
    
    return ans;
}

void pascal_triangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<binomial_coefficient(i,j)<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n=5;
    
    pascal_triangle(n);
    
    return 0;
}
