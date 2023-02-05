//Probelm C.Replacement
//URL : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

//www.github.com/mushiur
//Md. Mushiur Rahman

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]> 0){
			cout<<1<<' ';
		}
		else if (a[i] == 0){
			cout<<0<<' ';
		}
		else{
			cout<<2<<' ';
		}
	}
}