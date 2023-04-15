#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item item1;

    std::cout << "Enter a transaction: " << std::endl;
    std::cin >> item1;
    std::cout << "\n" << item1 << std::endl;

    return 0;
}

/*output:
Enter a transaction: 
0-201-78345-X 3 20

0-201-78345-X 3 60 20
*/