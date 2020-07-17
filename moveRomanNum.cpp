#include <bits/stdc++.h>
using namespace std;

typedef pair<int, string> is;

void ArabicToRoman(int answer)
{
    vector<is> convert({{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}

    });

    for (auto &[value, roman] : convert) // Going from large to small
        while (answer >= value)
        {
            cout << roman;
            answer -= value;
        }

    cout << "\n";
}