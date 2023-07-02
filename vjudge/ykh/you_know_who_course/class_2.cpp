#include <bits/stdc++.h>
using namespace std;

#define turulove long long
//#define int long long int  //! by this way we can turn every int into long long

void question()
{
    cout << "know in details about namespace" << endl;
}
void all_about_int()
{

    //! all about overflow of intasdasdasd
    //! int is 32bit
    //! so if all the bit is filled up and we again multiply it by 2 then what will happen ? the  bits will be left shifted by 1 bit so as a result the number wont be accurate
    //! for long long the maximum value is 9*10^8 and for int it is 2*10^9
    //! long long is in 32 bit
    //! codes for getting a better view at overflow
    int x = 1e9, y = 1e9;
    //! this will be a wrong method as int can hold that much normal value
    // int ans = x * y;
    // cout << ans;
    //! even this is a wrong method as compiler will try to fit it into a int type so
    //! long long and long long int is same
    //! long long is 2 times slower then int as it is 64 bit
    // long long int ans = x * y;
    // cout << ans;

    //! this code below will run beacuse compiler will typecast it into ans lli then will store it into ans
    long long ans = (long long)x * y;
    cout << ans;
}

void al_about_floor_ceil_round_set_precision()
{
    cout << "All abou ceil" << endl;
    //! floor will return the closesnt minimum int value
    //! ceil will return the closest maximum int value
    //! round will return the closest int value

    double d = 2.56234234252563234;

    cout << floor(d) << endl;
    cout << ceil(d) << endl;
    cout << round(d) << endl;

    //! setprecision will set the precision of the number
    //! for example if we want to print the number with 6 decimal places then we will use setprecision(6)
    cout << setprecision(10) << d << endl;

    //! fixed will set the precision of the number and it will be fixed
    //! for example if we want to print the number with 6 decimal places then we will use fixed(6)
    cout << fixed << setprecision(10);
    cout << d << endl;

    //! scientific will set the precision of the number and it will be fixed
    //! for example if we want to print the number with 6 decimal places then we will use scientific(6)
    cout << scientific << setprecision(10) << d << endl;

    //! hex will set the precision of the number and it will be fixed
    //! for example if we want to print the number with 6 decimal places then we will use hex(6)
    cout << hex << setprecision(10) << d << endl;

    //! oct will set the precision of the number and it will be fixed
    //! for example if we want to print the number with 6 decimal places then we will use oct(6)
    cout << oct << setprecision(10) << d << endl;
}

void power_log_function()
{
    // pow funciton will retunr the power of the number and it will be a double so if we need to store it in a int type then we will use round(pow(int,int)) because it will return the closest int value as sometimes it will return a float value like 2.99999999

    int power = round(pow(2, 3));
    cout << power << endl;
    // or simply
    cout << pow(2, 3) << endl;
    // or simply
    double d_power = pow(2, 3);
    cout << d_power << endl;

    //! log function will return the log of the number log is base e so it will return the log of the number in base e
    //! log10 function will return the log of the number log is base 10 so it will return the log of the number in base 10
    //! log2 function will return the log of the number log is base 2 so it will return the log of the number in base 2
    //! it also returns the log of the number in base e
    cout << log2(16) << endl;  // returns the log of the number in base 2 or the root
    cout << log10(90) << endl; // will return the power of the number in base 10
}

void time_space_complexity()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    cout << ans << endl;
    // here time complexity is O(n) and space complexity is O(1)

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ans += i;
        }
    }

    //! reason of TLE is because of the nested loop
    // this code here is in O(n^2) so if the value of n = 10^4 then it will take 10^8 time or 1 second to run this code
    // but if it is 10^5 then it will take 10^10 time or more than 1 second to run this code so then we will get a tle error

    //! count the number of operation in the code  to find out if it is going beyond 10^8 or not if going beyond then it will take more than 1 second to run this code so then we will get a tle error and if it is not going beyond then it will take less than 1 second to run this code so then we will get a tle error

    cout << ans << endl;
    // here time complexity is O(n^2) and space complexity is O(1)

    // computer does 10^8 operations in a second so it will take 10^8 seconds to complete the task

    //! space complexity is O(n) because it will store the value of n in the memory
}

void bitwiseOperation()
{
    cout << "bitwise operation" << endl;

    //! bitwise AND will return the bitwise AND of the two numbers
    //! bitwise OR will return the bitwise OR of the two numbers
    //! bitwise XOR will return the bitwise XOR of the two numbers
    //! bitwise NOT will return the bitwise NOT of the number
    //! bitwise left shift will return the bitwise left shift of the number
    //! bitwise right shift will return the bitwise right shift of the number
    //! bitwise left rotation will return the bitwise left rotation of the number
    //! bitwise right rotation will return the bitwise right rotation of the number
    //! bitwise left circular shift will return the bitwise left circular shift of the number
    //! bitwise right circular shift will return the bitwise right circular shift of the number

    cout << (1 | 2) << endl;  // will return 3 // this is the bitwise OR of 1 and 2
    cout << (1 & 2) << endl;  // will return 0 // this is bitwise AND
    cout << (1 ^ 2) << endl;  // will return 3 //this is XOR
    cout << ~1 << endl;       // will return -2 // this is the bitwise NOT of 1
    cout << (2 << 1) << endl; // will return 4 //this is left shift it will multiply the number by 2
    cout << (2 >> 1) << endl; // will return 1 //this is right shift it means divide the number by 2

    //! this will return the value of the result in int type so if we want to store it in a long long type then we will use long long

    cout << (bitset<10>(20)) << endl; // will return 2 // this is left circular shift it will shift the bits to left and it will return the value in int type

    cout << ceil(log2(20)) << endl; // will return 3 // this is the ceil of the log of the number in base 2
}

void array_function()
{
    cout << "array function" << endl;

    //! this will return the sum of the array elements
    int arr[] = {1, 2, 3, 4, 5};
    cout << accumulate(arr, arr + 5, 0) << endl;

    //! subarray means the array which is between the start and end index and they will have to be consecutive
    //! subsequence means the array which is between the start and end index and they maintain the order of the elements but not necessarily consecutive
    //! subsequence is also called as sliding window
    //! substring is also like subarray 

}

int main()
{

    array_function();
    return 0;
}
