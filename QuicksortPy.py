def partition(ar, h, l):
  pv = ar[l]
  a = h - 1
  for b in range(h, l):
    if ar[b] <= pv:
      a = a + 1
      (ar[a], ar[b]) = (ar[b], ar[a])
  (ar[a + 1], ar[l]) = (ar[l], ar[a + 1])
  return a + 1

def Quick_sortt(ar, h, l):
  if h < l:
    y = partition(ar, h, l)
    Quick_sortt(ar, h, y - 1)
    Quick_sortt(ar, y + 1, l)

ar = [5, 8, 1, 10, 2, 6]
z = len(ar)
Quick_sortt(ar, 0, z - 1)
print('The array after sorting :')
print(ar)