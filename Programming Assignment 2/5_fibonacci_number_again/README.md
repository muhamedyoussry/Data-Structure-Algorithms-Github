# _**Fibonacci Numbers again**_

## **Function 2: get_fibonacci_huge_faster**

* level: **Intermediate**
* implementation: **faster solutionfor huge numebs**
* idea : **using pisano period** 

>### Problem
    your goal is to compute 𝐹𝑛 modulo 𝑚, where 𝑛 may be really huge: up to 1014. For such
values of 𝑛, an algorithm looping for 𝑛 iterations will not fit into one second for sure. Therefore we need to
avoid such a loop.

>### Algorithm
    - make the user enter a number n for fibonacci number targeted
    - make the user enter a number m for modulu numbe targeted
    - perform pisano period function to find the number where the period start again ( period always starts with 01)
      - assign a = 0 , b = 1 , c = a+b
      - looping from 0 to m*m numbers
        - for each loop we will perform naive fibonacii
          - c = (a + b) % m; a = b; b = c;
          - if we found that the period start (if a == 0 && b == 1 ) we will return the number of the iteration 
    - perofrm the fibonacii number function
      - get the new n ( n = n % pisano_period_number)
      - make fast solution for fibonacii number using arrays or vectors

>### Go depper

    - what is pisano period  ? 
    To get an idea how to solve this problem without going through all 𝐹𝑖 for 𝑖 from 0 to 𝑛, let’s see what happens when 𝑚 is small — say, 𝑚 = 2 or 𝑚 = 3.

|    i     |   0   |   1   |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |  10   |  11   |  12   |  13   |  14   |  15   |
| :------: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
|    𝐹𝑖    |   0   |   1   |   1   |   2   |   3   |   5   |   8   |  13   |  21   |  34   |  55   |  89   |  144  |  233  |  377  |  610  |
| 𝐹𝑖 mod 2 |   0   |   1   |   1   |   0   |   1   |   1   |   0   |   1   |   1   |   0   |   1   |   1   |   0   |   1   |   1   |   0   |
| 𝐹𝑖 mod 3 |   0   |   1   |   1   |   2   |   0   |   2   |   2   |   1   |   0   |   1   |   1   |   2   |   0   |   2   |   2   |   1   |


    Take a detailed look at this table. Do you see? Both these sequences are periodic! For 𝑚 = 2, the period
    is 011 and has length 3, while for 𝑚 = 3 the period is 01120221 and has length 8. Therefore, to compute,
    say, 𝐹2015 mod 3 we just need to find the remainder of 2015 when divided by 8. Since 2015 = 251 · 8 + 7, we
    conclude that 𝐹2015 mod 3 = 𝐹7 mod 3 = 1.
    
    This is true in general: for any integer 𝑚 ≥ 2, the sequence 𝐹𝑛 mod 𝑚 is periodic. The period always
    starts with 01 and is known as Pisano period.
---