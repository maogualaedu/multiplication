#include <iostream>

int main() {

    for (int i = 0; i <= 9; i++) {
        for (int y = 0; y <= 9; y++) {
             std::cout << i << " x " << y << " = " << i * y << std::endl;
        }
    }
    return 0;
}
