#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    
    char s[n+1];
    cin >> s;
    
    for(int i = n-1; i>=0; i--) {cout << s[i];}
    return 0;
}
