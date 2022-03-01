#include <iostream>

void fun(int&&) {std::cout << "int&&\n";}
void fun(int&) {std::cout << "int&\n";}

int main() {

    int i = 100; //lvalue

    //troche lvalue troche rvalue
    int && i_r = std::move(i); //rvalue = xvalue
    //l -> r

    int &&x = 2; //rvalue ref
    fun(x); //3 bo x jest lvalue (wskazuje na rvalue)
    fun(std::move(x)); //4 bo to juz jest rvalue

    std::string lvalue = "lvalue";
    std::string &&rvalue_ref = static_cast<std::string&&>(lvalue);

    if (std::move(lvalue) == rvalue_ref) 
        std::cout << "std::move == static_cast<...&&>\n";

}