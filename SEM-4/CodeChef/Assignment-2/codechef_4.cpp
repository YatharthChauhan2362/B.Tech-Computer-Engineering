// Code By 20DCE019 - Yatharth Chauhan

/*
Linked List 1

Complete the function in the code snippet, returning the value of Nth node from the end of a singly linked list A, of length L. The function takes two arguments, head of the linked list and an integer N, and you are expected to return the answer in the form of an integer.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of two lines of input.
First line contains two space separated integers L,N, length of the linked list and the index of the node starting from end whose value is to be determined.
Second line contains A1,A2,…AL, value of the linked list nodes starting from the head.

Output:
The function you complete should return the required answer.

Constraints
1≤T≤10
1≤N≤L≤105
1≤Ai≤109

Sample Input:
2
3 3
1 2 3
3 1
3 2 1

Sample Output:
1
1
*/

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int getNthNodeFromEnd(struct Node *head, int n)
{
    int length = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    temp = head;

    for (int i = 1; i < length - n + 1; i++)
        temp = temp->next;

    return temp->data;
}