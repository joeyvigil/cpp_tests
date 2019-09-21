#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Have " << argc << " arguments:" << std::endl;
    for (int i = 0; i < argc; ++i) {
        int x;
        std::cout << argv[i] << std::endl;
        std::cin >>x;
    }
}