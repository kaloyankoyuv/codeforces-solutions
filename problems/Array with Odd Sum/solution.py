t = int(input())

while t != 0:

    n = int(input())

    a = []
    sum = 0

    s = input()

    for i in s.split():
        a.append(int(i))
        sum += int(i)

    if sum %2!=0:
        print("YES")
        t-=1
        continue

    ans = ""
    even = 0
    odd = 0

    for i in a:
        if i%2!=0:
            odd+=1
        else:
            even+=1
        
    if odd >0 and even > 0:
        ans = "YES"
    else:
        ans = "NO"

    print(ans)
    
    t-=1
