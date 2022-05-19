def Heapp(ar, x, z):
	n = z
	h = 2 * z + 1
	l = 2 * z + 2
	if h < x and ar[n] < ar[h]:
		n = h
	if l < x and ar[n] < ar[l]:
		n = l
	if n != z:
		ar[z], ar[n] = ar[n], ar[z]
		Heapp(ar, x, n)

def Heap_sortt(ar):
	x = len(ar)
	for z in range(x//2 , - 1, -1):
		Heapp(ar, x, z)
	for z in range(x-1, 0, -1):
		ar[z], ar[0] = ar[0], ar[z]
		Heapp(ar, z, 0)

ar = [11, 21, 6, 1, 8, 15]
Heap_sortt(ar)
x = len(ar)
print("The elements of array after sorting: ")
for z in range(x):
	print("%d" % ar[z], end=" ")
