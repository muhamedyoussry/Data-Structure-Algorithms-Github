# _**maximum_value_of_the_loot**_

## **Function 1: get_optimal_value**

* level: **Beginner**
* implementation: **naive solution**
* idea : **using variables and modulus operator** 

>### Problem
    A thief finds much more loot than his bag can fit. Help him to find the most valuable combination
of items assuming that any fraction of a loot item can be put into his bag.

>### Task
    The goal of this code problem is to implement an algorithm for the fractional knapsack problem.

>### Algorithm
    - make the user enter a single integer number m
    - make a variable called n10 to store the number of tens in m
    - make a variable called n5 to store the number of fives in m after caluclating the number of tens
    - make a variable called n to store the number of ones in m after calculating the number of tens and fives
    - return n = n + n5 + n10

----