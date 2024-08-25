/*
Here in this program we will find out about which is the largest among the three numbers
This is a basic program where we can solve and complete it !!!!
*/

#include<iostream>
using namespace std;

void large_among_three(int ,int,int); // This is the function prototype the parameters are declared and after main function we have defined 

int main(){
	
	int a,b,c;
	cout<<"Enter the three numbers :";
	cin>>a>>b>>c;
	
	large_among_three(a,b,c);

	return 0;

}

void large_among_three(int a,int b,int c){
	if(a>b){
		if(a>c){
			cout<<"The Largest number is :"<<a;
		}
	}
	
	else if(b>c){
		cout<<"The largest number is :"<<b;
	}
	
	else{
		cout<<"The largest number is :"<<c;
	}
}

