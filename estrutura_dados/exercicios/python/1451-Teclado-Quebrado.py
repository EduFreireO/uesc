from collections import deque
import re
while True:
    try:
        txt = input()
        txt = re.split('(\[|])', txt)

        index = 0
        front = False
        d = deque()
        for element in txt:
            if element == '[':
                front = True
                continue
            elif element == ']':
                front = False
                continue
            
            if front:
                d.appendleft(element)
            else:
                d.append(element)

        while len(d):
            print(d.popleft(), end="")
        print()
    except EOFError:
        break             