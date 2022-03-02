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
/*void fun(Probe p) {
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe p\n";
    v.push_back(std::move(p));
}*/




//lub
void fun(Probe &&p) {//rvalue
    
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe &&p\n";
    v.push_back(std::move(p)); //move ctor
}





//i
void fun(Probe &p) {
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe &p\n";

    //tu jest kopiowanie obiektu
    v.push_back(p);
}



int main() {

    Probe p{}; //def ctor
    fun(p); //przekazuje jako lvalue
    fun(std::move(p)); //przekazuje jako rvalue tj. rzutowanie na xvalue
}