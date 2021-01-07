#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> two;
vector<vector<int>> three;
int **ans;

int find(int a, int x){
    int val = 0;
    while(a%x == 0){
        val++;
        a = a/x;
    }
    return val;
}
void get2(int i, int j, int sum2, int sum3, int n, int pairs){
    if(ans[i][j]==-1)
        ans[i][j] = pairs;
    else ans[i][j] = min(ans[i][j], pairs);

    if(i+1 < n){
        get2(i+1, j, sum2+two[i+1][j], sum3+three[i+1][j], n, min(sum2+two[i+1][j], sum3+three[i+1][j]));
    }
    if(j+1 < n){
        get2(i, j+1, sum2+two[i][j+1], sum3+three[i][j+1], n, min(sum2+two[i][j+1], sum3+three[i][j+1]));
    }
}

int main() {
   int n;
    cin>>n;
    vector<vector<int>> p;
    ans = new int*[n];
    for(int i=0; i<n; i++){
        vector<int> temp;
        vector<int> temp1;
        vector<int> temp2;
        ans[i] = new int[n];
        for(int j=0; j<n; j++){
            int a;
            cin>>a;
            ans[i][j] = -1;
            temp.push_back(a);
            int x = find(a, 2);
            int y = find(a, 3);
            temp1.push_back(x);
            temp2.push_back(y);
        }
        p.push_back(temp);
        two.push_back(temp1);
        three.push_back(temp2);
    }
    
    get2(0, 0, two[0][0], three[0][0], n, min(two[0][0], three[0][0]));
       cout<<ans[n-1][n-1];
    return 0;
}
