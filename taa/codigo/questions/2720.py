for caso in range(int(input())):
    total, recebidos = [int(a) for a in input().split()]

    array = []

    def segundo(tupla):
        return tupla[1]

    def primeiro(tupla):
        return tupla[0]

    for presentes in range(total):
        dados = [int(a) for a in input().split()]
        array.append((dados[0],dados[1] * dados[2] * dados[3] ))
        
    array = sorted(sorted(array,key = segundo)[len(array) - recebidos:],key = primeiro,reverse=True)
    

    for maximo in range(recebidos):
        print(array[len(array) - (maximo + 1)][0],end=" ")
    print(' ')