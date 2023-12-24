#include <iostream>
using namespace std;
class NumberSwapper {
private:
    int num1, num2;

public:
    NumberSwapper(int a, int b) : num1(a), num2(b) {}
    void swapNumbers() {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    void displayNumbers() {
        std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    }
};

int main() {
    int a = 10, b = 20;

    NumberSwapper swapper(a, b);
    std::cout << "Before swapping: num1 = " << a << ", num2 = " << b << std::endl;
    swapper.swapNumbers();
    swapper.displayNumbers();

    return 0;
}

