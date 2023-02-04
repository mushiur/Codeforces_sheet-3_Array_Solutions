//Probelm A. Summation
//URL : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

//www.github.com/mushiur
//Md. Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	ll sum = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	if(sum<0)
		cout << -sum << endl;
	else
		cout << sum << endl;
	return 0;
}