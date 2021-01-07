#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int w;
    cin>>w;
    if(w > 7000 || w<0)
        cout<<"-1";
    else if(w==0)
        cout<<"0";
    else if(w >0 && w<=2000)
        cout<<"25";
    else if(w >2000 && w<=4000)
        cout<<"35";
    else if(w >4000 && w<=7000)
        cout<<"45";
    return 0;
}
