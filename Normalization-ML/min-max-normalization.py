import math
print("Enter the Numbers : ")
inp=raw_input().split()
nor=0
for i in range(0,len(inp)):
    nor=(int(inp[i])-int(min(inp)))*(int(inp[i])-int(min(inp)))
    nor/=len(inp)
    nor=math.sqrt(nor)
    print(nor)