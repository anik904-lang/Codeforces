n,m=map(int,input().split())
count=0
for a in range(0,n+1):
    for b in range(0,m+1):
        if(a*a+b==n and a+b*b==m):
         count+=1

print(count)
