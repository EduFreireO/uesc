def search(v, val):
    l = -1
    r = len(v)
    m = (l + r) // 2
    while(r - l > 1):
        m = (l + r) // 2
        if(val >= v[m]):
            r = m
        else:
            l = m    
    return r


leng, queries = [int(a) for a in input().split()]
val = [ int(a) for a in input().split() ]


for a in input().split():
    print(search(val, int(a)))


