def Merge_Sort(ar):
	if len(ar) > 1:
		middle = len(ar)//2
		l_ar = ar[:middle]
		r_ar = ar[middle:]
		Merge_Sort(l_ar)
		Merge_Sort(r_ar)

		x = y = z = 0
		while x < len(l_ar) and y < len(r_ar):
			if l_ar[x] < r_ar[y]:
				ar[z] = l_ar[x]
				x += 1
			else:
				ar[z] = r_ar[y]
				y += 1
			z += 1
		while x < len(l_ar):
			ar[z] = l_ar[x]
			x += 1
			z += 1

		while y < len(r_ar):
			ar[z] = r_ar[y]
			y += 1
			z += 1

def S(ar):
	for x in range(len(ar)):
		print(ar[x], end=" ")
	print()
if __name__ == '__main__':
	ar = [ 6, 9, 2, 10, 11, 3 ]
	Merge_Sort(ar)
	print(" The array elements after sorting : \n")
	S(ar)
