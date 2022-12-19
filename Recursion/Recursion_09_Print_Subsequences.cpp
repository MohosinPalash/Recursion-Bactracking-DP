
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Print subsequences of an array
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

void recFunc(int ind, vector<int>&sb, int arr[], int n)
{
	if(ind==n){
		for(auto u: sb)
			cout<< u<< " ";

		if(sb.size() == 0)
			cout<<"{}";
		
		cout<<endl;
		
		return ;
	}

	//Pick the element
	sb.push_back(arr[ind]);
	recFunc(ind+1, sb, arr, n);
	

	// Not pick the element
	sb.pop_back();
	recFunc(ind+1, sb, arr, n);

}

int main(){

	int arr[] = {3, 1, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int>sb;
	recFunc(0, sb, arr, n);

	return 0;
	
}

/*

Output:
3 1 2 
3 1 
3 2 
3 
1 2 
1 
2 
{}

*/