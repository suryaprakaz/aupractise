#include<iostream>
using namespace std;
int lSearch(int* A, int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]==x) { return i;}
	}
	return 0;
}
int main()
{
	int n,x,answer;
	cout<<"Enter n and x ";
	cin>>n>>x;
	int *A = new int [n];
	cout<<"Enter the array of elements ";
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	answer = lSearch(A,n,x);
	if(answer!=0) { cout<<"Answer found in index "<<answer; }
	else {cout<<"NOT FOUND";}
	
	return 0;
}
