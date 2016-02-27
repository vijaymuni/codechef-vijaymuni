/*
   ID: Chef and socks
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
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORE(i,a,n) for(int i=a;i<=n;i++)
#define scint(a)    scanf("%d",&a)
#define scllint(l) scanf("%lld",&l)
#define scs(s)  scanf("%s",&s)

int main() {

    LL int m,j,s;

    cin>>j>>s>>m;

    LL int rem=m-j;

    LL int d=rem/s;

    if(d%2!=0) cout<<"Unlucky Chef"<<endl;

    else cout<<"Lucky Chef"<<endl;


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
