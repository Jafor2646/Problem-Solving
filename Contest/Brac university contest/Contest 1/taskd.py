t = int(input())
for i in range(t):
  n = int(input())
  count = 0
  for j in range(1, n+1, 2):
      count += (n-j+1)**2
  print(count)