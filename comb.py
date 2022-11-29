from itertools import combinations

comb = combinations([1, 1, 2, 2, 3, 3, 4, 4, 5, 5], 10)

for i in list(comb):
    print(i)