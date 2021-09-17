arr = [int(x) for x in input().split()]


def maxPairwiseProductNaive(array):
    result = 0
    for i in range(len(array)):
        for j in range(i+1, len(array)):
            if (array[i]*array[j] > result):
                result = array[i]*array[j]
    return result


def maxPairwiseProductFast(array):
    arr.sort(reverse=True)
    result = array[0]*array[1]
    return result


if __name__ == '__main__':
    print("result Naive = ", maxPairwiseProductNaive(arr))
    print("result = ", maxPairwiseProductFast(arr))
