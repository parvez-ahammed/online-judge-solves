
#include <bits/stdc++.h>
using namespace std;

#define INT_SIZE 32

struct tn
{
    int value;
    tn *arr[2];
};

tn *newNode()
{
    tn *temp = new tn;
    temp->value = 0;
    temp->arr[0] = temp->arr[1] = NULL;
    return temp;
}

void in(tn *root, int pre_xor)
{
    tn *temp = root;

    for (int i = INT_SIZE - 1; i >= 0; i--)
    {

        bool val = pre_xor & (1 << i);

        if (temp->arr[val] == NULL)
            temp->arr[val] = newNode();

        temp = temp->arr[val];
    }

    temp->value = pre_xor;
}

int query(tn *root, int pre_xor)
{
    tn *temp = root;
    for (int i = INT_SIZE - 1; i >= 0; i--)
    {

        bool val = pre_xor & (1 << i);

        if (temp->arr[1 - val] != NULL)
            temp = temp->arr[1 - val];

        else if (temp->arr[val] != NULL)
            temp = temp->arr[val];
    }
    return pre_xor ^ (temp->value);
}

int msx(int arr[], int n)
{

    tn *root = newNode();
    in(root, 0);

    int result = INT_MIN, pre_xor = 0;

    for (int i = 0; i < n; i++)
    {
        pre_xor = pre_xor ^ arr[i];
        in(root, pre_xor);
        result = max(result, query(root, pre_xor));
    }
    return result;
}

int main()
{

    // int tc;
    // cin >> tc;

    // while (tc--)
    // {
    //     int n;
    //     cin >> n;

    //     int arr[n];
    //     for (int i = 0 ; i < n; i++)
    //     {
    //         cin>> arr[n];
    //         cout << n;
    //     }
    //     cout << msx(arr, n)<<endl;

    // }

     int arr[] = {6,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Max subarray XOR is " << msx(arr, n);
    return 0;
   
    return 0;
}