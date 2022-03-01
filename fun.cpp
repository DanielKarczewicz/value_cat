#include <iostream>

void fun(int&&) {std::cout << "rvalue ref int&&\n";}
/*
1. 


*/
void fun(int&) {std::cout << "lvalue ref int&\n";} 
/*
1.


*/
void fun(const int&) {std::cout << "const ref const int&\n";} 
/*
1.


*/

int main() {

    int i = 10; //lvalue
    const int &x = 10; //const lvalue ref
    fun(i); //lvalue
    fun(x); //const lvalue ref
    fun(546); //rvalue ref
}