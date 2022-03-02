#include <iostream>

//void fun(int i) {std::cout << "int i\n";}
//lub
void fun(int &i) {std::cout << "int &i\n";} //lvalue
//i
void fun(int &&i) {std::cout << "int &&i\n";} //rvalue

int main() {

    int i = 6;
    fun(i); //lvalue

    fun(7); //rvalue

    fun(std::move(i)); //xvalue

}