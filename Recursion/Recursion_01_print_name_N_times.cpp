
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Print a string N times.
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

void recFunc(int n){
	if(n<1)
		return ;
	cout<<"Recusrion is FUN"<<endl;
	recFunc(n-1);
}

int main(){
	int n;
	cin >> n;
	recFunc(n);
}