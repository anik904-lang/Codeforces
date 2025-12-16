n=int(input())
a=100,20,10,5,1
c=0
for i in a:
    c+=n//i
    n%=i
print(c)
