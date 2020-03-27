def fibonacci(n):
    return (((1+5**0.5)/2)**n - ((1-5**0.5)/2)**n)/(5**0.5)
n = float(input())
z = fibonacci(n)
print('%.1f'%z)
