//Saúl Hernández - 21310395
// 23/ Marzo / 2022

#include<iostream>
#include<string.h>

using namespace std;

//Clase padre
class estudianteProfesionista {
	//Atributos
private:
	char nombreAlumno[20];
	char registroAlumno[10];
	char encargadoDivision[25];
	int cantidadDeMaterias;
	float promedioAlumno;

	//Métodos
public:
	estudianteProfesionista(char[], char[], char[], int, float);
	void ingresarDatos(char[], char[], char[], int, float);
	void mostrarDatos();
	float promedioNecesarioParaPasar();
};

estudianteProfesionista::estudianteProfesionista(char _nombreAlumno[], char _registroAlumno[], char _encargadoDivision[], int _cantidadDeMaterias, float _promedioAlumno) {
	strcpy_s(nombreAlumno, _nombreAlumno);
	strcpy_s(registroAlumno, _registroAlumno);
	strcpy_s(encargadoDivision, _encargadoDivision);
	cantidadDeMaterias = _cantidadDeMaterias;
	promedioAlumno = _promedioAlumno;
}

void estudianteProfesionista::ingresarDatos(char _nombreAlumno[], char _registroAlumno[], char _encargadoDivision[], int _cantidadDeMaterias, float _promedioAlumno) {
	strcpy_s(nombreAlumno, _nombreAlumno);
	strcpy_s(registroAlumno, _registroAlumno);
	strcpy_s(encargadoDivision, _encargadoDivision);
	cantidadDeMaterias = _cantidadDeMaterias;
	promedioAlumno = _promedioAlumno;
}

void estudianteProfesionista::mostrarDatos() {
	cout << "Nombre del alumno: " << nombreAlumno << endl;
	cout << "Registro del alumno: " << registroAlumno << endl;
	cout << "Encargado de la division: " << encargadoDivision << endl;
	cout << "Cantidad de materias del alumno: " << cantidadDeMaterias << endl;
	cout << "Promedio del alumno: " << promedioAlumno << endl;
}

float estudianteProfesionista::promedioNecesarioParaPasar() {
	float promedioNecesario;

	promedioNecesario = promedioAlumno - 140;

	return promedioNecesario;
}

//Clase hijo 1 - Ingeniero informatico
class ingenieroInformatico : estudianteProfesionista {
private:
	int cantidadDeLenguajesAprendidos;
	bool metodosAgiles;

public:
	ingenieroInformatico(char[], char[], char[], int, float, int, bool);
	void chistesInformaticos();
	void ingresarDatosEspecificos(int, bool);
	void mostrarDatosEspecificos();
};

ingenieroInformatico::ingenieroInformatico(char _nombreAlumno[], char _registroAlumno[], char _encargadoDivision[], int _cantidadDeMaterias, float _promedioAlumno, int _cantidadDeLenguajesAprendidor, bool _metodosAgiles) : estudianteProfesionista(_nombreAlumno, _registroAlumno, _encargadoDivision, _cantidadDeMaterias, _promedioAlumno) {
	cantidadDeLenguajesAprendidos = _cantidadDeLenguajesAprendidor;
	metodosAgiles = _metodosAgiles;
}

void ingenieroInformatico::ingresarDatosEspecificos(int _cantidadDeLenguajesAprendidor, bool _metodosAgiles) {
	mostrarDatos();
	cantidadDeLenguajesAprendidos = _cantidadDeLenguajesAprendidor;
	metodosAgiles = _metodosAgiles;
}

void ingenieroInformatico::mostrarDatosEspecificos() {
	mostrarDatos();
	cout << "Cantidad de lenguajes de programacion aprendidos: " << cantidadDeLenguajesAprendidos << endl;
	cout << "Sabe metodos agiles?: " << metodosAgiles << endl;
}

//Clase hijo 2 - Director de cine
class directorDeCine : estudianteProfesionista {
private:
	int cantidadDeNarrativasAprendidas;
	bool politicamenteCorrecto;

public:
	directorDeCine(char[], char[], char[], int, float, int, bool);
	void chistesCinematograficos();
	void ingresarDatosEspecificos(int, bool);
	void mostrarDatosEspecificos();
};

directorDeCine::directorDeCine(char _nombreAlumno[], char _registroAlumno[], char _encargadoDivision[], int _cantidadDeMaterias, float _promedioAlumno, int _cantidadDeNarrativasAprendidas, bool _politicamenteCorrecto) : estudianteProfesionista(_nombreAlumno, _registroAlumno, _encargadoDivision, _cantidadDeMaterias, _promedioAlumno) {
	cantidadDeNarrativasAprendidas = _cantidadDeNarrativasAprendidas;
	politicamenteCorrecto = _politicamenteCorrecto;
}

void directorDeCine::ingresarDatosEspecificos(int _cantidadDeNarrativasAprendidas, bool _politicamenteCorrecto) {
	mostrarDatos();
	cantidadDeNarrativasAprendidas = _cantidadDeNarrativasAprendidas;
	politicamenteCorrecto = _politicamenteCorrecto;
}

void directorDeCine::mostrarDatosEspecificos() {
	mostrarDatos();
	cout << "Cantidad de narrativas aprendidas: " << cantidadDeNarrativasAprendidas << endl;
	cout << "Sus obras seran politicamente correctas?: " << politicamenteCorrecto << endl;
}

//Clase hijo 3 - Médico cirujano
class medicoCirujano : estudianteProfesionista {
private:
	int cantidadDeLibrosLeidos;
	bool haHechoPracticas;

public:
	medicoCirujano(char[], char[], char[], int, float, int, bool);
	void chistesMedicos();
	void ingresarDatosEspecificos(int, bool);
	void mostrarDatosEspecificos();
};

