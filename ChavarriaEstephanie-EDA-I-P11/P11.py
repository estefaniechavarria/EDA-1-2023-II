def decimal_a_binario(numero_decimal):
    if numero_decimal == 0:
        return 0
    else:
        return (numero_decimal % 2) + 10 * decimal_a_binario(numero_decimal // 2)

def fibonacci_inverso(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [1, 0]
    else:
        fib_seq = fibonacci_inverso(n - 1)
        fib_seq.append(fib_seq[-1] + fib_seq[-2])
        return fib_seq

opcion = input("Bienvenido, puede realizar las siguientes operaciones:\nSeleccione una opción:\n1) Convertir a binario.\n2) Imprimir serie de Fibonacci.\n3) Salir.\n")

if opcion == "1":
    numero = int(input("Ingrese un número: "))
    numero_binario = decimal_a_binario(numero)
    print("El numero binario es:", numero_binario)
elif opcion == "2":
    numero = int(input("Ingrese un número: "))
    fibonacci_seq = fibonacci_inverso(numero)
    print("Los numeros son: ", numero)
    for num in reversed(fibonacci_seq):
        print(num)
elif opcion == "3":
    print("El programa ha terminado")
