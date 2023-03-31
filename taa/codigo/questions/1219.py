from math import sqrt
while True:
    try:
        lados = [int(a) for a in input().split()]
        semi_perimetro = sum(lados) / 2    
        area_triangulo = sqrt(semi_perimetro * (semi_perimetro - lados[0] ) *
        (semi_perimetro - lados[1]) * (semi_perimetro - lados[2])) 

        area_circulo = area_triangulo / semi_perimetro
        area_circulo *= 3.1415926535897
        area_triangulo -= area_circulo

        maxl = max(lados) / 2
        total = (maxl * maxl ) * 3.1415926535897
        print(f'{total - (area_circulo + area_triangulo):.4f} {area_triangulo:.4f} {area_circulo:.4f}')
    except EOFError:
        break
