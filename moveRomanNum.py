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
