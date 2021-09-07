# _**money_change**_

## **Function 1: get_change**

* level: **Beginner**
* implementation: **naive solution**
* idea : **using variables and modulus operator** 

>### Problem
    The goal in this problem is to find the minimum number of coins needed to change the input value
(an integer) into coins with denominations 1, 5, and 10.

>### Algorithm
    - make the user enter a single integer number m
    - make a variable called n10 to store the number of tens in m
    - make a variable called n5 to store the number of fives in m after caluclating the number of tens
    - make a variable called n to store the number of ones in m after calculating the number of tens and fives
    - return n = n + n5 + n10

----