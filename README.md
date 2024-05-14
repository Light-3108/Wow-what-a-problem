Problem: https://atcoder.jp/contests/abc202/tasks/abc202_d<be>
Among the strings of length <be>
A+B containing <be>
A occurrences of a and <be>
B occurrences of b, find the string that comes <be>
K-th in the lexicographical order<be>
1≤A,B≤30 <be>

Seemingly an easy problem but not that easy<be>
upon some observations, we can easily conclude that this problem can be hard with greedy algorithm<be>
Hence a better approach would be a dynamic programming<be>

let dp[i][j] = no.of diff string that can be formed by i's a and j's b.<be>
this is the same as finding the no. of path from (0,0) to i,j if we can go right and up only<be>



let S(i,j,k) gives kth lexographically smallest string if there are i's a and j's b. <be>
if i = 0<be>
   ans = j's b<be>
if j = 0<be>
   ans = i's a<be>

if dp[i-1][j] >= k ans = 'a' + S(i-1,j,k)<be>
if dp[i-1][j] < k  ans = 'b' + S(i,j-1,k - dp[i-1][j])<be>


Here idea of the formation of string is. if there are more no.of string which starts with a than k. then first char of the ans is sure 'a'

