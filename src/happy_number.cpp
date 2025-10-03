#include <iostream>

// recursively calculating the sum of products 
int sumsOfSquares(int num) {
    if (num == 0) {
        return 0;
    } else {
        std::cout << num % 10 << "*" << num % 10 << " = " << (num % 10)*(num % 10) << std::endl;
        return (num % 10)*(num % 10) + sumsOfSquares(num / 10);
    }
}

// checking if the number is happy 
bool findHappiness(int number) {
    while (number > 9) {
        std::cout << number << std::endl; 
        number = sumsOfSquares(number);
    }

    if (number == 1 || number == 7) return true; 
    return false; 
}

int main() {
    // taking input  
    int num; 
    std::cout << ">>> "; 
    std::cin >> num; 

    bool happy = findHappiness(num);

    if (happy) std::cout << "Happy Number!";
    else std::cout << "Sad Number!"; 

    return 0; 
}