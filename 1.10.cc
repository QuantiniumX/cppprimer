#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers :- " << endl;
    int v1 = 0, v2 = 0, sum = 0; //Assigns the values of ints to 0
    cin >> v1 >> v2; // Assigning what to ask first
    while(v1 >= v2) // loop while v1 is smaller than equal to v2
    {
        sum += v1;
        --v1;
    }
    cout << "The sum of numbers " << " is " << sum << endl;
    return 0;
}