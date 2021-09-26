for _ in range(int(input())):
    n,p,x,y = map(int, input().split())
    a = list(map(int, input().split()))
    t = [0]*2
    for i in range(p):
        t[a[i]]+=1
        
    re = x*t[0] + y*t[1]
    
    print(re)
    
