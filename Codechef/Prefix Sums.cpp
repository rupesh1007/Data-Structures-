include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v,u;
	    if(n%4!=0)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    else
	    {
	        for(int i=1;i<=n/4;i++)
	        {
	          v.push_back(i);
	          v.push_back(n-i);
	        }
	        for(int i=(n/4)+1;i<=n/2;i++)
	         {
	             u.push_back(i);
	             u.push_back(n-i);
	         }
	         sort(v.begin(),v.end());
	         sort(u.begin(),u.end());
	         cout<<"YES"<<endl;
	         for(int i=0;i<v.size();i++)
	        {
	         cout<<v[i]<<" ";
	        }
	        cout<<endl;
	        for(int i=0;i<u.size();i++)
	         {
	            cout<<u[i]<<" ";
	         }
	        cout<<endl;
	    }
	}
	return 0;
}
