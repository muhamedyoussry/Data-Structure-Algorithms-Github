# _**Fibonacci numbers**_

## **Function 1: naiveFibonacci**

* level: **Beginner**
* implementation: **naive solution**
* idea : **recursive function** 

>### Problem
    get the fibonacci function result

>### Algorithm
    - make the user enter a number
    - if n = 0 return the result 0 
    - if n = 1 return the result 1
    - if n > 1 return the result naiveFibonacci(n-1) + naiveFibonacci(n-2) ( recursive function )

>### Go depper

    - what is recursive function ? 
    A recursive function is a function that calls itself during its execution. This enables the function to repeat itself several times, outputting the result and the end of each iteration.


---
## **Function 2: fastFibonacci**

* level: **Beginner**
* implementation: **faster solution**
* idea : **using arrays** 

>### Problem
    get the fibonacci function result faster

>### Algorithm
    - make the user enter a number
    - creat an empty array with the size of n numbers
    - intialize array[0] = 0 and array[1] = 1
    - make a loop from 2 to n 
        - start to define array[i] = array[i-1] + array[i-2]
    - return array[n] as the last number of the array  

>### Go depper

    - why using unsigned long long ? 
    To be able to store highly long and big integer positive number

| Data type | Size | Range |
|:---------------:| :---------: | :---------: |
| unsigned long long | 8 bytes | 0 to + 18,446,744,073,709,551,615 |
| long long | 8 bytes | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |

---