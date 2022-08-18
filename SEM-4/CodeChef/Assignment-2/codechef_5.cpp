// Code By 20DCE019 - Yatharth Chauhan

/*
Linked List 2

You are given 2 sorted linked lists. Merge the 2 lists such that the final result is also sorted and return the head of the merged linked list. The function takes two arguments, heads of the 2 linked lists, and you are expected to return the head of merged sorted linked list.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of three lines of input.
First line contains two space separated integers N,M, lengths of the 2 linked lists.
Second line contains L11,L12,…L1N, value of the linked list nodes starting from the head for the first linked list.
Third line contains L21,L22,…L2M, value of the linked list nodes starting from the head for the second linked list.

Output:
The function you complete should return the required answer.

Constraints
1≤T≤10
1≤N,M≤5∗104
1≤L1i,L2i≤109

Sample Input:
2
3 3
1 2 3
1 2 3
3 1
2 2 3
1

Sample Output:
1 1 2 2 3 3
1 2 2 3
*/

struct Node
{
    int data;
    struct Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *merge(Node *head1, Node *head2)
{

    Node *result = NULL;

    if (head1 == NULL)
        return (head2);
    else if (head2 == NULL)
        return (head1);

    if (head1->data <= head2->data)
    {
        result = head1;
        result->next = merge(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = merge(head1, head2->next);
    }
    return (result);
}
