# Segmented Sieve

Segmented Sieve is used to find the prime numbers in a range [L,R] where R-L+1 <= 10^6 (1 million)

### TIME COMPLEXITY: O((R-L+1)*loglog(R-L+1))

### SPACE COMPLEXITY: O(sqrt(R-L+1))

The idea of segmented sieve is to divide the range [L,R] into sqrt(R-L+1) segments of size sqrt(R-L+1) each and then use simple sieve to find the prime numbers in all segments one by one.

### The algorithm of segmented sieve is given below:

1. Divide the range [L,R] into sqrt(R-L+1) segments of size sqrt(R-L+1) each.

2. Use simple sieve to find all primes upto sqrt(R-L+1) and store these primes in an array or vector say primes[].

3. For each segment [low, high], where low = L + i*sqrt(R-L+1) and high = L + (i+1)*sqrt(R-L+1) - 1, where i = 0, 1, 2, ..., sqrt(R-L+1) - 1, create a boolean array mark[high-low+1]. Initialize all entries of mark[] as true. For each prime p in primes[], mark its multiples in range [low, high] as false. For example, if p is 5 and L is 10, then mark[0] is false, mark[5] is false, mark[10] is false and so on.


4. Finally, traverse the boolean array mark[] and print all numbers which are true. In step 3, we marked all non-primes as false. Therefore, all unmarked numbers are primes.



# YARINS SIEVE

### TIME COMPLEXITY: O(nloglogn)

### SPACE COMPLEXITY: O(n)

The idea of Yarin's sieve is to find all primes upto n using only O(n) memory.

### The algorithm of Yarin's sieve is given below:

1. Create an array mark[n+1] and initialize all entries of mark[] as false. mark[i] is true if i is composite and false if i is prime.

2. Create an array primes[] of size n and initialize all entries of primes[] as 0. primes[i] is 1 if i is prime and 0 if i is composite.

3. For each prime p in the range [2, n], mark all multiples of p as composite. To mark all multiples of p, traverse all multiples of p from p*2 to n in steps of p, and mark them as composite. For example, if p is 5, then mark[10] is false, mark[15] is false, mark[20] is false and so on.

4. Finally, traverse the array mark[] and print all numbers which are true. In step 3, we marked all non-primes as false. Therefore, all unmarked numbers are primes.

5. The time complexity of the above algorithm is O(nloglogn) and space complexity is O(n).