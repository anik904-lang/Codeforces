a=int(input())
x=y=z=0
for i in range(a):
    b,c,d=map(int,input().split())
    x+=b
    y+=c
    z+=d    
if x==0 and y==0 and z==0:
    print("YES")
else:
    print("NO")
    