medicoCirujano::medicoCirujano(char _nombreAlumno[], char _registroAlumno[], char _encargadoDivision[], int _cantidadDeMaterias, float _promedioAlumno, int _cantidadDeLibrosLeidos, bool _haHechoPracticas) : estudianteProfesionista(_nombreAlumno, _registroAlumno, _encargadoDivision, _cantidadDeMaterias, _promedioAlumno) {
	cantidadDeLibrosLeidos = _cantidadDeLibrosLeidos;
	haHechoPracticas = _haHechoPracticas;
}

void medicoCirujano::ingresarDatosEspecificos(int _cantidadDeLibrosLeidos, bool _haHechoPracticas) {
	mostrarDatos();
	cantidadDeLibrosLeidos = _cantidadDeLibrosLeidos;
	haHechoPracticas = _haHechoPracticas;
}

void medicoCirujano::mostrarDatosEspecificos() {
	mostrarDatos();
	cout << "Cantidad de libros de medicina que ha leido: " << cantidadDeLibrosLeidos << endl;
	cout << "Ya hizo su guardia o practicas?: " << haHechoPracticas << endl;
}

//Clase hijo 4 - Filósofo
class licenciadoEnFilosofia : estudianteProfesionista {
private:
	int corrientesFilosoficasAprendidas;
	bool esDeterminista;

public:
	licenciadoEnFilosofia(char[], char[], char[], int, float, int, bool);
	void chistesFilosoficos();
	void ingresarDatosEspecificos(int, bool);
	void mostrarDatosEspecificos();
};

licenciadoEnFilosofia::licenciadoEnFilosofia(char _nombreAlumno[], char _registroAlumno[], char _encargadoDivision[], int _cantidadDeMaterias, float _promedioAlumno, int _corrientesFilosoficasAprendidas, bool _esDeterminista) : estudianteProfesionista(_nombreAlumno, _registroAlumno, _encargadoDivision, _cantidadDeMaterias, _promedioAlumno) {
	corrientesFilosoficasAprendidas = _corrientesFilosoficasAprendidas;
	esDeterminista = _esDeterminista;
}

void licenciadoEnFilosofia::ingresarDatosEspecificos(int _corrientesFilosoficasAprendidas, bool _esDeterminista) {
	mostrarDatos();
	corrientesFilosoficasAprendidas = _corrientesFilosoficasAprendidas;
	esDeterminista = _esDeterminista;
}

void licenciadoEnFilosofia::mostrarDatosEspecificos() {
	mostrarDatos();
	cout << "Cuantas corrientes filosoficas sabe?: " << corrientesFilosoficasAprendidas << endl;
	cout << "Cree que el universo es determinista?: " << esDeterminista << endl;
}

//Clase hijo 5 - Traductor
class licenciadoEnLenguas : estudianteProfesionista {
private:
	int cantidadDeLenguasAprendidas;
	bool examenLenguaNativa;

public:
	licenciadoEnLenguas(char[], char[], char[], int, float, int, bool);
	void chistesDeIdiomas();
	void ingresarDatosEspecificos(int, bool);
	void mostrarDatosEspecificos();
};

licenciadoEnLenguas::licenciadoEnLenguas(char _nombreAlumno[], char _registroAlumno[], char _encargadoDivision[], int _cantidadDeMaterias, float _promedioAlumno, int _cantidadDeLenguasAprendidas, bool _examenLenguaNativa) : estudianteProfesionista(_nombreAlumno, _registroAlumno, _encargadoDivision, _cantidadDeMaterias, _promedioAlumno) {
	cantidadDeLenguasAprendidas = _cantidadDeLenguasAprendidas;
	examenLenguaNativa = _examenLenguaNativa;
}

void licenciadoEnLenguas::ingresarDatosEspecificos(int _cantidadDeLenguasAprendidas, bool _examenLenguaNativa) {
	mostrarDatos();
	cantidadDeLenguasAprendidas = _cantidadDeLenguasAprendidas;
	examenLenguaNativa = _examenLenguaNativa;
}

void licenciadoEnLenguas::mostrarDatosEspecificos() {
	mostrarDatos();
	cout << "Cantidad de lenguas aprendidas: " << cantidadDeLenguasAprendidas << endl;
	cout << "Paso el examen de lengua nativa?: " << examenLenguaNativa << endl;
}

int main() {

	ingenieroInformatico Alumno1 = ingenieroInformatico("Saul Hernandez", "21310395", "Dr.Perez", 8, 95.3, 7, true);
	Alumno1.mostrarDatosEspecificos();
	cout << "////////////////////////////////////////////////////////////////////" << endl;
	directorDeCine Alumno2 = directorDeCine("Alicia Ibañez", "21300598", "Alfonso Cuaron", 5, 89.3, 3, false);
	Alumno2.mostrarDatosEspecificos();
	cout << "////////////////////////////////////////////////////////////////////" << endl;
	medicoCirujano Alumno3 = medicoCirujano("Maria Gutierrez", "21310875", "Dr.Carrillo", 10, 98.3, 108, true);
	Alumno3.mostrarDatosEspecificos();
	cout << "////////////////////////////////////////////////////////////////////" << endl;
	licenciadoEnFilosofia Alumno4 = licenciadoEnFilosofia("Alberto Diaz", "21310401", "PdH.Becerra", 6, 79.4, 5, true);
	Alumno4.mostrarDatosEspecificos();
	cout << "////////////////////////////////////////////////////////////////////" << endl;
	licenciadoEnLenguas Alumno5 = licenciadoEnLenguas("Laura Enriquez", "21290614", "Mtra.Sanchez", 6, 97.4, 4, true);
	Alumno5.mostrarDatosEspecificos();
	cout << "////////////////////////////////////////////////////////////////////" << endl;

	return 0;
}