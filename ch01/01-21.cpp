#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item item1, item2;

    std::cout << "Enter two transactions: " << std::endl;
    std::cin >> item1 >> item2;
    std::cout << "\n" << item1 + item2 << std::endl;

    return 0;
}

/*output:
Enter two transactions: 
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00

0-201-78345-X 5 110 22
*/