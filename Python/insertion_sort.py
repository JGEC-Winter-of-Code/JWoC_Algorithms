# insertion sort in python by ankit raj

def insertion_sort(array):
    for i in range(0, (len(array))):
        key = array[i]
        j = i - 1
        while j >= 0 and key <array[j]:
            array[j + 1] = array[j]
            j -= 1
        array[j + 1] = key
        
n = int(input('enter size of an array'))
array = input('Ener the elements of array ').split()
array = [int(x) for x in array]
insertion_sort(array)
print('Sorted list: ', end = '')
print(array)
