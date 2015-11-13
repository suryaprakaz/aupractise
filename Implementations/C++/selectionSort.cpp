#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef vector<string> vs;


void sSort(vs A,unsigned int n)
{
	for(unsigned int i = 0; i<n-1; i++)
	{
		unsigned int smallest = i;
		for(unsigned int j = i+1; j<n; j++)
		{
			if(A[j].compare(A[smallest])<0)
			{
				smallest = j;
			}
		}
		A[i].swap(A[smallest]);
	}
	cout<<"\n The sorted list is: \n";
	for(unsigned int i=0;i<n;i++) {  cout<<A[i]<<endl;}
}

int main()
{
	unsigned int n;
	string author;
	vs authorList;
	cout<<"\n Enter the number of books: ";
	cin>>n;
	cout<<"\nEnter the author list: \n ";
	for(unsigned int i=0;i<n;i++)
	{
		cin>>author;
		authorList.push_back(author);
	}
	sSort(authorList,n);
	return 0;
}
