#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	for(a=1;a<=n;a++)
	{
		int b;
		for(b=1;b<=a;b++)
		{
			if(n%2==0)
			{
				cout<<a+b;
				b=b+1;
			}
			else
			{
				cout<<n;
			}

		}

		cout<<endl;
	}
	return 0;
}

