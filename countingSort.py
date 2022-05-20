def Counting_sortt(ar):
    n = len(ar)
    z = [0] * n
    a = [0] * 20

    for p in range(0, n):
        a[ar[p]] += 1
    for p in range(1, 20):
        a[p] += a[p - 1]
    p = n - 1
    while p >= 0:
        z[a[ar[p]] - 1] = ar[p]
        a[ar[p]] -= 1
        p -= 1
    for p in range(0, n):
        ar[p] = z[p]

ar = [13, 4, 2, 1, 11, 2]
Counting_sortt(ar)
print("The array after sorting : ")
print(ar)