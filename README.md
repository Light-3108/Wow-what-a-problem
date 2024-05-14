Problem: https://atcoder.jp/contests/abc202/tasks/abc202_d<be>
Among the strings of length <br>
A+B containing <br>
A occurrences of a and <br>

B occurrences of b, find the string that comes <br>
K-th in the lexicographical order<br>
1≤A,B≤30 <br>

Seemingly an easy problem but not that easy<br>
upon some observations, we can easily conclude that this problem can be hard with greedy algorithm<br>
Hence a better approach would be a dynamic programming<br>

let dp[i][j] = no.of diff string that can be formed by i's a and j's b.<br>
this is the same as finding the no. of path from (0,0) to i,j if we can go right and up only<br>



let S(i,j,k) gives kth lexographically smallest string if there are i's a and j's b. <br>
if i = 0<be>
   ans = j's b<be>
if j = 0<be>
   ans = i's a<be>

if dp[i-1][j] >= k ans = 'a' + S(i-1,j,k)<br>
if dp[i-1][j] < k  ans = 'b' + S(i,j-1,k - dp[i-1][j])<br>


Here idea of the formation of string is. if there are more no.of string which starts with a than k. then first char of the ans is sure 'a'

