def binario(decimal):
    if decimal == 0:
        return 0
    else:
        return (decimal % 2) + 10 * binario(decimal // 2)

def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [1, 0]
    else:
        secuencia = fibonacci(n - 1)
        secuencia.append(secuencia[-1] + secuencia[-2])
        return secuencia

opcion = input("Bienvenido, puede realizar las siguientes operaciones:\nSeleccione una opción:\n1) Convertir a binario.\n2) Imprimir serie de Fibonacci.\n3) Salir.\n")

if opcion == "1":
    numero = int(input("Ingrese un número: "))
    numero_binario = binario(numero)
    print("El numero binario es:", numero_binario)
elif opcion == "2":
    numero = int(input("Ingrese un número: "))
    secuencia = fibonacci(numero)
    print("Los numeros son: ", numero)
    for num in reversed(secuencia):
        print(num)
elif opcion == "3":
    print("El programa ha terminado")
