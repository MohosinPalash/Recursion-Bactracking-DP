
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Reverse a given Integer
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int  fn(int num, int n){
	if(n<=0)
		return num;
	num = (num*10) + (n%10);
	n/=10;
	
	return fn(num, n);
}

int main(){
	int n;
	cin >> n;
	int ans = fn(n%10, n/10);
	cout<<ans<<endl;
}

/*
Input:
123405

Output:
504321
*/