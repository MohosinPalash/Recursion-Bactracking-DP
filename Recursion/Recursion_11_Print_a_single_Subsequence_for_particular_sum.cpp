
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Print ANY Subsequence if sum of the elements equal K
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

bool recFunc(int ind, vector<int>&sb, int arr[], int n, int K, int sum)
{
	if(ind==n){
		if(sum==K){
			for(auto u: sb)
				cout<< u<< " ";
			cout<<endl;
			return true;
		}
		return false;
	}

	//Pick the element
	sb.push_back(arr[ind]);
	sum += arr[ind];
	if(recFunc(ind+1, sb, arr, n, K, sum) == true)
		return true;
	

	// Not pick the element
	sum -= arr[ind];
	sb.pop_back();
	if(recFunc(ind+1, sb, arr, n, K, sum) == true)
		return true;
	return false;

}

int main(){

	int arr[] = {3, 1, 2, 5, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int K = 10;
	vector<int>sb;
	recFunc(0, sb, arr, n, K, 0);


	return 0;
	
}

/*

Output:
3 1 2 4  

*/