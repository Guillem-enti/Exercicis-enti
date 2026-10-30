#include <iostream>
#include <string>

int main()
{

	//definimos las variables donde guardamos lo que dice el usuario, la contraseña y el numero de intentos
	std::string contrasena = "hola184";
	std::string contrasenaUsuario = "";
	int intentos = 0;
	int pistas = 0;
	int rindo = 0;

	//pedimos un intento inicial para dar instrucciones
	std::cout << "Estas intentando entrar a mi caja. Rindete.\n" << "Introduzca la contrasena: ";
	std::cin >> contrasenaUsuario;

	//comprobamos si es correcto y si no es así damos instrucciones de pistas
	if (contrasenaUsuario == contrasena) {
		std::cout << "------------------------------\n";
		std::cout << "Has conseguido entrar, enhorabuena!\n" << "------------------------------\n";
		exit(0);
	}
	else {
		intentos++;
		std::cout << "------------------------------\n";
		std::cout << "Incorrecto. Si quieres una pista, escribe PISTA, o si te rindes escribe RINDO. La contrasena no contiene espacios, si pones alguno se contara como dos intentos en vez de uno, y si pides PISTA o RINDO sin ponerlo en mayusculas, se contara como intento y no como pista. Las reglas son las reglas.\n";
	}

	//seguimos pidiendo la contraseña
	std::cout << "------------------------------\n";
	std::cout << "Introduzca la contrasena: ";
	std::cin >> contrasenaUsuario;



	while(intentos < 8){

		if (contrasenaUsuario == contrasena && pistas > 3) {
			std::cout << "------------------------------\n";
			std::cout << "Has conseguido entrar, enhorabuena!\n" << "------------------------------\n";
			exit(0);
		}
		else if (contrasenaUsuario == contrasena && pistas < 3) {

			std::cout << "ES ESTA PERO NO ME HAS DEJADO DARTE TODAS MIS PISTAS\n" << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;

		}
		else if (contrasenaUsuario == "PISTA" && pistas == 0) {
			pistas++;
			std::cout << "La primera parte es el saludo mas comun y simple de la lengua espanola.\n" << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "PISTA" && pistas == 1) {
			pistas++;
			std::cout << "La segunda parte es un conjunto de tres numeros.\n" << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "PISTA" && pistas == 2) {
			pistas++;
			std::cout << "De los tres numeros, los primeros son la raiz cuadrada de 324.\n" << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "PISTA" && pistas == 3) {
			pistas++;
			std::cout << "El ultimo es el numero de pistas que has probado.\n" << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "PISTA" && pistas == 4) {
			pistas++;
			std::cout << "Tampoco te pases de pistas, ni que te vaya a dar la solucon asi de facil.\n" << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "PISTA" && pistas == 5) {
			std::cout << ">:(\n";
			std::cout << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "RINDO" && pistas <= 3) {
			std::cout << "Calma, que has probado con pocas pistas.\n" << "------------------------------\n" << "Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "RINDO" && pistas > 3 && rindo == 0) {
			rindo++;
			std::cout << "Vale, te lo digo. La contrasena empieza por hola y acaba por 184.\n" << "------------------------------\n" << "Introduce la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "RINDO" && rindo == 1) {
			rindo++;
			std::cout << "Ya te lo he dicho, no me hagas perder el tiempo.\n" << "------------------------------\n" << "Introduce la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "RINDO" && rindo == 2) {
			rindo++;
			std::cout << "No volvere a responder a tus lloros de que te rindes.\n" << "------------------------------\n" << "Introduce la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else if (contrasenaUsuario == "RINDO" && rindo == 3) {
			std::cout << "------------------------------\n" << "Introduce la contrasena: ";
			std::cin >> contrasenaUsuario;
		}
		else {
			intentos++;
			std::cout << "Has fallado, vuelve a probar.\n" << "------------------------------\n" <<"Introduzca la contrasena: ";
			std::cin >> contrasenaUsuario;
		}

	}

	std::cout << "Vaya, parece que has probado " << intentos << " veces, no creo que seas el propietario de esta caja. ADIOS. ";

	return 0;
}