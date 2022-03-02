#include <iostream>
#include <vector>

std::vector<int> addOne(std::vector<int> vec) {
    vec.push_back(1);
    return vec;
}

void addOneOpt(std::vector<int>& vec) {
    vec.push_back(1);
} //przekazujemy przez adres poniewaz kopiowanie jest drogie

int addOne(int intCheapToCopy) {
    intCheapToCopy += 1;
    return intCheapToCopy;
}

int main() {

    int i = 10;
    int iOne = addOne(i);


    std::vector<int> vec(100, 6);
    addOneOpt(vec);

    std::cout << vec.size() << '\n';

}