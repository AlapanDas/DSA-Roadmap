def reversort(arr):
    cost = 0
    for i in range(len(arr)-1):
        j = arr.index(min(arr[i:]))
        arr[i:j+1] = reversed(arr[i:j+1])
        cost += j - i + 1
    return cost


t=int(input())
for k in range(t):
     n=int(input())
     arr=list(map(int,input().split()))
     reversort(arr)

