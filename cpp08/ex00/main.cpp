#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>

int main() {
    std::list<int> myList;
    for (int count=0; count < 5; ++count)
        myList.push_back(count);
    std::cout << *easyfind(myList, 3) << std::endl;

    std::vector<int> myVector;
    for (int count=0; count < 5; ++count)
        myVector.push_back(count);
    std::cout << *easyfind(myVector, 4) << std::endl;

    try {
        std::cout << *easyfind(myVector, 5) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
