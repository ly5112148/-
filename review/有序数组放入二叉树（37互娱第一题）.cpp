#include <bits/stdc++.h>
using namespace std;

struct TreeNode 
{
    int m_nValue;
    TreeNode *m_pLeft;
    TreeNode *m_pRight;
};

//把一个有序整数数组放到二叉树
void RecurCreateTree(int *p, int length, TreeNode *&pHead)
{
    if (length > 0)
    {
        pHead = new TreeNode;
        int mid = length/2;
        pHead->m_nValue = p[mid];
        pHead->m_pLeft = NULL;
        pHead->m_pRight = NULL;
        RecurCreateTree(p, mid, pHead->m_pLeft);
        RecurCreateTree(p + mid + 1, length - mid - 1, pHead->m_pRight);;
    }
    else
    {
        pHead = NULL;
    }

}

//中序递归遍历
void MidRecurTraversal(TreeNode* pHead)
{
    if (NULL != pHead)
    {
        MidRecurTraversal(pHead->m_pLeft);
        cout<<pHead->m_nValue<<"  ";
        MidRecurTraversal(pHead->m_pRight);
    }
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12};
    TreeNode *pHead = NULL;
    RecurCreateTree(arr, sizeof(arr)/sizeof(arr[0]), pHead);
    MidRecurTraversal(pHead);
    cout<<endl;
    return 0;
}
