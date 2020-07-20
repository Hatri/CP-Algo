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

int main()
{
    int pos, digits, alphas, vowels, consonants;
    char str[10010], *p;

    freopen("basic_string_in.txt", "r", stdin);

    strcpy(str, "");
    bool first = true;                         // technique to differentiate first line with the other lines
    bool prev_dash = false, this_dash = false; // to differentiate whether the previous line contains a dash or not
}