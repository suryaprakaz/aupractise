/*Author: suryaprakaz
Email: suryaprakaz@hotmail.com
This program is an implementation of the sentinel search algorithm as presented in the book Algorithms Unlocked by Thomas Cormen
This program takes a list of numbers as its input. It searches and returns if the element we are looking for is present in the list
It differs from simple Linear search in that it eliminates the initial checking (i<=n) by replacing it with a simple element check and increment of the control variable
This algorithm finds the first element that it comes across which matches the element we are looking for and returns it*/

#include<iostream>
using namespace std;

int sentinelSearch(int* A, int n, int x)
{
	int temp,i;
	temp = A[n-1];
	A[n-1] = x;
	i = 0;
	while(A[i]!=x)
	{
		i = i + 1;
	}
	A[n-1] = temp;
	if(i<n || A[i])
	{
		return i;
	}
	else 
	{ 
		return 0; 
	}
}	

int main()
{
	int n,x,answer;
	cout<<"\nEnter the values of n and x: ";
	cin>>n>>x;
	int *A = new int [n];
	cout<<"\nEnter the elements in the array: ";
	for(int i = 0; i<n; i++)
	{
		cin>>A[i];
	}
	answer = sentinelSearch(A,n,x);
	if(answer!=0) { cout<<"Answer found in index: "<<answer; }
	else { cout<<"NOT FOUND"; }
	cout<<endl;
	return 0;
}
