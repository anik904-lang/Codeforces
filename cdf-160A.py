n = int(input())
coins = list(map(int, input().split()))
coins.sort(reverse=True)
total = sum(coins)
taken = 0
count = 0
for c in coins:
    taken += c
    count += 1
    if taken > total - taken:
        print(count)
        break
