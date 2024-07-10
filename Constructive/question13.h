

#include <iostream>
using namespace std;
bool findlucky(long long int &n){
    int k=0;
    while(n>0){
        if(n%10==7 || n%10==4 ) {
            k++;
        }
        n=n/10;
    }
    if((k%4!=0 && k%7!=0) || k==0){
        return false;
    }else{
        return true;
    }
}
int main()
{
    long long int n;
    cin>>n;
   if(findlucky(n)){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
    

    return 0;
}