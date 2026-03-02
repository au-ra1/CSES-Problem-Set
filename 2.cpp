// https://cses.fi/problemset/task/1083
// constraints: 2 <= n <= 2 . 10^5
// just add up all the numbers in the input, and the difference between that and $$n!

#include <iostream>
#include <sstream>

int main(){

int input_n { };
std::cin >> input_n;
std::cin >> std::ws;

std::string input_nums { };
std::getline(std::cin, input_nums);
std::stringstream stream(input_nums);

int total_nums = 0;
for (int i = 0; i <= input_n; i++){
    total_nums += i;
}

int total_input_nums { };
for (int n; stream >> n;){
    total_input_nums += n;
}

std::cout << total_nums - total_input_nums;






return 0;
}