#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the numbers to sum " << endl;
    int sum = 0, val = 0;
    while(cin >> val)
    sum += val;
    cout << "Sum= " << sum << endl;
    return 0;
}