#include<iostream>
using namespace std;
int main(){
    /*Loop in C++
    There are 3 types of loops:-
    1.For Loop
    2.While Loop
    3.do-while Loop
    For loop in C++*/

     // Syntax for 'For loop'
    // for(initialization; condition; updation;){
    //     loop body(C++ code)
    // }
    // for (int i = 0; i <=4 ; i++)
    // {
    //    cout<<i<<endl;
    //        }
    // Example for Infinite for loop
    // for (size_t i = 0; 34 < 40; i++)
    // {
    //    cout<<i;
    // }
    
    // While loop in C++
    // Syntax:
    // {
    //     c++ staetements;
    // }
    // Print 1 to 40 using while loop
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }
    // Example of Infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    /*Do=while loop in C++*/
    // Syntax:
    // do:
    // {
    //       C++ statements; 
    //  }while(condition);
    // Printing 1 to 40 using do-while loop
    // int i=1;
    // do
    // {
    //   cout<<i<<endl;
    //   i++;  
    // } while (i<=40);
    
    
    return 0;
}