# Bit Manipulation


**AtCoder abc213_a	Bitwise Exclusive Or**


The interesing fact about this problem is that 

`A^B = C`  means that `A^C = B` and `B^C = A` which are all the same .

Now why are they same ?

```
1010    <-- A
0010    <-- B
----
1000    <-- C


1010    <-- A
1000    <-- C
----
0010    <-- B
```

This is an property of XOR which can be used to solve this problem.

**CodeForces 1421A	XORwice**

So the problem can be transformed in the following way that we need to minimize the value of `(a^ x) + (b^x)` . So in order to do that we mus turn off as much bit as possible.

In order to do that we must find out which bit are commonly set betwee `a b` the we can turn them of .

So how can we find out the common set bit of each of them ? 

It comes or raises solve of we need an operation where only if two bit are on then the result will be on .So And operator does the job

`x = a & b`

in this way are certain to find out the optimal value of x that can be used to minimize the value of `(a^ x) + (b^x)` .

**CodeForces 467B	Fedor and New Game**

The first basic implementation of the problem is for each of the friend I will count the number of differences and check that . It can be done byb checking for each bit if it is different or not . If it is different then we can increase the count by one .

In here the time complexity will be `O(n*20)` but can we make this any easier ?

Just think what do we need actually number of different bits of a friend and fred . So only for `1, 0` and `0,1` combination we want `1` which will mean that there is a difference in this bit. 

We can simply do this by doing XOR of friend and fred and find out the popcount . Which is constant time optimization of the problem.

**CodeForces 550B	Preparing Olympiad**

So at first we have to generate every possibble combination of the problem so how many combnation of the problem there can be ? 

`2^n` number of combnation as we are just dealing with whether to take a problem or not . So this can be done using the bitmasking and every mask should have two bit set . and for every valid mask we have to again check if the sum of the problem is within the range or not and other constraints are met or not . So the time complexity will  be 

`n * 2^n` so at most it will be `15 * 2^15` which is well within the time limit .

**CodeForces 1097B	Petr and a Combination Lock**

Reading the problem we can say that we can move the clock in two way either in the clockwise or in the anti-clckwise rotation . So we can simply generate all the possible combination of the clock and check if any of them goes to the target after exectly `n` moves . So the time complexity will be `n * 2^n` which is well within the time limit .

So each mask of n lentgh will represent a combination of the rotation of the clock and how we aim complete the n rotation

**CodeForces 1527A	And Then There Were K**

The first observation is that K<=N this condition must be fullfilled . Than we can think about that what is maximum value less than K . Why dont we simply print (1<< log2(n)). The problem with that is we can have a case where the MSB is alwys set that means we have to turn off the MSB and after that we know that each bit will turn off at some point of time . So we can simply observe from this fact that 


`int)pow(2,(int)log2(n)) -1` will  do the job for any case . And this can't be any bigger as in that case there is a chance that the MSB will be set and we have to turn it off .

**CodeForces 1559A	Mocha and Math**


As we can see that if we do and operation any number of times between a certain range . So if a bit is off in any number that can basically turn off all the numbers same bit . 

010101 , 01110 , 01111 , 01100

So if the first bit of the first number is off than it will be able to turn off all the first bit of all numbers .

What can we do with this information ?

So we as we are assured that if a bit is off in any number it will be off in all the number . So if bit is on in every bit we can't turn that off right ?

So in this problem only the bits that are turned on in each number will only contribute in the final answer and other bits will not be able to contribute in the final answer as they can be turned off eventually.

**CodeForces 1514B	AND 0, Sum Big**

So if tall the bits are turned on we will not have a bitwise and 0 . So to have that we can have only one bit turned off that will make the bitwise and 0 .And turning off any more bit will decrease the sum which we dont want so we can make atmost one bit off and the rest of the bit on . so in how many way we can do this ? N ways and as there area K bits we can find the answer by simply calculating `n^k` .

so for array length 10 

`1 1 1 1 1 1 1 1 1 0` <--   first bit

`1 1 1 1 1 1 1 1 0 1` <--   first bit

`1 1 1 1 1 1 1 0 1 1` <--   first bit

So this is the optimal way to do this . and there are k bit this is for just a single bit 

**CodeForces 1420B	Rock and Lever**

So as the condition states that 

`i<j and ai & aj≥ ai⊕aj`

so let's check for which condition this will get satisfied 

`1 & 1 >= 1 ^ 1` <-- this is  true
`0 & 0 >= 0 ^ 0` <-- this is  true
`0 & 1 >= 0 ^ 1` <-- this is  false
`1 & 0 >= 1 ^ 0` <-- this is  false

Is this obeservation enough to solve the problem ?

No , this is not . As we can see that only in the case of 1,1 we are certain that the condition will be satisfied . But what about the other cases ? 

What about the case of `0,0` ? Will it satisfy the condition ? It seems it will not . 

Only if the msb of the both ai and aj are same only then it can be a valid pair .

So for each number we have to calculate how many aj are there with the same MSb . Which we can do by simply keeping track of all the numbebrs MSB .

The problem can be further observed for the case of `0 , 0`

So putting this in simple term , the only aj that are valid are that have the same MSB as ai . Because in all other cases if aj msb is greatet than ai msb then the bitwise and will be less than the bitwise xor .


**CodeForces 1805A	We Need the Zero**

**CodeChef CHNGOR	Chang and Bitwise OR**

**CodeForces 1601A	Array Elimination**

**CodeForces 1516B	AGAGA XOOORRR**

**CodeChef CHEFQUE	Chef and Queries**

**CodeForces 276D	Little Girl and Maximum XOR**

**CodeForces 1045I	Palindrome Pairs**

**CodeChef ODTPIC	Odd Topic**

**CodeForces 1614C	Divan and bitwise operations**

**CodeChef PPXOR	Polo the Penguin and the XOR**

**Toph easy-peasy-subset-sum	Easy Peasy Subset Sum**

**HackerRank count-triplets-1	Count Triplets**

**SPOJ TRICOUNT	Counting Triangles**

**Baekjoon 23992	Math Encoder**

**Gym 104289B	OR-bitax**

**Gym 104333A	Convolution XOR SUM**

**CodeForces 484A	Bits**

**CodeForces 1504B	Flip the Bits**

**CodeForces 1763A	Absolute Maximization**

**CodeForces 1722G	Even-Odd XOR**

**CodeForces 1635A	Min Or Sum**

**CodeChef RIVALRY	Expected Value**

**Gym 101021A	Guess the Number**

**CodeForces 1486C1	Guessing the Greatest (easy version)**

**CodeForces 679A	Bear and Prime 100**

**CodeForces 1807E	Interview**

**Toph a-new-tough-game	A New Tough Game**

**CodeForces 1879D	Sum of XOR Functions**

