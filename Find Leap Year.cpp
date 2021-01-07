#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n;
    cin>>n;
    if(n%400==0)
        cout<<"YES";
    else
        if(n%100==0)
            cout<<"NO";
    else
        if(n%4==0)
            cout<<"YES";
    else
            cout<<"NO";
    
    
    return 0;
}
