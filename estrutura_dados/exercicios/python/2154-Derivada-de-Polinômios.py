while True:
    try:
        elements = int(input())
        expression = input().split()
        for element in expression:
            if element == '+':
                print(' + ', end="")
            else:
                find = element.find('x')
                c = int(element[ : find])
                exp = int(element[ find + 1 : ])
                
                if exp == 1:
                    print(c, end="")
                if exp == 2:
                    print(f'{c * 2}x', end="")
                else:
                    print(f'{c * exp}x{exp-1}', end="")    
                


        print('')             
    except EOFError:
        break