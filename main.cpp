#include <iostream>

//void fun(int&&) {std::cout << "rvalue ref int&&\n";} //pasuje rvalue ref
void fun(int&) {std::cout << "lvalue ref int&\n";} //pasuje lvalue
void fun(const int&) {std::cout << "const ref const int&\n";} //pasuje const lvalue ref oraz lvalue

int main() {

    int p = 16; //rvalue
    bool b = false; //rvalue
    std::cout << "adres str: " << &"hello there" << '\n'; //lvalue


    /////////C++98

    std::string s = "s"; //lvalue = lvalue
    std::string &ref_s = s; //ref lvalue = lvalue

    //nie można zainicjować odwołania typu
    //"std::string &" (bez kwalifikatora const) przy użyciu wartości typu "const char [2]"
    //std::string &ref_s2 = "h";
    
    const std::string &const_ref_s3 = s; //const ref
    //const_ref_s3 += "dfs"; //nie można modyfikowac
    const std::string &const_ref_s4 = "dflhdsifjs"; //const ref = rvalue


    //////////////C++11
    std::string s5 = "fgsdfg";

    //rvalue reference
    //std::string &&rv_ref_s5 = s5; //nie mozna przypisac lvalue
    std::string &&rv_ref_s6 = "dfgdgsdgs"; //mozna przypisac obiekt tymczasowy
    rv_ref_s6 += "fgdrgdfg"; //mozna modyfikowac


    int i = 10;
    const int &x = 10;
    fun(i);
    fun(x);
    fun(546);

}