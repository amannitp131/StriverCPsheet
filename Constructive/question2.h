
#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int n, s = 0, i = 0;
    cin >> n;

    while (n > 0) {
        int digit = n % 10;
        if (digit <= 4 ) {
             s = s + digit * pow(10, i);
           
        } else if(digit>4 &&digit<9) {
            
            s = s + (9 - digit) * pow(10, i);
        }else {
            if(n/10==0){
            s = s + digit * pow(10, i);
        }else{
            s = s + (9 - digit) * pow(10, i);
        }
        }
        n = n / 10;
        i++;
    }

    cout << s << endl;

    return 0;
}
