#include<iostream>
#include<algorithm>
using namespace std;
long long sg(long long x)
{
	if(x%2)
		return sg(x/2);
	else
		return x/2;
}
int main()
{
	int T;
	int N;
	long long sum;
	long long tmp;
	cin>>T;
	while(T--)
	{
		cin>>N;
		sum=0;
		for(int i=1;i<=N;i++)
		{
			cin>>tmp;
			sum=sum^sg(tmp);
		}
		//cout<<sum<<endl;
		if(sum)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
