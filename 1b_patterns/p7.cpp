// PROBLEM-7
//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    //loop for rows
    for(int i=0; i<n;i++)
    {
        //loop for white spaces (n-i)
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
