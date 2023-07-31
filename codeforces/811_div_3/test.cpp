
#include <bits/stdc++.h>
using namespace std;

int getRandomValue()
{
    const int lower_bound = 95;
    const int upper_bound = 100;

    random_device rd;
    mt19937 gen(rd()); 
    uniform_int_distribution<int> distribution(lower_bound, upper_bound);

    return distribution(gen);
}

int main()
{
    cout << getRandomValue() << endl;
    return 0;
}
