#include<iostream>
#include<cmath>
using namespace std;

int max_fun(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}

 bool pythagorus_tri(int a,int b,int c){
    int m=max_fun(a,b,c);
    int n,p;
    
    if(m==a){
        n=b;
        p=c;
    }
    else if(m==b){
        n=a;
        p=c;
    }
    else{
        n=a;
        p=b;
    }
    
    if(m*m==n*n+p*p){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    cout<< pythagorus_tri(3,4,5);
    return 0;
}
