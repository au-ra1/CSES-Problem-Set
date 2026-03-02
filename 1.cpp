// https://cses.fi/problemset/task/1068/

// constraints: 1 <= n <= 10^6
#include <iostream>


int main() {
long int n { };
std::cin >> n;



while (n != 1) {

std::cout << n << " ";
    
if (n % 2 == 0) {
    n = n / 2;
}
else if (n % 2 != 0) {
    n = (n * 3) + 1;
}

}

if (n == 1) {
    std::cout << n;
}
else {
    std::cout << 1;
}





return 0;
}



