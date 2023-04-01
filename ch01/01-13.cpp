#include<iostream>

int main(){
    int sum = 0;
    for (int val = 50; val <= 100; val++){
        sum += val;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;

    for (int val = 10; val >= 0; val--){
        std::cout << val << std::endl;
    }
    return 0;
}

/*output:
Sum of 50 to 100 inclusive is 3825
10
9
8
7
6
5
4
3
2
1
0
*/