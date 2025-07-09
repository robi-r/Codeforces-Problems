n,m = map(int,input().split())
arr = list(map(int, input().split()))

ct = arr[0] - 1

for i in range(m-1):
    if arr[i] > arr[i+1]:
        ct += n - (arr[i] - arr[i+1])
    else:
        ct += arr[i + 1] - arr[i]
print(ct)