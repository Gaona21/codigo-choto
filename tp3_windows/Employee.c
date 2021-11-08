#include "Employee.h"

Employee* employee_new(){
	Employee* pAux = NULL;
	pAux = malloc(sizeof(Employee*));
	return pAux;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldo){
	Employee* pAux = NULL;

	pAux = employee_new();
	if(pAux != NULL){
		pAux->id = atoi(idStr);
		strncpy(pAux->nombre,nombreStr,sizeof(pAux->nombre));
		pAux->horasTrabajadas = atoi(horasTrabajadasStr);
		pAux->sueldo = atoi(sueldo);
	}
	return pAux;
}

int employee_setId(Employee* this,int id){
	int retorno = -1;

	if(this!=NULL && id>0){
		this->id = id;
		retorno = 0;
	}

	return retorno;
}

int employee_getId(Employee* this,int* id){
	int retorno = -1;

	if(this!=NULL && id!=NULL){
		*id=this->id;
		retorno = 0;
	}
	return retorno;
}

int employee_setNombre(Employee* this,char* nombre){
	int retorno = -1;

	if(this!=NULL && nombre!=NULL){
		strncpy(this->nombre,nombre,sizeof(this->nombre));
		retorno = 0;
	}
	return retorno;
}

int employee_getNombre(Employee* this,char* nombre){
	int retorno = -1;

	if(this!=NULL && nombre!=NULL){
		strncpy(nombre,this->nombre,sizeof(this->nombre));
		retorno = 0;
	}
	return retorno;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas){
	int retorno = -1;

	if(this!=NULL && horasTrabajadas>=0){
		this->horasTrabajadas = horasTrabajadas;
		retorno = 0;
	}
	return retorno;
}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas){
	int retorno = -1;

	if(this!=NULL && horasTrabajadas>=0){
		*horasTrabajadas = this->horasTrabajadas;
		retorno = 0;
	}
	return retorno;
}

int employee_setSueldo(Employee* this,int sueldo){
	int retorno = -1;

	if(this!=NULL && sueldo>=0){
			this->sueldo = sueldo;
			retorno = 0;
	}
	return retorno;
}

int employee_getSueldo(Employee* this,int* sueldo){
	int retorno = -1;

	if(this!=NULL && sueldo>=0){
			*sueldo = this->sueldo;
			retorno = 0;
	}
	return retorno;
}




