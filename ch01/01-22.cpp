#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item item, total;

    if (std::cin >> total){
        while (std::cin >> item){
            total += item;
        }
        std::cout << "Total: " << total << std::endl;
    }
    return 0;
}

/*output:
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
0-201-78345-X 2 10.00
0-201-78345-X 2 15.00
0-201-78345-X 1 100.00

Total: 0-201-78345-X 10 260 26
*/