#include <bits/stdc++.h>

using namespace std;

int isvowel(char ch)
{
    char vowel[6] = "aeiou";
    for (int j = 0; vowel[j]; j++)
        if (vowel[j] == ch)
            return 1;
    return 0;
}