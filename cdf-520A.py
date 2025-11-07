n = int(input())
s = input()

letters = set(c.lower() for c in s)

if len(letters) == 26:
    print("YES")
else:
    print("NO")
