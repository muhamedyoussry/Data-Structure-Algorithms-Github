# _**Maximum pairwise product**_

## **Function 1: MaxPairwiseProduct**

* level: **Beginner**
* implementation: **naive solution**
* idea : **two nested for loops** 

>### Problem
 get the maximum pairwise prduct from a vector

>### Algorithm
 - take a vector length from the user
 - take a vector elemnts from the user using loop
 - make two nested loops to pass over all the elements of the vector
 - ask if the currnet pairwise product bigger than the previous pairwise product
 - return the biggest output 

>### FAQ

#### what is vector ? 
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. [Reference:GeeksforGeeks](https://www.geeksforgeeks.org/vector-in-cpp-stl/)

#### why using 'long long' instead of int ?
To be able to deal with the large numbers that the user will enter 

>#### Time Complexity (Big-O) ?
n^{2} 

>#### Expected errors

 - do not forget to include <vector>
 - in the seconed for loop do not forget to make that j = i+1 to force the algorithm to pick pairwise product and achieve the desired

---
## **Function 2: MaxPairwiseProductFast**

* level: **Beginner**
* implementation: **enhanced solution**
* idea : **two seperate for loops** 

>### objective
Enhance the algorithm time complexity to  n+n instead of n-square

>### Algorithm
 - take a vector length from the user
 - take a vector elemnts from the user using loop
 - we can search for the biggest two numbers and multiply them to get our maximum pairwise product
    - make one loop to search for the maximum number (vector[maxIndex1])
    - make another not nested loop to search for the next maximum number (vector[maxIndex2])
 - return the multiplyed two maximum numbers

>#### Time Complexity (Big-O) ?
 n+n

 >#### Expected errors

 - make sure that you start your variable initializatin with the right numbers; change them and see explore what happen 
   - maxIndex1 = 0 , maxIndex2 = lengthOfVector - 1

---