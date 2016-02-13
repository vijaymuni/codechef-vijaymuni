/*
   ID: Chef Stones @ codechef
   Author: VIJAY

*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;


int main() {

    int t;
    cin>>t;
    long long int N;
    int K;

    while(t--&&t<=5)
    {
        cin>>N>>K;

     if (N<=100000) {
        long long *A,*B,*Tmax;


        A=new long long[N];
        B=new long long[N];
        Tmax=new long long[N];

        for(int i=1;i<=N;i++)
           {cin>>A[i];}
        for(int i=1;i<=N;i++)
           {cin>>B[i];}

            for (int i=1;i<=N;i++)
            {
                long long r=(K/A[i]);
                Tmax[i]=r*B[i];
            }

        long long mmax=Tmax[1];

        for (int i=1;i<=N;i++)
        {
        if(Tmax[i]>mmax)
                mmax=Tmax[i];
        }



        cout<<mmax<<endl;
     }
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
