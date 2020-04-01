# Using Formula a^2+b^2-c^2=0
# adding 2ab on both sides
# (a+b)^2-c^2=2ab
#  Equation becomes:
#  (a+b-c)(a+b+c)=2ab
#  Given in question a+b+c=1000
#  Formula becomes 500(a+b-c)=ab
#  Which becomes  500(a+b+c-2c)=ab
#  Which becomes  500(1000-2c)=ab
#  Which becomes (500000 - 1000 * c) == ab

for a in range(3, 499):
    for b in range(a + 1, 499):
        K = a + b
        if K < 9996:
            S = a * b
            for c in range(b + 1, 499):
                if K + c == 1000:
                    if (500000 - 1000 * c) == S:
                        print(a, b, c)
                        print(S * c)
                        exit()
