#include <iostream>
#include <vector>

struct Probe {

    Probe() {std::cout << "default ctor\n";}
    Probe(const Probe&) {std::cout << "copy ctor\n";}
    Probe& operator=(Probe&) {std::cout << "copy assignment\n";}
    Probe(Probe&&) {std::cout << "move ctor\n";}
    Probe& operator=(Probe&&) {std::cout << "move assignment\n";}
};

//kopia
void fun(Probe p) {
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe p\n";
    v.push_back(std::move(p)); 
    std::cout << "koniec funkcji Probe p\n";
}
/*
//lub
void fun(Probe &&p) {//lvalue wskazujace na rvalue
    
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe &&p\n";
    v.push_back(std::move(p)); //move ctor
    std::cout << "koniec funkcji Probe &&p\n";
}

//i
void fun(Probe &p) { //lvalue
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe &p\n";

    //tu jest kopiowanie obiektu
    v.push_back(p); //kopiowanie
    std::cout << "koniec funkcji Probe &p\n";
}
*/

int main() {

    Probe p{}; //def ctor
    std::cout << "====\n";
    fun(p); //przekazuje jako lvalue
    std::cout << "====\n";
    fun(std::move(p)); //przekazuje jako rvalue tj. rzutowanie na xvalue
    //kopiowanie 
}