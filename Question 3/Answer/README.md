# Day 3(50 days of EULER)
## Question 3
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

Solution

Execution: Execute on Python 3.7 Can be executed using any IDE for Python. PyCharm, Jupyter, Spyder etc.
Inputs: No external file for input is required.
Output: It is generated automatically on Run Dialog within the IDE (i.e. Print statement is used). No external file for output is required.

Method:

  Using Formula a^2+b^2-c^2=0
  adding 2ab on both sides
  (a+b)^2-c^2=2ab
  Equation becomes:
  (a+b-c)(a+b+c)=2ab
  Given in question a+b+c=1000
  Formula becomes 500(a+b-c)=ab
  Which becomes  500(a+b+c-2c)=ab
  Which becomes  500(1000-2c)=ab
  Which becomes (500000 - 1000 * c) == ab
