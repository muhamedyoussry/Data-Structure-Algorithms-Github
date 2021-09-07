# _**Fibonacci last digit**_

## **Function 1: get_fibonacci_last_digit_naive**

* level: **Beginner**
* implementation: using **fast fibonacci function**
* idea : **using arrays & modulus operator** 

>### Problem
    Your goal in this problem is to find the last digit of 𝑛-th Fibonacci number

>### Algorithm
    - make the user enter a number
    - creat an empty array with the size of n numbers
    - intialize array[0] = 0 and array[1] = 1
    - make a loop from 2 to n 
        - start to define array[i] = (array[i-1] +
        [i-2] ) mod 10
    - return array[n] as the last digit from the last number of the array

>### Go depper

    Why using the modulus 10 ? 
    by usign the modulus of 10 you will garantee that nothing from the required data will be affected, also you will overcome the problem of getting too slow, because as 𝑖 grows the 𝑖th iteration of the loop computes the sum of longer and longer numbers.
