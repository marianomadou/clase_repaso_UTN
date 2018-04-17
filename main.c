#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//CODIGO, DESCRIPCION, STOCK PRECIO COSTO
#define TAM 2

typedef struct
{
    int codigo;
    char descripcion[30];
    int stock;
    float precioCosto;

}sProducto;

void funcionMostrarProducto (sProducto);
void funcionMostrarInventario(sProducto);

sProducto cargarProducto ();


int main(void)
{
    int i;

    sProducto unProducto;
    sProducto inventario[10];

    for(i=0;i<TAM;i++)
    {
        inventario[i]=cargarProducto();
    }


    for(i=0;i<TAM;i++)
    {
        inventario[i]=cargarProducto();
    }



    //funcionMostrarProducto(inventario[0]);

    //funcionMostrarProducto(inventario[1]);

  /*  otroProducto=unProducto;

     printf("codigo: %d  descripcion: %s  stock: %d precio Costo: %.2f\n", otroProducto.codigo, otroProducto.descripcion, otroProducto.stock, otroProducto.precioCosto );

     printf("%d bytes", sizeof(sProducto));*/

    return 0;
}

void funcionMostrarProducto (sProducto unProducto)
{

    printf("codigo: %d  descripcion: %s  stock: %d precio Costo: %.2f\n", unProducto.codigo, unProducto.descripcion, unProducto.stock, unProducto.precioCosto );

}

sProducto cargarProducto ()
{
    sProducto unProducto;

    printf("Ingrese codigo: \n");
    scanf("%d", &unProducto.codigo);
    fflush(stdin);
    printf("Ingrese descripcion: \n");
    gets(unProducto.descripcion);
    printf("Ingrese stock: \n");
    scanf("%d", &unProducto.stock);
    printf("Ingrese precio costo: \n");
    scanf("%f", &unProducto.precioCosto);

    return unProducto;
}

funcionMostrarInventario(funcionMostrarProducto)
