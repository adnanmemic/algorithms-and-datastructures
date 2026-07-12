import math

def insertion_sort(A, n):
    for i in range(1, n):
        key = A[i]

        p = 0
        r = i - 1

        while p <= r:
            q = math.floor((p + r) / 2)

            if A[q] < key:
                p = q + 1
            else:
                r = q - 1

        j = i - 1
        while j >= p:
            A[j + 1] = A[j]
            j -= 1

        A[p] = key

A = [1,2,3,4,8,6,5]

print(A)

insertion_sort(A, len(A))

print(A)
