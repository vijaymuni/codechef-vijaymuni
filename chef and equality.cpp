/* author :  Vijay  */
#include<bits/stdc++.h>

#define LL long long
#define NN 100005
using namespace std;

int main() {

    int T;
    cin>>T;
    int P[NN]={0};

    while(T--)
    {   int N;
        cin>>N;
        int P[NN]={0};

       int R[N],scount=0;

       for(int i=0;i<N;i++)
       {
           cin>>R[i];
           P[R[i]]+=1;
       }

      sort(P,P+NN);

      int pmax=P[NN-1];
      scount=N-pmax;

      cout<<scount<<endl;
for(long long j=0;j<NN;j++)
{
    P[j]=0;
}

    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
