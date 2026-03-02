// https://cses.fi/problemset/task/1069
// constraints 1 <= n <= 10^6
// input = string of chars including A C G T. Letters are repeated - return length longest sequence of single letters e.g. AAACCGT = 3 (A)
// have a counter that goes up for each sequence increase - and a check that the character is different which resets said counter

#include <iostream>


int main(){

    
    std::string seq {};
    std::getline(std::cin, seq);

    int longest_seq {};
    int N = seq.length();
    int count = 1;
    for (int i = 1; i <= N; i++){

 
        if (seq[i] == seq[i - 1]){
            count += 1;  
        }
        else {
            if (longest_seq < count){
                longest_seq = count;
            }
            count = 1;
        }
    }

    std::cout << longest_seq;










    return 0; 
}