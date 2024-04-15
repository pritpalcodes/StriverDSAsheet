
/* 
// PROBLEM-1
// *****
// *****
// *****
// *****
// *****
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/


/* PROBLEM-2
// *
// **
// ***
// ****
// *****
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
PROBLEM-3
// 1
// 22
// 333
// 4444
// 55555

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
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
*/

/*
// PROBLEM - 5
// * * * * *  
// * * * *
// * * *
// * *
// *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
//PROBLEM - 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=n; i>=1;i--)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/

/*
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
*/


/*
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
*/


/*
//PROBLEM-9
//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     * 
//PROBLEM-9
//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     * 

#include <bits/stdc++.h>
using namespace std;

void erect_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

void inverted_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;
    erect_pyramid(N);
    inverted_pyramid(N);
    return 0;
}
*/


/*

// o/p:
// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0; i<=(2*n);i++){
        int stars=i;
        if(i>n) stars=(2*n-i);
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
PROBLEM -11
// o.p.
// 1
// 0 1 
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int start;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;   
        for(int j=0; j<=i;j++){
        cout<<start<<" ";
        start=1-start;
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
PROBLEM - 12
//o.p.
// 1             1 
// 2 2         2 2 
// 3 3 3     3 3 3 
// 4 4 4 4 4 4 4 4
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int space=2*(n-1);
    for(int i=1; i<=n;i++){
        //numbers
        for(int j=1; j<=i;j++){
            cout<<i<<" ";
        }
        //space
        for(int j=1; j<=space;j++){
            cout<<"  ";
        }
        //numbers
        for(int j=i;j>=1;j--){
                cout<<i<<" ";
        }
        cout<<endl;
        space-=2;
    }
    return 0;
}
*/





/*
//PROBLEM-13
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int to_print=1;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<to_print<<" ";
            to_print+=1;
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
PROBLEM -14
A
A B 
A B C
A B C D
A B C D E 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}
*/


/*PROBLEM-15
5
A B C D E
A B C D
A B C
A B
A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=n; i>=1; i--){
        char ch = 'A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
// PROBLEM-16
// A
// B B 
// C C C 
// D D D D
// E E E E E
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        ch+=1;
        cout<<endl;
    }
    return 0;
}

*/


/*
PRONBLEM-17
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        char ch='A';
        int breakpoint=(2*i+1)/2;
        //space
        for(int j=1; j<=(n-i-1); j++){
            cout<<" ";
        }

        //alphabets
        for(int j=1; j<=(2*i+1);j++){ 
            cout<<ch;
            if(j<=breakpoint) ch+=1;
            else ch--;
        }
        cout<<endl;
    }
    return 0;
}

*/


/*
PROBLEM-18
E
D E
C D E
B C D E
A B C D E

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    char to_print;
    //iterating through the rows
    for(int i=n; i>=1; i--){
        //iterating through the columns
        to_print='A'+i-1;
        for(int j=1; j<=(n-i+1); j++){
            cout<<to_print<<" ";
            to_print++;
        }
        cout<<endl;
    }
    return 0;
}

*/

/*
// PROBLE-19
// ***********
// ****  *****
// ***    ****
// **      ***
// *        **
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, inis=0; cin>>n;
    for(int i=0; i<n; i++){
        //left stars
        for(int j=0; j<n-i;j++){
            cout<<"*";
        }

        //spaces
        for(int j=0;j<inis;j++){
            cout<<" ";
        }

        //right stars
        for(int j=0; j<=n-i; j++){
            cout<<"*";
        }
        inis+=2;
        cout<<endl;
    }
    inis = 8;
    for(int i=0; i<n; i++){
        //left stars
        for(int j=0; j<=i;j++){
            cout<<"*";
        }

        //spaces
        for(int j=0;j<=inis;j++){
            cout<<" ";
        }

        //right stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
    }
    return 0;
}


/*
// PROBLEM-20
// 5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n; cin>>n;
        int spaces=2*n-2;
        for(int i=1; i<=2*n-1;i++){
            //stars will go under if else
            int stars=i;
            if(i>n) stars=2*n-i;
            //stars
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            //spaces
            for(int j=1 ; j<=spaces;j++){
                cout<<" ";
            }
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            cout<<endl;
            if(i<n) spaces -=2;
            else spaces +=2;
        }
       return 0;
}


*/

/*
// PROBLEM-21
// 5
// ******
// *    *
// *    *
// *    *
// *    *
// ******

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n;j++){
            if(i==0 || i==(n) || j==0 || j==(n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

/*
// PROBLEM-22
// 4
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1;j++){
            int top=i;
            int down=j;
            int right=(2*n-2)-j;
            int left=(2*n-2)-i;
            cout<<(n-min(min(top,down), min(right,left)))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/
