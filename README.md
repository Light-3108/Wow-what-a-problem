Problem: https://atcoder.jp/contests/abc202/tasks/abc202_d
Among the strings of length 
A+B containing 
A occurrences of a and 
B occurrences of b, find the string that comes 
K-th in the lexicographical order
1≤A,B≤30

Seemingly an easy problem but not that easy
upon some observations, we can easily conclude that this problem can be hard with greedy algorithm
Hence a better approach would be a dynamic programming

let dp[i][j] = no.of diff string that can be formed by i's a and j's b.
this is the same as finding the no. of path from (0,0) to i,j if we can go right and up only



let S(i,j,k) gives kth lexographically smallest string if there are i's a and j's b. 
if i = 0
   ans = j's b
if j = 0
   ans = i's a

if dp[i-1][j] >= k ans = 'a' + S(i-1,j,k)
if dp[i-1][j] < k  ans = 'b' + S(i,j-1,k - dp[i-1][j])


Here idea of the formation of string is. if there are more no.of string which starts with a than k. then first char of the ans is sure 'a'

