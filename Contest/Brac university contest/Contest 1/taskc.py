t = int(input())
for i in range(t):
  n = int(input())
  arrive = list(map(int, input().split()))
  dep = list(map(int, input().split()))
  combine = []
  for i in arrive:
    combine.append((i, 1))
  for i in dep:
    combine.append((i, 0))
  combine.sort()
  max = 0
  count = 0
  for i, j in combine:
    if j == 1:
      count += 1
    else:
      count -= 1
    if count > max:
      max = count
  print(max)