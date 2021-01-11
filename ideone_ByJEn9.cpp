/*         A. Choose Two Numbers
         time limit per test1 second
      memory limit per test256 megabytes
            inputstandard input
            outputstandard output

You are given an array A, consisting of n positive integers a1,a2,…,an, and an array B, consisting of m positive integers b1,b2,…,bm.

Choose some element a of A and some element b of B such that a+b doesn't belong to A and doesn't belong to B.

For example, if A=[2,1,7] and B=[1,3,4], we can choose 1 from A and 4 from B, as number 5=1+4 doesn't belong to A and doesn't belong to B. However, we can't choose 2 from A and 1 from B, as 3=2+1 belongs to B.

It can be shown that such a pair exists. If there are multiple answers, print any.

Choose and print any such two numbers.

Input
The first line contains one integer n (1≤n≤100) — the number of elements of A.

The second line contains n integers a1,a2,…,an (1≤ai≤200) — the elements of A.

The third line contains one integer m (1≤m≤100) — the number of elements of B.

The fourth line contains m different integers b1,b2,…,bm (1≤bi≤200) — the elements of B.

It can be shown that the answer always exists.

Output
Output two numbers a and b such that a belongs to A, b belongs to B, but a+b doesn't belong to nor A neither B.

If there are multiple answers, print any.

Examples
inputCopy
1
20
2
10 20
outputCopy
20 20
inputCopy
3
3 2 2
5
1 5 7 7 9
outputCopy
3 1
inputCopy
4
1 3 5 7
4
7 5 3 1
outputCopy
1 1
Note
In the first example, we can choose 20 from array [20] and 20 from array [10,20]. Number 40=20+20 doesn't belong to any of those arrays. However, it is possible to choose 10 from the second array too.

In the second example, we can choose 3 from array [3,2,2] and 1 from array [1,5,7,7,9]. Number 4=3+1 doesn't belong to any of those arrays.

In the third example, we can choose 1 from array [1,3,5,7] and 1 from array [7,5,3,1]. Number 2=1+1 doesn't belong to any of those arrays. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n,greater<int>());
    cin>>m;int b[m];
    for(int i=0;i<m;i++)
      cin>>b[i];
    sort(b,b+m,greater<int>());
    cout<<a[0]<<" "<<b[0];
	return 0;
}