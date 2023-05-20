bibliotecas = []

def agregar_libro():
    libro = input("Ingrese el titulo del libro: ")
    bibliotecas.append(libro)
    print("Libro añadido.")

def eliminar_libro():
    libro = input("Ingrese el titulo del libro que desea eliminar: ")
    if libro in libros:
        bibliotecas.remove(libro)
        print(f"El libro '{libro}' ha sido eliminado.")
    else:
        print(f"El libro '{libro}' no se encuentra en la biblioteca.")


def ordenar_libros():
    bibliotecas.sort()
    print("Biblioteca ordenada.")

def imprimir_libros():
    print("Biblioteca de libros:")
    for libro in bibliotecas:
        print(libro)

def salida():
    while True:
        print("\nBienvenido a la biblioteca, seleccione una opcion.")
        print("1) Agregar un libro.")
        print("2) Eliminar libro")
        print("3) Ordenar biblioteca.")
        print("4) Mostrar biblioteca.")
        print("5) Salir")

        opcion = input("Ingrese una opción: ")

        if opcion == "1":
            agregar_libro()
        elif opcion == "2":
            eliminar_libro()
        elif opcion == "3":
            ordenar_libros()
        elif opcion == "4":
            imprimir_libros()
        elif opcion == "5":
            print("Ha salido de la biblioteca.")
            break
        else:
            print("Opción inválida. Seleccione otra opcion.")

salida()
