#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

int N;
double dist[20][20], memo[1 << 16]; // 1 << 16 is 2^16, recall that max N = 8

double matching(int bit_mask)
{
    if (memo[bit_mask] > -0.5) // see that we initialize the array with -1 in the main function
        return memo[bit_mask];
    if (bit_mask == (1 << 2 * N) - 1) // all are matched
        return memo[bit_mask] = 0;
}