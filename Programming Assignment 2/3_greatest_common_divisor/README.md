# _**Greatest Common Divisor**_

## **Function 1: naiveGCD**

* level: **Beginner**
* implementation: **naive solution**
* idea : **loop** 

>### Problem
 get the greatest common divisor for small and large numbers, example: GDC(8,4) = 4 , GDC(10,4) = 2

>### Algorithm
 - make the user enter the two numbers that he/she want to get their greatest common divisor (GDC)
 - loop from i = 1 to i = the minimum number of the two inputs
    - if i accept the devision on both numbes --> make i is the greatest common divisor (GCD)
- and then return the result after the loop which will extract to us the greatest common divisor


---
## **Function 2: fasterGCD**

* level: **Beginner**
* implementation: **faster solution**
* idea : **using recursive with Euclidean Algorithm** 

>### Problem
get the greatest common divisor for small and large numbers in a faster enhanced way, example: GDC(8,4) = 4 , GDC(10,4) = 2

>### Algorithm
- make the user enter the two numbers that he/she want to get their greatest common divisor (GDC)
- recursive function based on Euclidean algorithm --> GCD(a,b) = GCD(a',b) = GCD(a,b') where a' or b is a or b prime that means that a' = a%b , b' = b%a
    - if prime (a%b) == 0 then the GCD = prime 
    - else we will do the fasterGCD again (recursivly) between the prime and b --> GCD(prime,b) and though till we reach our GCD

---