x = int(input("Enter the first number: "))
y = int(input("Enter the second number: "))


def GCD_Naive(a, b):
    best = 0
    smallest = min(a, b)
    for i in range(1, smallest+1):
        if (a % i == 0 and b % i == 0):
            best = i
    return best


def GCD_Eculidian(a, b):
    smallest = min(a, b)
    largest = max(a, b)
    if smallest == 0:
        return largest
    divided = largest % smallest
    return GCD_Eculidian(smallest, divided)


if __name__ == "__main__":
    print("You GCD between", x, "and", y, "is", GCD_Naive(x, y))
    print("You GCD between", x, "and", y, "is", GCD_Eculidian(x, y))
