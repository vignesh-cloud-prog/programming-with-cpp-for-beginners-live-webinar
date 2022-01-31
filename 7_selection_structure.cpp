#include <bits/stdc++.h>
using namespace std;

int main()
{
    // If - Else
    int age = 19;
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "You can vote.";
    // }
    // else
    // {
    //     cout << "Not eligible for voting.";
    // }

    //     // Else if
    int x=5, y=7;
    // // cin >> x >> y;
    // if (x == y)
    // {
    //     cout << "Both the numbers are equal";
    // }
    // else if (x > y)
    // {
    //     cout << "X is greater than Y";
    // }
    // else
    // {
    //     cout << "Y is greater than X";
    // }

    // Nested if
    // if (x == y)
    // {
    //     cout << "Both the numbers are equal";
    // }
    // else
    // {
    //     if (x > y)
    //     {
    //         cout << "X is greater than Y";
    //     }
    //     else
    //     {
    //         cout << "Y is greater than X";
    //     }
    // }

    // Switch
     int n1,n2;
     char op;
     cout<<"Enter 2 numbers: ";
     cin>>n1>>n2;
     cout<<"Enter operand: ";
     cin>>op;
     switch (op)
     {
     case '+':
     cout<<n1+n2<<endl;
     break;
     case '-':
     cout<<n1-n2<<endl;
     break;1
     case '*':
     cout<<n1*n2<<endl;
     break;
     case '/':
     cout<<n1/n2<<endl;
     break;
     case '%':
     cout<<n1%n2<<endl;
     break;

     default:
     cout<<"Operator not found!"<<endl;
     break;
     }
    return 0;
}