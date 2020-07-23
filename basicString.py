import re
from collections import Counter


def firstBlock():
    while True:
        line = input()
        if line == '.......':
            break
        yield line


oneline = ' '.join(firstBlock()).replace('- ', '').lower()
digits, alphas, vowels = (sum(pred(c)for c in oneline)
    for pred
    in (lambda c: c.isdigit(),)
