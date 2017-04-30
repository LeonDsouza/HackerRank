n = int(raw_input())
A = map(int, raw_input().split())

ans = 9999999999
for i in range(n):
    for j in range(n):
        if A[i] == A[j] and i != j:
            ans = min(ans, abs(i - j))

if ans == 9999999999:
    ans = -1
print ans
