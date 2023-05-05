#include <bits/stdc++.h>
using namespace std;

void number_of_people(int count)
{
    cout << "Number of people: " << count << endl;
}



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
double calc()
{
     cout << 2.5 * 2 + 2 << endl;
}
int main()
{

    number_of_people(5);
    calc();

    int arr[] = {1, 2, 3, 4, 5,6};

    double avg = average(arr, 6);

    cout << "Average: " << avg << endl;

    if (avg > 10)
    {
        cout << "Double digit" << endl;
    }
    else
    {
        cout << "Single digit" << endl;
    }
    return 0;
}