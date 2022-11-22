#include <iostream>
/*
* Get input of two number
* Print the product of two number
*/
int main()
{
    std::cout << "Enter Two Numbers:- " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout <<"THe product of " << v1 << " and ";
    std::cout << v2 << " is " << v1 * v2 <<std::endl;
    return 0;
}
