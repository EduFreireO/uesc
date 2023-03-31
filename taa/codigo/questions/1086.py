def verifica(largura, altura, largura_tabua, tabuas):
    if (largura * 100) % largura_tabua:
        return 0
    slots = (largura * 100) / largura_tabua
    utilizadas = 0
    esquerda = 0
    direita = len(tabuas) - 1
    
    while True:
        
        if esquerda >= direita:
            break
        elif tabuas[direita] == altura:
            utilizadas += 1
            direita -= 1
            slots -= 1
        elif tabuas[direita] + tabuas[esquerda] == altura:
            utilizadas += 2
            direita -= 1
            esquerda += 1
            slots -= 1        
        
        elif tabuas[direita] + tabuas[esquerda] > altura:
            direita -= 1
        
        else:      
            esquerda += 1
        


    if slots:
        return 0
    return utilizadas    

while True:
    try:
        largura, altura = [int(a) for a in input().split()]
        if largura == altura == 0: break
        largura_tabua = int(input())
        quantidade = int(input())

        tabuas = [int(a) for a in input().split()]
        tabuas.sort()

        horizontal = verifica(largura, altura, largura_tabua, tabuas)
        vertical = verifica(altura, largura, largura_tabua, tabuas)

        if(vertical == horizontal == 0):
            print('impossivel')
        elif(not vertical or not horizontal):
            print(max(vertical, horizontal))       
        else:
            print(min(vertical, horizontal))
    except EOFError:
        break
