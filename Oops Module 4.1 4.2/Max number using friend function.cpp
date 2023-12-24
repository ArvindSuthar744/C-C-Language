#include <iostream>
using namespace std;
class MaxFinder {
private:
    int num1, num2;

public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}
    
    friend int findMax(const MaxFinder &finder);
};

int findMax(const MaxFinder &finder) {
    return (finder.num1 > finder.num2) ? finder.num1 : finder.num2;
}

int main() {
    int a = 15, b = 50;

    MaxFinder finder(a, b);
    int maxNumber = findMax(finder);
	cout<< "A is : "<<a<<endl;
	cout<<"B is : "<<b<<endl;
    std::cout << "The maximum number is: " << maxNumber << std::endl;

    return 0;
}

