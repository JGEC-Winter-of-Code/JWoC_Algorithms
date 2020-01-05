# Tower of Hanoi by ankit raj

def hanoi(disks, source, intermediate, target):
    if disks == 1:
        print('Move disk 1 from tower {} to tower {}.'.format(source, target))
        return
    
    hanoi(disks - 1, source, target, intermediate)
    print('Move disk {} from tower {} to tower {}.'.format(disks, source, target))
    hanoi(disks - 1, intermediate, source, target)

disks = int(input('Number of disks'))
hanoi(disks, 'A', 'B', 'C')
