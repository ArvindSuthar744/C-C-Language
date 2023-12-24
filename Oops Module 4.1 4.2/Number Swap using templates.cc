#include <iostream>
using namespace std;

namespace MyNamespace 
{
    template <typename T>
    void swap(T &a, T &b) 
	{
        T temp = a;
        a = a + b;
        b = a - b;
        a = a - b;
    }
}

int main() 
{
    int num1 = 5, num2 = 10;
   

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping integers
    MyNamespace::swap(num1, num2);

    cout << "\nAfter swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

