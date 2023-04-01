#include<iostream>

int main(){
    int v1, v2;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "All the number between: "
              << v1 << " and " << v2 << " are " << std::endl;
    
    int i = v1 + 1;
    while (i < v2){
        std::cout << i << std::endl;
        i++;
    }
}

/*output:
Enter two numbers: 
41
53
All the number between: 41 and 53 are 
42
43
44
45
46
47
48
49
50
51
52
*/