#include <stdio.h>

int main() {

    int opcion, op;
    float saldo = 50, saldoo = 20, saldooo = 80, agregar;
    op = 1;
    while (op == 1) {
        printf("\n\n\tBienvenido a la Facultad");
        printf("\nSeleccione el tipo de Vehiculo");
        printf("\n1. Automovil 50 pesos");
        printf("\n2. Motocicleta 20 pesos");
        printf("\n3. Camioneta 80");
        printf("\nDigite la opcion deseada:");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Por favor ingrese el efectivo:");
                scanf("%f", &agregar);
                if (agregar < saldo) {
                    printf("Efectivo insuficiente. Por favor ingrese la cantidad necesaria");
                    printf("\nVolver al menu de opciones");
                    printf("\n.1- Si\n.2- No\n\n Escribe 1 para Si y 2 Para No:");
                    scanf("%d", &op);
                } else {
                    saldo -= agregar;
                    printf("\n\nGracias por su visita. No se olvide de su cambio: %f", saldo);
                }

                break;
            case 2:
                printf("Por favor ingrese el efectivo:");
                scanf("%f", &agregar);
                if (agregar < saldoo) {
                    printf("Efectivo insuficiente. Por favor ingrese la cantidad necesaria");
                    printf("\nVolver al menu de opciones");
                    printf("\n.1- Si\n.2- No\n\n Escribe 1 para Si y 2 Para No:");
                    scanf("%d", &op);
                } else {
                    saldoo -= agregar;
                    printf("Gracias por su Visita. Por favor no olvide tomar su cambio: %f", saldoo);
                }

                break;
            case 3:
                printf("Por favaor ingrese el efectivo:");
                scanf("%f", &agregar);
                if (saldo < saldooo) {
                    printf("Efectivo insuficiente. Por favor ingrese la cantidad necesaria");
                    printf("\nVolver al menu de opciones");
                    printf("\n.1- Si\n.2- No\n\n Escribe 1 para Si y 2 Para No:");
                    scanf("%d", &op);
                } else {
                    saldooo -= agregar;
                    printf("Gracias por su visita. Recuerde tomar su cambio: %f", saldooo);
                }
                break;
        }
    }
printf("Gracias por su visita");
    return 0;
}