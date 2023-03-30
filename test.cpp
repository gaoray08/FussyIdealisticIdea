/*  Get someone to enter the 5 clutches of eggs, one at each time, the eggs will be added onto a total. You need to arrange baskets to contain the eggs.
Each basket can only contain  10 eggs. How many baskets do I need?  */

#include <iostream> 
int main(){ 
    int x;
    int y;
    int z; 
    int a;
    int b;
    std::cout << "Enter a word";
    std::cin >> x;
    std::cout << "Enter a word";
    std::cin >> y;
    std::cout << "Enter a word";
    std::cin >> z;
    std::cout << "Enter a word";
    std::cin >> a;
    std::cout << "Enter a word";
    std::cin >> b;
    
    char myList = list(x,y,z,a,b);
    int sumOfList = sum(list);
    int eachBasketLimit = 10;
    int numberOfBaskets = sumOfList / eachBasketLimit;
    
    std::cout << "You need a total of " << numberOfBaskets << " to hold all your eggs.";
    return 0;
}
