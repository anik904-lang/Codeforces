n = int(input())
a = list(map(int, input().split()))

cnt = 1
mx = 1

for i in range(1, n):
    if a[i] >= a[i-1]:
        cnt += 1
    else:
        cnt = 1
    if cnt > mx:
        mx = cnt

print(mx)
