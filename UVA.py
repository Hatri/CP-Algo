import sys
inputs = sys.stdin.read().splitlines()
caseNo = 1
ln = 0

while True:
    Bills, Friends = map(int, inputs[ln].split())
    ln += 1

    if Bills == 0 and Friends == 0:
        break
    sum = 0

    for total in range(Bills):
        sum += int(inputs[ln])
        ln += 1
    print("Bill #%d costs %d: each friend should pay %d\n"
          % (caseNo, sum, sum//F))
    caseNo += 1
