t=int(input())
j=1

while(j<=t):
    n=int(input())
    ht=1
    for i in range(0,n+1):
        if(i==0):
            ht=ht
        
        elif(i%2!=0):
            ht=ht*2
        else:
            ht=ht+1
    print(ht)
    j=j+1
