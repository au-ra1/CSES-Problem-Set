// https://cses.fi/problemset/task/1094
// constraints: 1 <= n <= 2 . 10^5, 1 <= xi <= 10^9
// check n size compared to n - 1. if smaller, incremement by the difference e.g. 5, 0 = increment by 5 and increment count by the same

#include <iostream>
#include <sstream>
#include <vector>

int main(){

    int size { };
    std::cin >> size;
    std::cin >> std::ws;

    std::string seq { };
    std::getline(std::cin, seq);
    std::vector<int> vector_seq;
    std::stringstream stream(seq);

    for (int n; stream >> n;){
        vector_seq.push_back(n);
    }

    long long int count = 0;
    for (int i = 1; i <= size -1; i++){
        if (vector_seq[i] < vector_seq[i - 1]){
            int diff = vector_seq[i - 1] - vector_seq[i];
            vector_seq[i] += diff;
            count += diff;
        }
    }

    std::cout << count;





    return 0;
}