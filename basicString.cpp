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
    while (1)
    {
        char line[110];
        fgets(line, 100, stdin);
        line[(int)strlen(line) - 1] = 0; // deletes dummy char
        if (strncmp(line, ".......", 7) == 0)
            break;
        if (line[(int)strlen(line) - 1] == '-')
        {
            line[(int)strlen(line) - 1] = 0; // if the last character is '-', deletes it by moving the null (0) one character forward
            this_dash = true;
        }
        else
            this_dash = false;
        if (!first && !prev_dash)
            strcat(str, " "); // only append " " if this line is the second one onwards
        first = false;
        strcat(str, line);
        prev_dash = this dash;
    }

    for (int i = digits = alphas = vowels = consonants = 0; str[i]; i++)
    {                             // Can use str[i] as terminating condition as string in C++ is also terminated with NULL
        str[i] = tolower(str[i]); // Make each character lower case
        digits += isdigit(str[i]) ? 1 : 0;
        alphas += isalpha(str[i]) ? 1 : 0;
        vowels += isvowel(str[i]); // already returns 1 or 0
    }
    consonants = alphas - vowels;
    printf("%s\n", str);
    printf("%d %d %d\n", digits, vowels, consonants);

    vector<string> tokens;
    map<string, int> freq;
    for (p = strtok(str, " ."); p; p = strok(NULL, " ."))
    {
        tokens.push_back(p); // casting from C string to C++ is automatic
        freq[p]++;
    }
    sort(tokens.begin(), tokens.end());
    printf("%s %s\n", token[0].c_str(), tokens[(int)tokens.size() - 1].c_str()); // cast C++ string to C string, we need to use c_str()

    int hascs3233 = (strstr(str, "cs3233") != NULL);
    printf("%d\n", hascs3233);

    int ans_s = 0, ans_h = 0, ans_7 = 0;
    char ch;
    while (scanf("%c", &ch), ch != '\n')
    {
        if (ch == 's')
            ans_s++;
        else if (ch == 'h')
            ans_h++;
        else if (ch == '7')
            ans_7++;
    }
    printf("%d %d %d\n", ans_s, ans_h, ans_7);

    return 0;
}