#include <iostream>
#include <vector>


struct Resource {
    std::vector<int> vec;

    Resource() : vec(std::vector<int>(1000, 6)) {std::cout << "creating new res\n";}

    Resource(const Resource&) {std::cout << "copy ctor - i'm ex to copy\n";}
    Resource& operator=(const Resource&) {std::cout << "copy op - i'm ex to copy\n";}

};

Resource fun() {
    Resource r;
    return r; //zwraca przez wartosc
}

int main() {

    std::cout << "====\n";
    Resource r1{};
    std::cout << "====\n";
    Resource r2 = r1;
    std::cout << "====\n";
    Resource r3 = fun();
    std::cout << "====\n";
    r1 = fun();
    std::cout << "====\n";
}