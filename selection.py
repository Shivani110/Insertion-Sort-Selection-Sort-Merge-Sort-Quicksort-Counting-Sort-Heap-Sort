def Selection(ar, x):
    for a in range(x):
        low = a

        for b in range(a + 1, x):
            if ar[b] < ar[low]:
                low = b

        (ar[a], ar[low]) = (ar[low], ar[a])


n = [30, 20, 5, 10, 11]
x = len(n)
Selection(n, x)
print('The array after sorting:')
print(n)