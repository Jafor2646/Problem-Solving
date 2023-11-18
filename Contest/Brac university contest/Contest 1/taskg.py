t = int(input())
for i in range(t):
  string = input()
  flag = "yes"
  for j in range(0,len(string),2):
    if string[j] == "A" and string[j+1] != "B":
      flag = "no"
      break
    if string[j] == "B" and string[j+1] != "A":
      flag = "no"
      break
  print(flag)