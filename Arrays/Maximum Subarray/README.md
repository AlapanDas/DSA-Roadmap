**MAXIMUM SUBARRAY PROBLEM**
You are given an array *A* of size *N* , you have to output the maximum sum *S* obtained from any contiguous subarray formed by the array
**Constrains:**
1. 2<=**N** <infinity
2. - infinity<**A^i**<infinity
3. - infinity< **S** <infinity

**Example 1:**
1. *arr*=[1,2,3,4]
     subarray possible=[1], [2], [3], [4], [1,2], [1,3], [1,4], [2,3], [2,4], [3,1], [3,2], [3,4], [1,2,3],....,[2,3,4]
     maximum sum=2+3+4 of the last array i.e. =9
     output=9
2. *arr*=[1,-3,5,7]
     output=12 i.e 5+7

**TRY ON YOUR OWN BEFORE SEEING THE SOLUTIONS**

**Solutions:**
1.Brute Force Method - **O(N^2)**
2.Kadane's Method - **O(N)**