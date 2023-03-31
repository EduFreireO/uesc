n = int(input())
pares = []
impares = []

for num in range(n):
    valor = int(input()) 
    if valor % 2:
        impares.append(valor)
        continue
    pares.append(valor)

pares = sorted(pares)
impares = sorted(impares, reverse=True)

for par in pares:
    print(par)
for impar in impares:
    print(impar)            


