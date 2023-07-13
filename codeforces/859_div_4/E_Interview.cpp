#include <bits/stdc++.h>
using namespace std;


void solve()
{

    int n;
    cin >> n;
    vector <int > v (n+1);
    vector <long long > vp(n+1,0);
    

    for(int i =1 ; i <= n ; i++)
    {
        cin >> v[i];
        vp[i] += vp[i-1] + v[i];
        //cout << vp[i] << " ";
    }
    //cout << endl;



    int l = 1, r = n;
    int counter = 0;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        cout << "L " << l << " R " << r  << " MID " << mid << endl;
        printf("? %d ", (mid-l) +1 );

        for (int i = l ; i <=  l+ (mid-l)   ; i++)
        {
             printf("%d ", i);
        }
        printf("\n");
        fflush(stdout);
        

        int response;
        scanf("%d", &response);

       
        
        long long rangeSum = vp[mid] - vp[l-1];
         cout << response << " "<< rangeSum<< endl;
         printf("\n\n");

        
        if (response == rangeSum)
            l = mid ;
        else
            r = mid-1;

            counter ++;
            if (counter > 5)break;

         
            
    }

    printf("! %d\n\n",l);
}
int main() {

    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    
    
    fflush(stdout);
}