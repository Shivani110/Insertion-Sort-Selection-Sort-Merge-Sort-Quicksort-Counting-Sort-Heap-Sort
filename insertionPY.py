def Insertion(a):
    for m in range(1, len(a)):

         k = a[m]
         n = m-1
         while n >= 0 and k < a[n] :
                a[n + 1] = a[n]
                n -= 1
         a[n + 1] = k

a = [7, 3, 11, 5, 9, 4]
Insertion(a)
for m in range(len(a)):
    print("% d" % a[m])
