#include <stdio.h>

// Definición de la estructura
struct Producto
{
    char codigo[25];
    char nombreProd[50];
    char deseProd[50];
    int cantidad;
    float precioCompra;
};

// Función para ingresar los datos de un producto
void ingresarProducto(struct Producto *p)
{
    printf("Ingrese el código del producto: ");
    scanf("%s", p->codigo);

    printf("Ingrese el nombre del producto: ");
    scanf("%s", p->nombreProd);

    printf("Ingrese la descripción del producto: ");
    scanf("%s", p->deseProd);

    printf("Ingrese la cantidad del producto: ");
    scanf("%d", &p->cantidad);

    printf("Ingrese el precio de compra del producto: ");
    scanf("%f", &p->precioCompra);

    // Consumir el carácter de nueva línea pendiente en el búfer
    getchar();
}
// Función para imprimir los datos de un producto 
void imprimirProducto(const struct Producto *p)
{
    printf("\nInformación del producto: ");
    printf("Código: %s, ", p->codigo);
    printf("Nombre: %s, ", p->nombreProd);
    printf("Descripción: %s, ", p->deseProd);
    printf("Cantidad: %d, ", p->cantidad);
    printf("Precio de compra: %.2f\n", p->precioCompra);
}


int main()
{
    int opcion;
    struct Producto miProducto;

    do
    {
        // Menú de opciones
        printf("\nMenú de opciones:\n");
        printf("1. Ingresar producto\n");
        printf("2. Mostrar producto\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        // Realizar acciones según la opción seleccionada
        switch (opcion)
        {
        case 1:
            ingresarProducto(&miProducto);
            break;
        case 2:
            imprimirProducto(&miProducto);
            break;
        case 3:
            printf("Saliendo del programa. Adiós.\n");
            break;
        default:
            printf("Opción no válida. Intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}
