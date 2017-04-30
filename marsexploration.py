S=raw_input()
assert len(S)%3==0 and len(S)<=99
n=len(S)/3
exp="SOS"*n 
ans=0
for i in range(len(S)):
    if exp[i]!=S[i]:
        ans=ans+1
print ans
