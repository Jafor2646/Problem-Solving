t = int(input())
for i in range(t):
    temp = list(map(int, input().split()))
    if 1 in temp:
        print("OUT")
    else:
        print("IN")