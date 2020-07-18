import Sys


def ArabicToRoman(Arabic):
    m = {1000: 'M', 900: 'CM', 500: 'D', 400: 'CD', 100: 'C', 90: 'XC',
         50: 'L', 40: 'XL', 10: 'X', 9: 'IX', 5: 'V', 4: 'IV', 1: 'I'}
    Arabic = int(Arabic)
    for value, roman in m.items():
        while Arabic >= value:
            print(roman, end='')
            Arabic -= value
        print()


def RomanToArabic(Roman):
    m = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    value = 0
    for i in range(len(Roman)):
        if i+1 < len(Roman) and m[Roman[i]] < m[Roman[i+1]]:
            value += m[Roman[i+1]] - m[Roman[i]]
        elif i-1 >= 0 and m[Roman[i-1]] < m[Roman[i]]:
            continue
        else:
            value += m[Roman[i]]
        print(value)


def main():
    for s in sys.stdin:
        s = s.strip('\n')
        if s.isdigit():
            ArabicToRoman(s)
        else:
            RomanToArabic(s)


main()
