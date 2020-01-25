     
list = []
print("Enter the list size : ")
n=int(input())
for i in range(0, n):
    print("Enter element ", (i+1), ":")
    item = int(input())
    list.append(item)
print("User List is :", list)
list.reverse()
print("Reversed List is :", list) 
