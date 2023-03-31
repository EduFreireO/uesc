def count(lista):
    count = 0
    for el in lista:
        if el <= 127:
            count += 1
    return count

def item(lista):
    for item in range(len(lista)):
        if lista[item] <= 127:
            return item    

abc = ["A","B","C","D","E"]
while True:
    try:
        for caso in range(int(input())):
            n = [int(a) for a in input().split()]
            contador = count(n) # Da para utilzar a map 
            if contador != 1:
                print("*")
                continue
            print(abc[item(n)])    
    except EOFError:
        break    