while True:
    try:
        inst = int(input())
        while inst:
            number_dict, lines = [int(a) for a in input().split()]
            m = {}
            for i in range(number_dict):
                key = input()
                value = input()
                m[key] = value

            for line in range(lines):
                string = input().split()
                for word in string:
                    if word is string[-1] and word in m:
                        print(m[word])
                    elif word is string[-1]:
                        print(word)
                    elif word in m:
                        print(f'{m[word]}', end=" ")
                    else:
                        print(f'{word}', end=" ")
            print('')                     
            inst -= 1    
    except EOFError:
        break        