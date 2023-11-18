t = int(input())
for i in range(t):
  n, k, v = list(map(int, input().split()))
  lst = list(map(int, input().split()))
  tsum = v*(n+k)
  arraySum = sum(lst)
  r = tsum - arraySum
  if(r < 0):
    print(-1)
  else:
    if(r%k==0):
      if(r//k > 0):
        print(r//k)
      else:
        print(-1)
    else:
      print(-1)