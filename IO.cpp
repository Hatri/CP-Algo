#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("IO_in1.txt", "r", stdin);
    int Testcases;
    scanf("%d", &Testcases); // Number of test cases
    while (Testcases--)
    { // Repeat until 0
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}