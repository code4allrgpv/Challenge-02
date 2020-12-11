#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t, n, c0, c1, m, n0, n1;
    string s;
    cin>>t;
    while(t-- > 0)
    {
        cin>>n>>c0>>c1>>m;
        cin>>s;
        n0=0;
        n1=0;
        // Counting 0's and 1's in this loop.
        for(ll i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
            n0++;
            else
            n1++;
        }
        
        // if the count of 0's and 1's is same then simply return the answer
        // And jumping to next test case.
        if(c0 == c1) 
        {
            cout<<(n1*c1)+(n0*c0)<<endl;
            continue;
        }
        
        // Comparing c0 > c1
        ll ans = 0;
        if(c0 > c1)
        {
            if(m+c1 <= c0)
                ans = (n0*m)+(n0*c1)+(n1*c1);
            else
                ans = (n0*c0)+(n1*c1);
        }
        else
        {
            if(m+c0 <= c1)
                ans = (n1*c0)+(n0*c0)+(n1*m);
            else
                ans = (n0*c0)+(n1*c1);
        }
        
        cout<<ans<<endl;
    }
	return 0;
}
