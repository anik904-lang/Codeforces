k,n,w=map(int,input().split())
total=k*w*(w+1)//2
borrow=total-n

if borrow<0:
    borrow=0
print(borrow)

