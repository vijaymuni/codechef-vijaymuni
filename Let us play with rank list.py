#let us play with rank list
# author : vijay

import sys

T=int(input())

while(T):
    n,s=map(int,input().split())
    if(n==s):
        print(n-1)
    elif(n*(n+1)/2==s):
        print("0")
    else:
        k=1
        while((n+k*(k+1)/2)<=s):
            k+=1
        print(n-k)
    T-=1    
        
        
    
    
