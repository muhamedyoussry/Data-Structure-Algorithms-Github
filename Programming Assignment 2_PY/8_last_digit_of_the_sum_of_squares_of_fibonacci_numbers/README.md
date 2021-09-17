# _**Last digit of the sum of squares of fibonacci numbers**_

## **Function 1: fibonacci_faster_square_sum**

* level: **Intermediate**
* implementation: **faster solution**
* idea : **using pisano period** 

>### Problem
    Compute the last digit of the sum of squares of fibonacci numbers

>### Algorithm
    - make the user enter a number n for fibonacci number targeted
    - we will get the pisano period for the modulous of 10 using get_pisano_period function
    - we will get the last digit sum of the pisano period for the modulous of 10 using pisano_sum function
    - get the sum on 2 phases
      1. sum from the numbers of pisano period exists inside the n number (final_sum = pisano_sum(pi) * number_of_pisano_sums) 
      2. sum from the remainder of n by looping inside an array
    - make the final_sum = final_sum + (F[i] * F[i])
    - return the final_sum % 10

----