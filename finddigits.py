T=int(input())
j=1
while(j<=T):
    N=int(input())
    count=0
    K=N
    while(N!=0):
        a=N%10
        M=N//10
        if(a==0):
            N=M
            continue
        if(K%a==0 and a!=0):
            count=count+1
            #print (count)
            N=M
        elif(K%a!=0):
            N=M
            continue
            
    print (count)
    j=j+1
