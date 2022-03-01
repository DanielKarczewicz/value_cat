#include <iostream>

void fun(int&&) {std::cout << "rvalue ref int&&\n";}
/*
1. rvalue ref (5)


*/
void fun(int&) {std::cout << "lvalue ref int&\n";} 
/*
1. lvalue (int i = 10)


*/
void fun(const int&) {std::cout << "const ref const int&\n";} 
/*
1. const lvalue ref (const int &x = 10)
2. rvalue ref (5)
3. lvalue (int i = 10)

*/

int main() {

    int i = 10; //lvalue
    const int &x = 10; //const lvalue ref
    fun(i); //lvalue
    fun(x); //const lvalue ref
    fun(5); //rvalue ref

    //int i = 10; - pasuje do int& i const int&
    //const int &x = 10; - pasuje do const int&
    //5 - pasuje do const int&
}