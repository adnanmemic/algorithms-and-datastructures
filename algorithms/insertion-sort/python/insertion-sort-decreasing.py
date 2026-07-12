A = [31, 41, 59, 26, 41, 58]

def insertion_sort(A, n):
    for i in range(n):
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] < key:
            A[j+1] = A[j]
            j = j - 1
        A[j+1] = key
    return A

print(insertion_sort(A, len(A)))
