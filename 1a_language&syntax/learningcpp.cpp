
    // //code       DECLARATION, ASSIGNMENT, INITIALISING, COMPARING
    // // input-output
    // cout<<"Hello Pritpal!"; //to print out(on the terminal)
    // cout<<"Enter your age";
    // int age;//a variable age of the datatype integer
    // cin>>age; //to take the input in a variable named age

    // //comments
    // //single line comment

    // /*multi
    // line
    // comment*/

    // // variables in c++
    // int a;
    // float b;
    // double c;

    // char a1;
    // string a2;

    // // operators
    // cout<<"Enter first number"<<endl;
    // int x,y;
    // cin>>x;
    // cout<<"Enter second number"<<endl;
    // cin>>y;
    // cout<<"Sum num1 and num2 is "<<x+y<<endl;
    // cout<<"difference of num1 and num2 is "<<x-y<<endl;
    // cout<<"Product of num1 and num2 is "<<x*y<<endl;
    // cout<<"Division of num1 and num2 is "<<x/y<<endl;

    // // typecasting
    // cout<<(float)x/y<<endl;

    // conditionals
    // -> if-else(ladder)
    // char light;
    // cout<<"Enter the signal status ('r','y','g')"<<endl;
    // cin>>light;
    // if(light=='r'){
    //     cout<<"Stop"<<endl;
    // }
    // else if(light=='y'){
    //     cout<<"Wait"<<endl;
    // }
    // else if(light=='g'){
    //     cout<<"Go!"<<endl;
    // }
    // else{
    //     cout<<"Madarchod! sahi input daal behen k laude"<<endl;
    // }

    // switch-case
    //  switch (age)
    //  {
    //  case 12:
    //      cout << "You are 12 years old"<<endl;
    //      break;
    //  case 18:
    //      cout << "You are 18 years old"<<endl;
    //      break;

    // CONDITIONALS!
    // ->while loop
    // int index = 0;
    // while(index<34)
    // {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }

    // -> do while
    // do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 33);

    // -> for loop
    // for (int i = 1; i <= 34; i++)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    // }

    // FUNCTIONS!
    //
    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;
    // cout<<"Enter second number"<<endl;
    // cin>>b;
    // cout<<"The function returned "<<add(a,b);

    // Important DataStructures - Arrays
    // int marks[]={10,11,20,19}; //initialising the array
    // // indeices= 0 , 1, 2, 3 {indicing starts from 0}
    // cout<<marks[2]<<endl; //accessing the elements
    // cout<<marks[5]<<endl; //this will throw an error?? coz, index 5 does not exist?? No this will throw an address of some unknown space!
    // int score[6]; // to initialize an array of integers of size '6'
    // score[0]=1; //setting values in it!
    // cout<<score[0]<<endl;

    // MULTIDIMENSIONAL ARRAY$!
    // int arr2d[2][3] = {  {1,2,3},
    //                      {4,5,6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }

    // STRING
    // string name = "PRITPAL";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl; //"attributes of string" ie built in functions for a string!
    // cout<<"The name is "<<name.substr(1,155)<<endl;
    // cout<<"The name is "<<name.substr(2,3);

    // POINTERS
    // int a=1; // an integer that stores the value 1
    // int * ptra; //an integer pointer declared.
    // ptra=&a; //ptra <-address of 'a'
    // cout<<"Address of a "<<ptra<<endl<<"value of a "<<a<<endl; // '&' ka matlab hota h, the address of!
    // cout<<"value at a using the pointer "<<*ptra<<endl; // '*' ka matlab hota h, the value at... * is called dereference operator!

    // Classes and Objects in c++
//     class Employee
//     {
//     private:
//         int secretpass;
//     public:
//         string name;
//         int salary;
    
//     // constructor
//     Employee(string n,int s, int sp){
//         this-> name=n;
//         this-> salary=s;
//         this-> secretpass=sp;
//     }

//     // method of the class employees
//     void print_details(){
//         cout << "The name of our first employee is " << this->name << " and their salary is " << this->salary << " dollars and their secret password is fuckin "<<this->secretpass<<endl;
//     }
//     };
    
    
//     //creating an object of the class
//     Employee pritp("pritpal", 2100, 21104023);
//     // pritp.name = "Pritapl"; //adding the value to the object 
//     // pritp.salary = 21000;

//     // cout << "The name of our first employee is " << pritp.name << " and their salary is " << pritp.salary << " dollars" << endl;
//     // cout<<pritp.secretpass<<endl; // this line shall throw an error, as secret pass is declared as a private variable and it shall not be accessed by the objects outside the class! so instead we create another method!

//     cout<<"printing the details using the method"<<endl;
//     pritp.print_details();








//     return 0;
// };


#include<iostresm>
#include<bits/stdc++.h>

int main(){
    int n; cin>>n;

}