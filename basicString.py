import re
from collections import Counter


def firstBlock():
    while True:
        line = input()
        if line == '.......':
            break
        yield line
