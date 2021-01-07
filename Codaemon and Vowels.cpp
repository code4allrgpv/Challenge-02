#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    char arr[101];
    int s,k;
    while(n--)
    {
        cin>>arr;
        s=0;
        for(int i=0;i<strlen(arr);i++)
        {
            k=arr[i];
            if(k=='A'||k=='E'||k=='I'||k=='O'||k=='U'||k=='a'||k=='e'||k=='i'||k=='o'||k=='u')
            {
                s++;
            }
        }
        cout<<s<<endl;;
    }
    return 0;
}
