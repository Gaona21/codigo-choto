#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"


/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



int main()
{
	setbuf(stdout,NULL);
    int option = 0;

    LinkedList* listaEmpleados = ll_newLinkedList();

    controller_loadFromText("data.csv",listaEmpleados);

    printf("no se que onda\n");
    controller_ListEmployee(listaEmpleados);

    /*do{
    	getNumero(&option,"Ingrese una opcio:\n");
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                len = ll_len(listaEmpleados);
                printf("cantidad: %d",len);
                break;
            case 6:
            	controller_ListEmployee(listaEmpleados);
            	break;
        }
    }while(option != 10);

    FILE* pArchivo = NULL;

    pArchivo = fopen("data.csv","r");
    if(pArchivo != NULL){
    	option = parser_EmployeeFromText(pArchivo, listaEmpleados);
    }
    option = ll_len(listaEmpleados);
    printf("cantidad: %d",option);*/
    return 0;
}

