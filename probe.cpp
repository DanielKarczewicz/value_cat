#include <iostream>
#include <vector>

struct Probe {

    Probe() {std::cout << "default ctor\n";}
    Probe(const Probe&) {std::cout << "copy ctor\n";}
    Probe& operator=(Probe&) {std::cout << "copy assignment\n";}
    Probe(Probe&&) {std::cout << "move ctor\n";}
    Probe& operator=(Probe&&) {std::cout << "move assignment\n";}
};

/*void fun(Probe p) {
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe p\n";
    v.push_back(std::move(p));
}*/
//lub
void fun(Probe &&p) {
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe &&p\n";
    v.push_back(std::move(p));
}
//i
void fun(Probe &p) {
    std::vector<Probe> v{};
    std::cout << "wewnatrz funkcji Probe &p\n";
    v.push_back(p);
}

int main() {




}