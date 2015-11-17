#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef vector<unsigned long long int> vs;
typedef unsigned int ui;
vs A;

vs copyVector(ui a, ui b)
{
	vs X;
	for(ui k = a; k<=b; k++)
	{
		X.push_back(A[k]);
	}
	return X;
}

void merge(ui p, ui q, ui r)	//Merges two sorted set of arrays
{
	
	vs B = copyVector(p,q);
	vs C = copyVector(q+1,r);
	B.push_back(1000000000000000);
	C.push_back(1000000000000000);
	ui i = 0;
	ui j = 0;
	for(ui k = p; k<=r; k++)
	{
		if(B[i]<C[j])
		{
			A[k] = B[i];
			i++;
		}
		else if(C[j]<B[i])
		{
			A[k] = C[j];
			j++;
		}
	}
}


void mergeSort(ui p, ui r)	//Recursively solves the smaller instances of the unsorted array
{	
	if(p>=r) 
	{	
		//do nothing
	}
	else if	(p<r)
	{
		ui q = (p + r) / 2;
		mergeSort(p,q);
		mergeSort(q+1,r);
		merge(p,q,r);
	}
}

int main()
{
	ui n,temp;
	cin>>n;
	string author;
	for(ui i = 0; i<n; i++)
	{
	//	cin>>author;
		cin>>temp;
		A.push_back(temp);	
	}
	mergeSort(0,n-1);
	cout<<"\nThe sorted list of authors is:  \n";
	for(ui i = 0; i<A.size(); i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}		
