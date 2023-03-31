while True:
    try:
        n, q = [int(a) for a in input().split()]
        notas = []
        for cidadao in range(n):
            notas.append(int(input()))
        notas = sorted(notas,reverse=True)
        for consulta in range(q):
            aux = int(input())
            print(notas[aux - 1])

    except EOFError:
        break