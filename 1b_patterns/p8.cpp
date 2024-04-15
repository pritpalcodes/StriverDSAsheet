// PROBLEM-8 
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    //loop for rows
    for(int i=n; i>=1;i--){
        //loop for whitespaces
        for(int k=0; k<=n-i-1;k++){
            cout<<"  ";
        }
        //loop for stars
        for(int j=0; j<=(2*i-2); j++){
            cout<<"*"<<" ";
        }
      
        cout<<endl;
    }
    return 0;
}
