#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} Employee;

#endif // ARRAYEMPLOYEES_H_INCLUDED




/**
* \brief  To indicate that all position in the array are empty,
*         this function put the flag (isEmpty) in TRUE in all
*         position of the array
*
* \param  list Employee* Pointer to array of employees
* \param  len int Array length
*
* \return int Return (-1) if Error - (0) if Ok*/

int initEmployees(Employee* employees, int lengthEmployee);

/**
* \brief  add in a existing list of employees the values received as parameters
*         in the first empty position
*
* \param  list       employee*
* \param  len        int
* \param  id         int
* \param  name[]     char
* \param  lastName[] char
* \param  salary     float
* \param  sector     int
*
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
          free space]  - (0) if Ok*/
int addEmployee(Employee* employees, int lengthEmployee, int id, char name[],char lastName[],float salary,int sector);


/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
int findEmployeeById(Employee* employees, int lengthEmployee,int id);

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
*
* \param list Employee*
* \param len int
* \param id int
*
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
*         find a employee] - (0) if Ok*/

int removeEmployee(Employee* employees, int lengthEmployee);


/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployeesByName(Employee* employees, int lengthEmployee, int order);

/** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
int printEmployees(Employee* employees, int lengthEmployee);

/**--------------------------------------------------------------------------------------------------------*/


//Menu con las opciones del ABM
int Menu();
//Muestra el menu de reportes
int reportsMenu();
//Muestra el menu de las modificaciones a empleados
int modifyMenu();
//Busca id libre
int findEmptyIndex(Employee* employees, int lengthEmployee);
//Destina legajos a los empleados
int getRandomId(Employee* employees, int lengthEmployee, int* requestedRandomId);
//Modifica los datos de un empleado seleccionado
int modifyEmployee(Employee* employees, int lengthEmployee);
//Modifica el nombre de un empleado seleccionado
int modifyNameEmployee(Employee* employees, int lengthEmployee, int index);
//Modifica el apellido de un empleado seleccionado
int modifyLastNameEmployee(Employee* employees, int lengthEmployee, int index);
//Modifica el salario de un empleado seleccionado
int modifySalaryEmployee(Employee* employees, int lengthEmployee, int index);
//Modifica el sector de un empleado seleccionado
int modifySectorEmployee(Employee* employees, int lengthEmployee, int index);
//Muestra menu de reportes, pide que se elija una opcion
int reports(Employee* employees, int lengthEmployee);
//Muestra reporte del total de Salarios, Salario promedio y empleados que superan dicho promedio
void reportsSalary(Employee* employees, int lengthEmployee);
//Muestra menu de sectores, pide que se elija uno y lo guarda en un auxiliar, que luego reemplaza el idSector del empleado
int chooseSector(int* input,char message[],char eMessage[], int lowLimit, int hiLimit);
//Menu de ordenamiento de apellidos y sectores
int sortingMenu(Employee* employees, int lengthEmployee);
//Ejecuta un swap de parametros
void bubbleSorting(Employee* employees, int lengthEmployee, int i, int j);
