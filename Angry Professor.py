T=int(input())

j=1
while(j<=T):
    N,K=input().split()
    numbers=[]
    present=0
    
    N=int(N)
    K=int(K)
    #print (N)
    #print (K)
    if(K<=N):
        numbers = list(map(int, input().split()))
        for i in range(0,len(numbers)):
            if(numbers[i]<=0 and numbers[i]>=-100):
                present=present+1
            else:
                continue
        if(present<K):
            print("YES")
        else:
            print("NO")
    j=j+1
