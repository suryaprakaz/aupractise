#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;
typedef vector<string> vs;
typedef unsigned int ui;

vs A;

ui partition(ui p, ui r)
{
	ui q = p;
	for(ui u = p; u<r; u++)
	{
		if(A[u] <= A[r])
		{
			swap(A[q],A[u]);
			q++;
		}
	}
	swap(A[r],A[q]);
	return q;
}
void quickSort(ui p, ui r)
{
	if(p<r)
	{
		ui q ;
		q = partition(p,r);
		quickSort(p,q-1);
		quickSort(q+1,r);
	}
}


int main()
{
	ui n;
	string author;
	cin>>n;
	for(ui i = 0; i<n; i++)
	{
		cin>>author;
		A.push_back(author);
	}
	quickSort(0,n-1);

	cout<<"\nThe sorted list is: \n";	
	for(ui i = 0; i<n; i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}
