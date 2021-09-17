n = int(input("Enter Fiboancci numbre: "))


def get_last_digit_of_fibonacci_number(n):
    FibonacciArrayLastDigit = [0] * (n+1)
    FibonacciArrayLastDigit[0] = 0
    FibonacciArrayLastDigit[1] = 1

    for i in range(2, n+1):
        FibonacciArrayLastDigit[i] = (
            FibonacciArrayLastDigit[i-1] + FibonacciArrayLastDigit[i-2]) % 10

    return FibonacciArrayLastDigit[n]


if __name__ == "__main__":
    print ("The last difit of your Fiboancci number" , n , " = " , get_last_digit_of_fibonacci_number(n))