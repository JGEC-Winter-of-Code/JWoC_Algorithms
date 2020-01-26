#smallest element in a list in python
# creating empty list
lis = []

# user enters the number of elements to put in list
count = int(input('How many numbers? '))

# iterating till count to append all input elements in list
for n in range(count):
    number = int(input('Enter number: '))
    lis.append(number)

# displaying smallest element
print("Smallest element of the list is :", min(lis))