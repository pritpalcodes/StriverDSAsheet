//PROBLEM-4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,to_print=1; cin>>n;
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<to_print<<" ";
        }
        to_print+=1;
        cout<<endl;
    }
    return 0;
}