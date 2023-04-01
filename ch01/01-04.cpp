#include<iostream>

int main(){
    int v1, v2;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;

    return 0;
}

/*output:
Enter two numbers: 
5
9
The product of 5 and 9 is 45
*/