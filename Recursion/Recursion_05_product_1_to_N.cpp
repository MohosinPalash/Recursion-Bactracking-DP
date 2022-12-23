
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Factorial [Product 1 to N]
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int recFunc(int n){
	if(n==1)
		return 1;
	
	return n * recFunc(n-1);
}

int main(){
	int n;
	cin >> n;

	cout<<"Factorial of "<<n<<" : ";
	int p = recFunc(n);
	cout<<p<<endl;
	
}