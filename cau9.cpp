#include "iostream"
using namespace std;
int main()
{
	int n,m;
	cout<<"Nhap so dong:"<<endl; cin>>n;
	cout<<"Nhap so cot:"<<endl; cin>>m;
	int a[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];	
		}
		
	}
	for(int i=0;i<n;i++)
	{	cout<<endl;
		for(int j=0;j<m;j++)
		{
			
			cout<<"\t"<<a[i][j];	
		}
		cout<<endl;
		
	}
}