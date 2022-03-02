#include <iostream>

struct Probe {

    Probe() {std::cout << "default ctor\n";}
    Probe(const Probe&) {std::cout << "copy ctor\n";}
    Probe& operator=(Probe&) {std::cout << "copy assignment\n";}
    Probe(Probe&&) {std::cout << "move ctor\n";}
    Probe& operator=(Probe&&) {std::cout << "move assignment\n";}
};

int main() {
    



}