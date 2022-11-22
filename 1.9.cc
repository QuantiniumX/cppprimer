#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers :- " << endl;
    int v1 = 0, v2 = 0, sum = 0;
    cin >> v1 >> v2;
    while(v1 <= v2)
    {
        sum += v1;
        ++v1;
    }
    cout << "The sum of numbers between " << " is " << sum << endl;
    return 0;
}