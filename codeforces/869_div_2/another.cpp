#include <bits/stdc++.h>
using namespace std;



double average(int arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    double avg = sum / size;

    return avg;
}

int main()
{

    
   

    int arr[] = {1, 2, 3, 4, 5};

    double avg = average(arr, 5);

    cout << "Average: " << avg << endl;


    if (avg > 10 || (int)avg != avg)
    {
        cout << "Double digit" << endl;
    }
    else
    {
        cout << "Single digit" << endl;
    }
    return 0;
}