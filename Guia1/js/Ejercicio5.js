/*
5. Una	casa	de	computación	paga	a	sus	empleados	un	sueldo	fijo	de	ARS15000	
más	una	comisión	del	5%	sobre	el	total	facturado	por	cada	empleado.	Hacer	un	
programa	para	ingresar	el	total	facturado	por	un	empleado	y	que	luego	calcule	
y	emita	por	pantalla	el	sueldo	total	a	cobrar	por	el	mismo.
*/

let basico = 15000
let facturado = prompt("Ingrese total facturado: ")
document.write("El sueldo total es igual a: ",basico  + (facturado * 0.05))