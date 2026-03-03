// https://cses.fi/problemset/task/1072/
// constraints: 1 <= n <= 10k
/*
k = 9

1, 2, 3, 4
4, 5, 6, 5
7, 8, 9, 6
7, 8, 9, 10

First we need to know where a knight can attack. It will always be 2 in direction NSEW relative to knight, then 1 in either opposite cardinal plane.
e.g. 2N 1E, 2W 1S

Will also need out of bounds checks

Secondly, iterating over every possible combination that the two knights can be. Could use a nested for loop to put a knight at position 1, then 2nd knight in
every other square, then repeat with knight at 2, etc. but that's On^2.

okokok. forget all that.
 No. times knight K can be placed on the board: K^2. No. times K2 can be placed: K^2 -1. So if we multiply this together, total combinations =
(K^2) * (K^2-1)
However, they are both the same therefore divide by 2 = (K^2) * (K^2-1) /2

1, 2, 3
1, 2, 3

=  2 ways to attack
1, 1
2, 2
3, 3

= 2 ways to attack

Knights attack 2 in a direction and one in the opposite cardinal plane. Therefore theyh're in a block of 2x3. So we just need to calculate how many 2x3 blocks
there are in K^2 grid. They can be standing up or sideways. i.e. 3x2 / 2x3. So in a 3x3 grid, there are 4 total blocks. in each block, there are only 2
positions that two knights can attack each other. so in 3x3 grid, there are 8 ways they can attack each other. And there are 36 total ways they can be in.
so 36 - 8 = 28 safe locations where they don't attack each other, and 8 where they can attack each other.

So lastly, how many blocks are in a K grid?
There are 12 in a 4x4
4 in a 3x3
So always one less than k size = (K-1 * K-2) = one side, so
(K-1 * k-2) * 2 = blocks in a k grid
So ((K-1 * K-2) *2) * 2 = total attack ways

Therefore:
    ((K^2) * (K^2-1) /2) - (((K-1 * K-2) *2) * 2) = How many safe spaces the knights can stand
 */
#include <iostream>

int main()
{

    int k{};
    std::cin >> k;

    for (long int i = 1; i <= k; i++){

            long int res = ((i * i) * ((i * i) - 1) / 2) - ((((i - 1) * (i - 2)) * 2) * 2);
            std::cout << res << "\n";
        
    }

    return 0;
}