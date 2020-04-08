# Himani Dalal

def is_triplet(a,b,c):
    if a**2 + b**2 == c**2:
        return True
    else:
        return False
def main():
    sum_total = 1000
    
    for c in range(sum_total):
        for b in range(c):
            for a in range(b):
                if a + b + c == sum_total:
                    if is_triplet(a,b,c):
                        # print(a,b,c)
                        print(a*b*c) 
main()
