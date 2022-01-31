#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world\n";
    return 0;
}
// 1. #include<iostream>
// #include is the pre-processor directive that is used to include files in our
// program. Here we are including the iostream standard file which is
// necessary for the declarations of basic standard input/output library in
// C++.

// 2. . Using namespace std
// All elements of the standard C++ library are declared within namespace.
// Here we are using std namespace.

// 3. int main()
// The execution of any C++ program starts with the main function, hence it
// is necessary to have a main function in your program. ‘int’ is the return
// value of this function. (We will be studying about functions in more detail
// later).

// 4. {}
// The curly brackets are used to indicate the starting and ending point of
// any function. Every opening bracket should have a corresponding closing
// bracket

// 5. coutфф”Hello World!\n”;
// This is a C++ statement. cout represents the standard output stream in
// C++. It is declared in the iostream standard file within the std namespace.
// The text between quotations will be printed on the screen.
// \n will not be printed, it is used to add line break.
// Each statement in C++ ends with a semicolon (;)

// 6. return 0;
// return signifies the end of a function. Here the function is main, so when
// we hit return 0, it exits the program. We are returning 0 because we
// mentioned the return type of main function as integer (int main). A zero
// indicates that everything went fine and a one indicates that something
// has gone wrong