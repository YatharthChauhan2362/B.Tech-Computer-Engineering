#  Code By 20DCE019 - Yatharth Chauhan

# Optimal Adjacent Removal

# Initially, Chef has a string S that contains only lowercase alphabets. In one operation Chef can choose two adjacent same characters (if possible) and remove those two characters from the string S and its length will be reduced by two. Now Chef wants to perform this operation in a way such that the final string length should be minimum (possibly empty). Help Chef to find the minimum possible length of the final string if Chef performs the operations optimally.

# Input:
# The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
# The first and only line of each test case contains a single string S.

# Output
# For each test case, print a single line containing the answer.

# Constraints
# 1≤T≤10
# 1≤|S|≤105
# S contains only lowercase alphabets.

# Example Input
# 4
# azyyza
# abacaba
# ppq
# pqrttyyr

# Example Output
# 0
# 7
# 1
# 2

# Explanation
# Example case 1: First remove 'y' and 'y', then 'z' and 'z' and finally 'a' and 'a'. The final string is an empty string.

# Example case 2: Chef can't remove any characters.

# Example case 3: The only adjacent pair that can be removed is 'p' and 'p'.

# Example case 4: One of the possible ways is first to remove 'y' and 'y', then 't' and 't' and finally 'r' and 'r'. The final string is "pq".


class Duplicates(object):
    def removeDuplicates(self, S):
        k = []
        i = 0
        while i < len(S):
            if len(k) != 0 and k[-1] == S[i]:
                i += 1
                k.pop(-1)
            else:
                k.append(S[i])
                i += 1
        return len("".join(i for i in k))


t = int(input())
for i in range(t):
    s = input()
    ob = Duplicates()
    print(ob.removeDuplicates(s))
