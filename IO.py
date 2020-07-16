import sys

inputs = iter(sys.stdin.readlines())
testCases = int(next(inputs))
for _ in range(testCases):
    print(sum(map(int, next(inputs).split())))
