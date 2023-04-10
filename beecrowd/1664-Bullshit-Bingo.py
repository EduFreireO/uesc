import re
import sys

def gdc(a, b):
    if not b:
        return a
    gdc(b, a % b)


while True:    
    try:
        text = sys.stdin.read().lower()
        text = re.split('[^a-z]', text)
     
        number_words = 0
        sum = 0
        games = 0
        map = {}
        for word in text:
            if word == 'bullshit':
                games += 1
                sum += number_words
                number_words = 0
                map.clear()
            elif word not in map and word != '':
                number_words += 1             
                map[word] = True
        g = gdc(sum, games)
        print(f'{sum//g}/{games//g}')
    except EOFError:
        break    