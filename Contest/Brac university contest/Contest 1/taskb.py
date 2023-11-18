t = int(input())
for i in range(t):
  n = int(input())
  lst = list(map(int, input().split()))
  min_diff = 10000000000
  for j in range(n):
    for k in range(n):
      if j != k:
        if(abs(lst[j]-lst[k]) < min_diff):
          min_diff = abs(lst[j]-lst[k])
  print(min_diff)