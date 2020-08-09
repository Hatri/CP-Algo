import sys
inputs = sys.stdin.read().splitlines()
caseNo = 1
ln = 0

while True:
    Bills, Friends = map(int, inputs[ln].split())
    ln += 1

    if Bills == 0 and Friends == 0:
        break
