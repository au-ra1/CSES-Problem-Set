// https://cses.fi/problemset/task/1071
// constraints: (1 <= t <= 10^5), (1 <= y, x <= 10^9)
// each row/column is a square e.g. 1^1 = 1, 2^2 = 4, 3^3 = 9 etc. So we can find which square it is from the the coordinates, 
//and then + or - along the axes until we get to the right number.


#include <iostream>
#include <sstream>
#include <vector>

int main(){

    int t;
    std::cin >> t;
    std::cin >> std::ws;

    std::vector<long int> lines;
    for (int i = 0; i <= t -1; i++){
        std::string current_string { };
        std::getline(std::cin, current_string);

        std::vector<int> values;
        std::stringstream stream(current_string);
        int n; 
        while(stream >> n) {
            values.push_back(n);
        }
        
        long int largest;
        long int smallest;
        if (values[0] < values[1]){
            largest = values[1];
            smallest = values[0];
        }
        else {
            largest = values[0];
            smallest = values[1];

        }

        long int squared = (largest * largest);
        long int midpoint = squared - (largest - 1 );
        long int res;

        if (largest % 2 == 0){

            if (largest == values[0]){
                res = midpoint + (largest - smallest);

            }
            else if (largest == values[1]){
                res = midpoint - (largest - smallest);
            }
        }
        else if (largest % 2 == 1){

            if (largest == values[0]){
                res = midpoint - (largest - smallest);

            }
            else if (largest == values[1]){
                res = midpoint + (largest - smallest);
            }
        }


        lines.push_back(res);

    }
    for (int i = 0; i <= lines.size() -1; i++){
        std::cout << lines[i] << " " << "\n";
    }

    return 0;
}