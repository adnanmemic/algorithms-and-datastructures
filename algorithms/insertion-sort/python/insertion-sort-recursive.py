def insertion_sort(A,n):
    if n > 0:
        insertion_sort(A,n-1)
    key = A[n]
    j = n-1
    while j >= 0 and A[j] > key:
        A[j+1] = A[j]
        j = j - 1
    A[j+1] = key

A = [3, 1, 20, 100, 4, 2]

print(A)

insertion_sort(A, len(A)-1)

print(A)
