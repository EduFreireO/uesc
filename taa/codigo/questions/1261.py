while True:
    try:
        dicionario = {}
        n, m = [int(a) for a in input().split()]

        for chave in range(n):
            aux, aux2 = input().split()
            dicionario[aux] = int(aux2)

        textos = input().split('.')
        for texto in textos:
            soma = 0
            for chave in dicionario.keys():
                if chave in texto:
                    soma += dicionario[chave]
            print(soma)

    except EOFError:
        break                

