n,k =map(int, raw_input().split())
c = map(int, raw_input().split())
E = 100

for i in range(0,n,k):
    E = E - 1 - 2*c[i]

print E
