t = int(input())
for r in range(t):
  x, y = list(map(int, input().split()))
  if(3*x <= 2*y):
    print(3*x)
  else:
    print(2*y)