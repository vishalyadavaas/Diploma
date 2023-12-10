def compose(f,g):
    return lambda x : f(g(x))

f = lambda x : x + 1
g = lambda x : 2 * x
h = compose(f,g)

print(h(3))