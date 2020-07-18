#include <bits/stdc++.h>
using namespace std;

typedef pair<int, string> is;

void ArabicToRoman(int arabic)
{
    vector<is> convert({{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}

    });

    for (auto &[value, roman] : convert) // Going from large to small
        while (arabic >= value)
        {
            cout << roman;
            arabic -= value;
        }

    cout << "\n";
}

int value(char letter)
{
    switch (letter)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
    return 0;
}

void RomanToArabic(string roman)
{
    int answer = 0;
    for (int i = 0; roman[i]; ++i)
        if (roman[i + 1] && (value(roman[i]) < value(roman[i + 1])))
        {                                                    // Check next char first
            answer += value(roman[i + 1]) - value(roman[i]); // by defintion
            ++i;                                             // skip this char
        }
        else
            ans += value(roman[i]);
    cout << ans << "\n";
}