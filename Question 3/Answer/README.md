
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a2 + b2 = c2 For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.

1. Function to identity if a,b,c are in triplet. (a**2 + b**2 == c**2).

2. Initialize total as 1000 (given - a + b + c = 1000).

3. Loop c through total, b through c and a through b as a < b < c.

4. If sum of a,b,c is 1000 then check if it is triplet using is_triplet fn.

5. Display the product of a*b*c.

o/p : 31875000


 
    
