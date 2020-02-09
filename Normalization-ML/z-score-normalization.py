import math
print("Enter the Numbers : ")
inp=raw_input().split()
#Finding out mean
mean=0
norm=0
for i in range (0,len(inp)):
    mean+=int(inp[i])
mean/=len(inp)
deviation=0
for j in range(0,len(inp)):
    deviation+=(int(inp[j])-mean)*(int(inp[j])-mean)
deviation/=len(inp)
deviation=math.sqrt(deviation)
for n in range (0,len(inp)):
    norm=int(inp[n])-mean/deviation
    print(norm)
