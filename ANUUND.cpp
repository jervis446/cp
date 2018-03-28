#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		for(int i=1;i<n;i++)
		{
			if (i%2==0)
			{
				swap(v[i],v[i-1]);
			}
			
		}
		for(int i=0;i<n;i++)
		{
			cout << v[i]<<" ";
		}
		cout << "\n";

	}
}