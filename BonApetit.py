n, k = map(int, raw_input().split())
arr = map(int, raw_input().split())
val = input()
t = val - (sum(arr) - arr[k]) / 2
if (t == 0):
    print "Bon Appetit"
else:
    print t
