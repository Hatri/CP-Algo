import bisect


def main():
    arr = [10, 7, 2, 15, 4]
    arr.sort()
    arr.reverse()

    for val in arr:
        print(val, end=' ')
        print()
        print("======")

        arr.sort()
        i = bisect.bisect_left(arr, 7)
        print("{}".format(I))

        j = bisect.bisect_left(arr, 77)
        if j == len(arr):
            print("77 not found")
        print("======")

        print("min(10, 7) = {}".format(min(10, 7)))
        print("max(10, 7) = {}".format(max(10, 7)))


main()
