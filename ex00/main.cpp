
#include "includes/easyfind.hpp"

int main() {

    try {

        std::vector<int> num;
        num.push_back(1);
        num.push_back(2);
        num.push_back(3);
        num.push_back(4);
        num.push_back(5);
        int to_find = 5;
        std::vector<int>::iterator it = easyfind(num, to_find);

        std::cout << to_find << " Found at position: " <<
            std::distance(num.begin(), it) << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Value not found\n";
    }
}