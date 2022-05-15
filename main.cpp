#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=1,mx;
	    cin>>n;
	    int a[n],d[n];
	    vector <int>v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>d[i];
	    }
	    mx=d[0];
	    for(int i=1;i<n;i++)
	    {
	        if(d[i]>mx)
	        {
	            mx=d[i];
	        }
	    }
	    for(int i=1;i<=mx;i++)
	    {
	        c=0;
	        for(int j=0;j<n;j++)
	        {
	        if(i>=a[j]&&i<d[j])
	        {
	            c++;
	        }   
	        }
	        v.push_back(c);
	    }
	    sort(v.begin(),v.end());
	    auto it=v.end();
	    it--;
	    cout<<*it<<endl;
	}
	return 0;
}
