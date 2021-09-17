# _**Least Common Multiple**_

## **Function 1: lcm_naive**

* level: **Beginner**
* implementation: **naive solution**
* idea : **usign loop with the step of 1** 

>### Problem
    Given two integers 𝑎 and 𝑏, find their least common multiple.
    The least common multiple of two positive integers 𝑎 and 𝑏 is the least positive
integer 𝑚 that is divisible by both 𝑎 and 𝑏.

>### Algorithm
    - make the user enter the number a and b that he/she wants to get the least common multiple
    - loop from the maximum number of a and b to a*b (because a*b is for sure satisfy the common multiple) by step 1
        - while looping ask if the current number is a common multiple ( if this case is true return the current number)
    - if the loops exit before is return any number, so return the a*b as the least common multiple


---
## **Function 2: lcm_faster**

* level: **Beginner**
* implementation: **faster solution**
* idea : **using loop but with the step equal to the maximum number from a and b**

>### Problem
     Given two integers 𝑎 and 𝑏, find their least common multiple in a faster enhanced algorithm.

>### Algorithm
    - make the user enter the number a and b that he/she wants to get the least common multiple
    - loop from the maximum number of a and b to a*b (because a*b is for sure satisfy the common multiple) by step equal to the maximum number (example: for a = 12 and b = 5 .. step increases by 12 in the loop)
        - while looping ask if the current number is a common multiple ( if this case is true return the current number)
    - if the loops exit before is return any number, so return the a*b as the least common multiple

---