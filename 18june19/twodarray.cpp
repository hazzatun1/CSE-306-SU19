#include <iostream>
#include <string>
using namespace std;
void show(int **arr,int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()

{
    int n=2, m=3;

int **arr=new int*[n];

for(int i=0;i<n;i++)
	{
		arr[i]=new int[m];
	}

		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}

  show(arr,n,m);

   delete[]arr;
   return 0;

}
