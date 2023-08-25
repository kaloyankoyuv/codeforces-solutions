t = int(input())

while t != 0:

    n = int(input())

    a = list(map(int, input().strip().split()))

    e = []
    o = []

    for i in range(0, n):
        if i%2 != a[i]%2:

            if a[i]%2!=0 and i%2==0:
                e.append(i)
            elif a[i]%2==0 and i%2!=0:
                o.append(i)

    if len(o) != len(e):
        ans = -1
    else:
        ans = len(o)

    print(ans)
                
    t-=1;
