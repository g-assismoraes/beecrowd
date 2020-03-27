n = int(input())
if 0 <= n <= 10000000:
    cem = n // 100
    cinquenta = n % 100 // 50
    vinte = n % 100 % 50 // 20
    dez = n % 100 % 50 % 20 // 10
    cinco = n % 100 % 50 % 20 % 10 // 5
    dois = n % 100 % 50 % 20 % 10 % 5 // 2
    um = n % 100 % 50 % 20 % 10 % 5 % 2
    print('''%d
%d nota(s) de R$ 100,00
%d nota(s) de R$ 50,00
%d nota(s) de R$ 20,00
%d nota(s) de R$ 10,00
%d nota(s) de R$ 5,00
%d nota(s) de R$ 2,00
%d nota(s) de R$ 1,00'''%(n, cem , cinquenta, vinte, dez, cinco, dois, um))
