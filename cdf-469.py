n = int(input())

x = list(map(int, input().split()))
y = list(map(int, input().split()))

levels = set()

for i in x[1:]:
    levels.add(i)

for i in y[1:]:
    levels.add(i)

if len(levels) == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
