#include<iostream>

int main(){
    int sum = 0, val;

    std::cout << "Enter numbers: " << std::endl;
    while (std::cin >> val){
        sum += val;
    }
    std::cout << "The sum of all numbers is " << sum << std::endl;
    
    return 0;
}

/*output:
Enter numbers: 
5
6
7
11
0
31
4
The sum of all numbers is 64
*/