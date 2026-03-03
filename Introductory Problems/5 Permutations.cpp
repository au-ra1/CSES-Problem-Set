// https://cses.fi/problemset/task/1070
// constraints: 1 <= n <= 10^6
// A sequence of 1,2...n. No adjacent elements may have a difference of 1. 
// 10. 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 <- solution? just put every 1st or 2nd together, then repeat with the other odd/even. 

#include <iostream>
#include <vector>


int main(){

    int n;
    std::cin >> n;


    if (n > 1 && n <= 3){
        std::cout << "NO SOLUTION";
    }
    else {
        for (int i = 2; i <= n; i+=2){
            std::cout << i << " ";
        }

        for (int i = 1; i <= n; i+=2){
            std::cout << i << " ";
        }
    }












    return 0; 
}