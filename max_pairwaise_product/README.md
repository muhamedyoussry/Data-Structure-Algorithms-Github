# Maximum pairwise product 1 
* level: **Beginner**
* implementation: **naive solution**


### Problem
 get the maximum pairwise prduct from a vector

### Algorithm
 - take a vector length from the user
 - take a vector elemnts from the user using loop
 - make two nested loops to pass over all the elements of the vector
 - ask if the currnet pairwise product bigger than the previous pairwise product
 - return the biggest output 

### Go depper

#### waht is vector ? 
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. [Reference:GeeksforGeeks](https://www.geeksforgeeks.org/vector-in-cpp-stl/)

#### Time Complexity (Big-O) ?
 n^2 

### Expected errors

 - do not forget to include <vector>
 - in the seconed for loop do not forget to make that j = i+1 to force the algorithm to pick pairwise product and achieve the desired
