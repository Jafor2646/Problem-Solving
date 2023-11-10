# cook your dish here
import math as m
for run in range(int(input())):
    n,x=map(int,input().split())
    lst=list(map(int,input().split()))
    odd,even=0,0
    for ele in lst:
        if ele%2==0:
            even+=1
        else:
            odd+=1
    if n == odd:
        print(0)
    elif x%2==1:
        print(m.ceil(even/2))
    else:
        if even >0 and odd>0:
            print(even)
        else:
            print(-1)