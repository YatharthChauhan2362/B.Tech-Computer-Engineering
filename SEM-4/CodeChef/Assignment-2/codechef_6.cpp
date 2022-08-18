// Code By 20DCE019 - Yatharth Chauhan

/*
Maximum Overlap

There are n classes scheduled in a school.

The start and end times of each class will be among t1,t2,…tm (note that ti's are in strictly increasing order).

You are given the start and end times in the form of pairs of integers (l,r) which denotes a class that starts at time tl and ends after tr.

Note : This means that at times t=tl,tl+1…tr, the class is happening and at time t=tr+1 the class is not happening.

What is the minimum number of classrooms required so that all the classes can be scheduled?

Note that the values of t1,t2,…tm are not given because any correct choice of t1,t2,…tm will give the same answer.

Input
The first line contains a single integer T, the number of testcases. This is followed by the description of the testcases
The first line of each testcase contains a single integer n, the number of classes scheduled.
The second line of each testcase contains an integer m, the number of distinct times given.
The next n lines each contain a pair of space separated integers l,r denoting that the class that starts at time tl and ends at tr.

Output
For each test case print in a single line, the number of classrooms needed, i.e. the maximum number of classes that happen at the same time.

Constraints
1≤T≤105
1≤n≤105
Sum of n over all test cases does not exceed 105
m≤2n
1≤l≤r≤m

Sample Input 1
1
3
3
1 2
2 3
1 3

Sample Output 1
3

Explanation 1
Suppose the classes are numbered 1,2,3 in the given order.

At t=t1, the classes that are happening are {1,3}
At t=t2, the classes that are happening are {1,2,3}
At t=t3, the classes that are happening are {2,3}
Hence there are a maximum of 3 classes happening at the same time, so we will need at least 3 classrooms to accommodate all of them.


Sample Input 2
2
4
5
1 2
2 3
3 4
4 5
4
5
1 2
2 4
3 4
2 5

Sample Output 2
2
3

Explanation 2
There are two testcases given in this file,


Let's number the classes in the first testcase case as 1,2,3,4 numbered in the order they are given in the input

At t=t1, the classes that are happening are {1}
At t=t2, the classes that are happening are {1,2}
At t=t3, the classes that are happening are {2,3}
At t=t4, the classes that are happening are {2,4}
At t=t5, the classes that are happening are {5}
We can see that at any instant there are a maximum of 2 classes, and hence the answer is 2 for this testcase.

Let's number the classes in the second testcase case as 1,2,3,4 numbered in the order they are given in the input

At t=t1, the classes that are happening are {1}
At t=t2, the classes that are happening are {1,2,4}
At t=t3, the classes that are happening are {2,3,4}
At t=t4, the classes that are happening are {2,3,4}
At t=t5, the classes that are happening are {4}

We can see that at any instant no more than 3 classes happen at the same time, and hence the answer is 3 for this testcase.
*/

#include <bits/stdc++.h>
using namespace std;

void ID_20DCE019()
{
    int n, m;
    cin >> n >> m;

    int start_[n], end_[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_[i];
        cin >> end_[i];
    }

    int count[m] = {0}, max = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        count[start_[i] - 1]++;
        if (end_[i] < m)
        {
            count[end_[i]]--;
        }
    }

    for (int i = 0; i < m; i++)
    {
        sum = sum + count[i];
        if (max < sum)
        {
            max = sum;
        }
    }
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ID_20DCE019();
    }

    return 0;
}