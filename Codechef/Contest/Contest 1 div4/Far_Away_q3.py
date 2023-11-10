t = int(input())
for i in range(t):
    n, m = list(map(int, input().split()))
    temp = list(map(int, input().split()))
    b = []
    sum = 0
    for i in range(n):
        if (temp[i]-1) > (m-temp[i]):
            b.append(1)
        else:
            b.append(m)
    for i in range(n):
        sum += abs(temp[i] - b[i])
    print(sum)