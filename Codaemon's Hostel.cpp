#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// In this problem, we have to find the maximum horizontal and vertical
// distance between the Corners of Main Hostel block and Meeting room block
// Just maximize the sum of horizontal and vertical distance.
 
int main() {
    ll l,b,c,d,t;
    cin>>t;
    while(t-- > 0)
    {
        cin>>l>>b>>c>>d;
        c = c-1;
        d = d-1;
        l = l-1;
        b = b-1;
        
        ll ans = 0;
        // Calculating the distances between Each corners of Hostel block and the meeting room block
        // And choosing the maximum of them
        ans = max(ans, abs(0-c)+abs(0-d));
        ans = max(ans, abs(0-c)+abs(b-d));
        ans = max(ans, abs(l-c)+abs(0-d));
        ans = max(ans, abs(l-c)+abs(b-d));
        cout<<ans<<endl;
    }
    return 0;
    
}
