
#include<vector>
#include<iostream>
#include<string>
using namespace std;

int bSearch(vector<string> A,unsigned int n, string x)
{
		unsigned int p,r,q;
		p = 0 ; r = n - 1; 
		while(p<=r)
		{
			q = (p+r)/2;
			if(A[q].compare(x)==0)
			{
				return q;
			}
			else if(A[q].compare(x)<0)
			{
				
				p = q + 1;
			}
			else if(A[q].compare(x)>0)
			{
				r = q - 1;
			}
		}
		return -1;
}
int main()
{
	vector<string> authorList;
	string author,x;
	unsigned int n; int q;
	cout<<"\nNumber of authors:";
	cin>>n;
	cout<<"\nAuthor: ";
	cin>>x;
	cout<<"\nSorted Author List: \n";
	for(unsigned int i = 0; i<n ; i++)
	{
		cin>>author;
		authorList.push_back(author);
	}
	q=bSearch(authorList,n,x);
	if(q!=-1)
	{
	cout<<"\n"<<x<<" is found "<<q+1<<" in the list"<<endl;
	}
	else if (q==-1)
	{
	cout<<"\nNOT FOUND"<<endl;
	}
	return 0;
}
