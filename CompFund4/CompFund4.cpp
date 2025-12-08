#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int num0 = 0;
    int Largest = 0;
    int Smallest = 9;
    int Sum = 0;
    int n;
    cout << "Enter a number between 999 and 9999999: ";
    cin >> n;
    if (n >= 999 && n <= 9999999) {
        while (n > 0) {
            Sum = Sum + n % 10;
            int digit = n % 10;
            n = n / 10;
            if (digit > Largest) {
                Largest = digit;
            }

            if (digit < Smallest) {
                Smallest = digit;
            }
            if (digit == 0) {
                num0++;

            }
        }


       cout << "Sum = " << Sum << endl;
       cout << "largest = " << Largest << endl;
       cout << "Smallest = " << Smallest << endl;
       cout << "Number of 0 digit = " << num0;
    }
    else cout << "Invalid input";
    return 0;
}

