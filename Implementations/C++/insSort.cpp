#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef vector<string> vs;

void insSort(vs A,unsigned int n)
{
	string key;
	unsigned int j=0;
	for(unsigned int i = 1; i<n; i++)
	{
		key = A[i];
		j = i - 1;
		while(j>=0 && A[j]>key)
		{
			A[j+1] = A[j];
			j = j -1;
		}
		A[j+1] = key;
	}
	cout<<"\n The sorted list is: \n";
	for(unsigned int k=0; k<n; k++)
	{
		cout<<A[k]<<endl;
	}
}


int main()
{
	unsigned int n;
	vs A;
	string temp;
	cout<<"\nEnter the number of books: ";
	cin>>n;
	cout<<"\nEnter author names: \n";
	for(unsigned int i = 0; i<n; i++)
	{
		cin>>temp;
		A.push_back(temp);
	}
	
	insSort(A,n);
	return 0;


}
