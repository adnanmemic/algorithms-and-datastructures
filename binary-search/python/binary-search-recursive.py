import math

def binary_search(A,x,p,r):
    if p <=r:
        q = math.floor((p+r)/2)

        if A[q] == x:
            return q
        elif A[q] > x:
            return binary_search(A,x,p,q-1)
        else:
            return binary_search(A,x,q+1,r)

A = [1,8,13,20,26,42,53,69,102,200,1000,5000,5321]

print(binary_search(A, 1000, 0, len(A)-1))

