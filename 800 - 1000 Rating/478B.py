n,m = map(int, input().split())

big_pair = n - m + 1
max_pair = big_pair * (big_pair - 1) // 2
a = n//m
b = n % m

min_pairs = (m - b) * (a * (a - 1) // 2) + b * ((a + 1) * a // 2)

print(min_pairs, max_pair)
