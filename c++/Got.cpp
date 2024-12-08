#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    cout << "The largest number is: " << largest << std::endl;

    if(num1==num2 && num1>num3)
    cout << " Two no. are equally the largest";
    else if(num2==num3 && num2>num1)
    cout << " Two no. are equally the largest";
    else if(num1==num3 && num1>num2)
    cout << " Two no. are equally the largest";
    
    if(num1==num2&&num2==num3)
    cout << "All numbers are equal";

    return 0;
}