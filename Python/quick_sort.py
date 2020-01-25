# quick sort in python by ankit raj

def part(array, low, high):
    i = low - 1
    pivot = array[high]
    
    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            array[i], array[j] = array[j], array[i]
    array[i + 1], array[high] = array[high], arrray[i + 1]
    return (i + 1)

def quick_sort(array, low, high):
    if low < high:
        mid = partition(array, low, high)
        quick_sort(array, low, mid - 1)
        quick_sort(array, mid, high)


n = int(input('enter size of an array'))
array = input('Ener the elements of array ').split()
array = [int(x) for x in array]
insertion_sort(array)
print('Sorted list: ', end = '')
print(array)
