//Probelm B.Searching
//URL : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

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
	int x,flag=0;cin>>x;
	for (int i = 0; i < n; ++i)
	{
		if(a[i] == x){
			cout<<i<<endl;
			flag++;
			break;
		}
		
	}
	if(flag==0){
		cout<<-1<<endl;
	}
}