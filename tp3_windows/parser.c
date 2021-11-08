#include "parser.h"

int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
	int retorno = -1;
	char id[150];
	char nombre[150];
	char horas[150];
	char sueldo[150];
	int respuesta;

	Employee* pEmpleado = NULL;

	if(pFile != NULL && pArrayListEmployee != NULL){
		fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horas,sueldo);
		printf("%s--%s--%s--%s\n",id,nombre,horas,sueldo);

		while(!feof(pFile)){
			fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horas,sueldo);
			printf("%s--%s--%s--%s\n",id,nombre,horas,sueldo);

			pEmpleado = employee_newParametros(id, nombre, horas, sueldo);

			if(pEmpleado != NULL){
				respuesta = ll_add(pArrayListEmployee, pEmpleado);

				if(respuesta == 0){

					retorno = 0;
				}
			}
		}
	}
    return retorno;
}

int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{
	int retorno = -1;
	Employee* pEmpleado;

	if(pFile != NULL && pArrayListEmployee != NULL){
		while(!feof(pFile)){
			fread(pEmpleado,sizeof(pEmpleado),1,pFile);
		}

	}
    return retorno;
}
