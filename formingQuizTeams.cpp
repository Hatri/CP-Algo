#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

int N;
double dist[20][20], memo[1 << 16]; // 1 << 16 is 2^16, recall that max N = 8