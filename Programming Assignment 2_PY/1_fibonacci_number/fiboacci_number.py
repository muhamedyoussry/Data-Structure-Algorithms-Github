n = int(input("Enter fibonacci n: "))

result = 0


def FibonacciNaive(n):
    if n <= 1:
        return n
    else:
        return (FibonacciNaive(n-1) + FibonacciNaive(n-2))


def FibonacciFast(n):
    FibonacciArray = [0] * (n+1)
    FibonacciArray[0] = 0
    FibonacciArray[1] = 1

    for i in range(2, n+1):
        FibonacciArray[i] = FibonacciArray[i-1] + FibonacciArray[i-2]
    return FibonacciArray[n]


if __name__ == "__main__":
    print("Your result for ", n, "Fibonacci numbers = ", FibonacciFast(n))