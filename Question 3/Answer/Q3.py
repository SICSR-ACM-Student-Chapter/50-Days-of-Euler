# Himani Dalal

def is_triplet(a,b,c):
    if a**2 + b**2 == c**2:
        return True
    else:
        return False

total = 1000
for c in range(total):
    for b in range(c):
        for a in range(b):
            if a + b + c == total:
                if is_triplet(a,b,c):
                    # print(a,b,c)
                    print(a*b*c) 
