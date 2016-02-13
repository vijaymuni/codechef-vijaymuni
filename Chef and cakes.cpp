
/*
   ID: Chef and Cakes @ codechef
   Author: VIJAY

*/

#include <vector>
#include <map>
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


#define LL long long
#define mod 1000000007
#define sz size()
#define ln length()
#define FOR(i,a,n) for(long long int i=a;i<n;i++)
#define FORE(i,a,n) for(int i=a;i<=n;i++)
#define scint(a)    scanf("%d",&a)

int main() {

    int T;
    cin>>T;

    LL int N,M;

    while(T--)
    {

        cin>>N>>M;


       bool flag=false;
       LL int ans=0;

       if(N==1 && (M==1 || M==0))
       {
           flag=false;
       }


       else if(M==0 || M==N){ flag=true; ans=1;}

       else if(N%2==0)
       {
           flag=true;
           ans=(int) (N/M) ;
       }

       else
       {

           flag=false;

       }



       if(flag)
       {
           cout<<"No "<<ans<<endl;
       }

       else cout<<"Yes"<<endl;


    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
