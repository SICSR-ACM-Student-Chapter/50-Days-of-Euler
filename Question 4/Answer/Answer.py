li = []  # 2D List containing numbers

f = open('a.txt', 'r')
s = f.read()
s = s.split("\n")

# Generating 2D List
for t in s:
    t = t.split(" ")
    t = [int(i) for i in t]
    li.append(t)

m = []

# Dynamic Programming division in groups of four
for i in range(17):
    for t in range(17):
        for j in range(4):
            p = li[i + j][t] * li[i + j][t + 1] * li[i + j][t + 2] * li[i + j][t + 3]
            m.append(p)
        for j in range(4):
            p = li[i + 0][t + j] * li[i + 1][t + j] * li[i + 2][t + j] * li[i + 3][t + j]
            m.append(p)

        p = li[i][t] * li[i + 1][t + 1] * li[i + 2][t + 2] * li[i + 3][t + 3]
        m.append(p)
        p = li[i + 3][t] * li[i + 2][t + 1] * li[i + 1][t + 2] * li[i + 0][t + 3]
        m.append(p)

print(max(m))

# Answer: 70600674
