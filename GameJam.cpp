#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace System;
using namespace std;

int a, b, c;
int pt1, pt2, pt3;
char tecla = 0;
char tecla_seleccion = 0;
#define M_ALTO_0 40			   
#define M_ANCHO_0 170			   

#define M_ALTO_1 32			   
#define M_ANCHO_1 90			   

#define M_ALTO_2 41   
#define M_ANCHO_2 130



#define M_ALTO_5 42	   
#define M_ANCHO_5 82

#define M_ALTO_6 43	   
#define M_ANCHO_6 128

#define M_ALTO_7 24	   
#define M_ANCHO_7 110

void Tam_Console_0() {
	Console::WindowHeight = M_ALTO_0;
	Console::WindowWidth = M_ANCHO_0;
	Console::CursorVisible = false;
	Console::Title = "UPC: ´exigete, inova´";
}
void Tam_Console_1() {
	Console::WindowHeight = M_ALTO_1;
	Console::WindowWidth = M_ANCHO_1;
	Console::CursorVisible = false;
	Console::Title = "Instrucciones ;)";
}
void Tam_Console_2() {
	Console::WindowHeight = M_ALTO_2;
	Console::WindowWidth = M_ANCHO_2;
	Console::CursorVisible = false;
	Console::Title = "Copa Caos";
}

void Tam_Console_5() {
	Console::WindowHeight = M_ALTO_5;
	Console::WindowWidth = M_ANCHO_5;
	Console::CursorVisible = false;
	Console::Title = "by UPC team!";
}
void Tam_Console_6() {
	Console::WindowHeight = M_ALTO_6;
	Console::WindowWidth = M_ANCHO_6;
	Console::CursorVisible = false;
	Console::Title = "by UPC team!";
}

void Tam_Console_7() {
	Console::WindowHeight = M_ALTO_7;
	Console::WindowWidth = M_ANCHO_7;
	Console::CursorVisible = false;
	Console::Title = "Resultados!";
}

void UPC() {
	int matriz[40][40] =
	{ {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	};

	system("color 7C");
	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 40; j++) {
			if (matriz[i][j] == 1) {
				Console::ForegroundColor = ConsoleColor::Red;
				Console::SetCursorPosition(j + 60, i - 3);
				printf("*");

			}
		}
	}
	Console::SetCursorPosition(71, 35); cout << " exigete, innova";
	Sleep(5000);

	fflush(stdin);
	system("color 0F");
	system("cls");
}
void f0_Instrucciones() {
	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(25, 0);
	cout << "-----------------------------------------" << endl;

	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(38, 1);
	cout << "INSTRUCCIONES" << endl;

	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(25, 2);
	cout << "-----------------------------------------" << endl;

	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(3, 4);
	cout << "1. Selecciona tu jugador en el menu de personajes." << endl;
	Console::SetCursorPosition(3, 5);
	cout << "2. La tecla para que tu personaje avance es la tecla ESPACIO." << endl;
	Console::SetCursorPosition(3, 6);
	cout << "3. En la partida los baches de color rojo haran que tu personaje reduzca " << endl;
	Console::SetCursorPosition(3, 7);
	cout << "   su velocidad durante unos segundos." << endl;
	Console::SetCursorPosition(3, 8);
	cout << "4. En la partida los signos de interrogacion haran que tu personaje haga" << endl;
	Console::SetCursorPosition(3, 9);
	cout << "   alguna cosa randoms (Volver al incio, avansar mas rapido,volver hacia atras,etc). " << endl;
	Console::SetCursorPosition(3, 10);
	cout << "5. El ganador sera el que acumule mas puntos de las 4 partidas juntas, Los 3 primeros" << endl;
	Console::SetCursorPosition(3, 11);
	cout << "   puestos saldran en el podio con sus respectivas puntuaciones." << endl;


}
void f0_menu_trofeo(char& tecla) {
	int Mtrofeo[18][28] = {
		/*
		COPA CAOS
by UPC team
[insertar la llamita de la UPC]
		*/

	 { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0 },
	 { 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0 },
	 { 0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0 },
	 { 0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0 },
	 { 0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0 },
	 { 0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,0 },
	 { 0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0 },
	 { 0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0 } };

	for (int i = 0; i < 18; i++) {
		for (int j = 0; j < 28; j++) {
			if (Mtrofeo[i][j] == 1) {
				Console::ForegroundColor = ConsoleColor::DarkCyan;
				Console::SetCursorPosition(j + 30, i + 12);
				printf("#");

			}
		}
	}

	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(28, 30); cout << " Presionar Enter para continuar ";
	while (1) {
		if (_kbhit()) {
			tecla = _getch();
			if (tecla == 13) {
				tecla = 0;
				break;
			}

		}
	}

	fflush(stdin);
	system("color 0F");
	system("cls");

}

void f1_menu() {
	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(22, 2);
	Beep(493, 350);
	cout << " _  _   _______  _______  _______  _______    _______  _______  _______  _______  _  _  " << endl;
	Console::SetCursorPosition(22, 3);
	Beep(659, 500);
	cout << "| || | |       ||       ||       ||   _   |  |       ||   _   ||       ||       || || | " << endl;
	Console::SetCursorPosition(22, 4);
	Beep(783, 250);
	cout << "|_||_| |       ||   _   ||    _  ||  |_|  |  |       ||  |_|  ||   _   ||  _____||_||_| " << endl;
	Console::SetCursorPosition(22, 5);
	Beep(740, 330);
	cout << "       |       ||  | |  ||   |_| ||       |  |       ||       ||  | |  || |_____        " << endl;
	Console::SetCursorPosition(22, 6);
	Beep(659, 440);

	cout << "       |      _||  |_|  ||    ___||       |  |      _||       ||  |_|  ||_____  |       " << endl;
	Console::SetCursorPosition(22, 7);
	Beep(987, 400);


	cout << "       |     |_ |       ||   |    |   _   |  |     |_ |   _   ||       | _____| |       " << endl;
	Console::SetCursorPosition(22, 8);
	Beep(880, 500);
	cout << "       |_______||_______||___|    |__| |__|  |_______||__| |__||_______||_______|       " << endl;
	Console::SetCursorPosition(22, 9);
	Beep(740, 450);
	Sleep(60);

}
void f1_menu_seleccion() {
	Console::ForegroundColor = ConsoleColor::Green;
	Console::SetCursorPosition(45, 28);
	Beep(659, 350);
	cout << "Presione un numero para seleccionar su vehiculo:" << endl;

	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(10, 30);
	Beep(783, 400);
	cout << "()=()";
	Console::SetCursorPosition(10, 31);
	Beep(740, 300);
	cout << "(^;^)";
	Console::SetCursorPosition(10, 32);
	Beep(659, 450);
	cout << "C   C";
	Console::SetCursorPosition(10, 33);
	Sleep(40);
	cout << "()_()";


	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(30, 30);
	Beep(659, 300);
	cout << "        ";
	Console::SetCursorPosition(30, 31);
	Beep(493, 500);

	cout << "  _.-.___\\\\";
	Console::SetCursorPosition(30, 32);
	Sleep(70);

	cout << "|  _      _`-.";
	Console::SetCursorPosition(30, 33);
	Beep(493, 350);

	cout << " '-(_)----(_)--`";


	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(61, 31);
	Beep(659, 500);

	cout << "    (@_";
	Console::SetCursorPosition(61, 32);
	Beep(783, 250);

	cout << "\\\\\\__\\";
	Console::SetCursorPosition(61, 33);
	Beep(740, 330);

	cout << " < _____)";
	Console::SetCursorPosition(61, 34);
	Beep(659, 440);

	cout << "      ";



	Console::ForegroundColor = ConsoleColor::White;


	Console::SetCursorPosition(84, 30);
	Beep(987, 400);
	cout << "____";
	Beep(1174, 300);
	Console::SetCursorPosition(84, 31);
	Beep(1174, 300);
	cout << "|DD|____T_";
	Console::SetCursorPosition(84, 32);
	Beep(1046, 300);
	cout << "|_ |_____|<";
	Console::SetCursorPosition(84, 33);
	Beep(880, 300);
	cout << "  @-@-@-oo\\";


	Console::ForegroundColor = ConsoleColor::White;





	Beep(880, 300);

	Console::SetCursorPosition(104, 31);
	Beep(1046, 300);
	cout << "   -----|-----";
	Beep(987, 400);
	Console::SetCursorPosition(104, 32);
	Beep(1174, 300);
	cout << "*>=====[_]L)";
	Console::SetCursorPosition(104, 33);
	Beep(1174, 300);
	cout << "      -'-`-";
	Beep(1046, 300);




	Console::ForegroundColor = ConsoleColor::Magenta;
	Console::SetCursorPosition(95, 14);
	Beep(987, 300);
	cout << "Hecho por:";
	Console::SetCursorPosition(95, 15);
	Console::ForegroundColor = ConsoleColor::Yellow;
	Beep(987, 300);
	cout << "Christian Sanchez";
	Console::SetCursorPosition(95, 16);
	Beep(659, 300);
	cout << "Omar Rivera Ticllacuri";
	Console::SetCursorPosition(95, 17);
	Beep(783, 300);
	cout << "Stephano Espinoza Cueva";
	Console::SetCursorPosition(95, 18);
	Beep(659, 400);
	cout << "Andre Chipana Ríos";

}
void f1_nombres() {

	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(13, 12);
	Beep(783, 200);
	cout << "Sede: San Isidro								" << endl;
	Console::SetCursorPosition(13, 13);
	Beep(987, 200);
	Console::ForegroundColor = ConsoleColor::Yellow;
	cout << "Seccion: WX1A								" << endl;
	Console::SetCursorPosition(13, 14);

	Console::ForegroundColor = ConsoleColor::Cyan;
	Beep(783, 200);
	cout << "Profesor:" << endl;
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(13, 15);
	cout << "Javier Ulises Rosales\n";
	Console::SetCursorPosition(13, 16);
	cout << "Rosales Huamanchumo\n";
	Console::SetCursorPosition(13, 17);
	Console::ForegroundColor = ConsoleColor::Cyan;
	Beep(987, 200);
	cout << "Profesor: " << endl;
	Console::SetCursorPosition(13, 18);
	Console::ForegroundColor = ConsoleColor::Yellow;
	cout << "Willy Gustavo\n";
	Console::SetCursorPosition(13, 19);
	cout << "Ugarte Rojas\n";
	Console::SetCursorPosition(13, 20);
	Console::ForegroundColor = ConsoleColor::Cyan;
	Beep(783, 200);
	cout << "Director:" << endl;
	Console::SetCursorPosition(13, 21);
	Console::ForegroundColor = ConsoleColor::Yellow;
	cout << "Jimmy Alexander\n";
	Console::SetCursorPosition(13, 22);
	cout << "Armas Aguirre\n";
	Console::SetCursorPosition(13, 23);
	Console::ForegroundColor = ConsoleColor::Cyan;
	Beep(1046, 200);
	cout << "Coordinador:" << endl;
	Console::SetCursorPosition(13, 24);
	Console::ForegroundColor = ConsoleColor::Yellow;
	cout << "Edson Duilio\n";
	Console::SetCursorPosition(13, 25);
	cout << "Mendiolaza Cornejo\n";
	Console::SetCursorPosition(13, 26);

}
void f1_menu_trofeo(/*char& tecla*/) {
	int Mtrofeo[18][28] = {
		/*
		COPA CAOS
by UPC team
[insertar la llamita de la UPC]
		*/

	 { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0 },
	 { 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0 },
	 { 0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0 },
	 { 0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0 },
	 { 0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0 },
	 { 0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,0 },
	 { 0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0 },
	 { 0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0 },
	 { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0 } };

	for (int i = 0; i < 18; i++) {
		for (int j = 0; j < 28; j++) {
			if (Mtrofeo[i][j] == 1) {
				Console::ForegroundColor = ConsoleColor::Yellow;
				Console::SetCursorPosition(j + 53, i + 10);
				printf("#");

			}
		}
	}
	/*
	Console::SetCursorPosition(24, 36); cout << " ";
	while (1) {
		if (_kbhit()) {
			tecla = _getch();
			if (tecla == 13) {
				tecla = 0;
				break;
			}

		}
	}

	fflush(stdin);
	system("color 0F");
	system("cls");
	*/
}
int f1_seleccion_vehiculos(char& tecla_seleccion) {
	int x;
	while (1) {
		if (_kbhit()) {
			tecla_seleccion = _getch();
			if (tecla_seleccion == 49) {
				Console::ForegroundColor = ConsoleColor::Red;
				Console::SetCursorPosition(10, 30);
				cout << "()=()";
				Console::SetCursorPosition(10, 31);
				cout << "(^;^)";
				Console::SetCursorPosition(10, 32);
				cout << "C   C";
				Console::SetCursorPosition(10, 33);
				cout << "()_()";

				Beep(480, 200);
				Beep(1568, 200);
				Beep(1568, 200);
				Beep(1568, 200);

				Console::ForegroundColor = ConsoleColor::Magenta;
				Console::SetCursorPosition(10, 30);
				cout << "()=()";
				Console::SetCursorPosition(10, 31);
				cout << "(^;^)";
				Console::SetCursorPosition(10, 32);
				cout << "C   C";
				Console::SetCursorPosition(10, 33);
				cout << "()_()";

				Beep(739.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);
				Beep(369.99, 200);
				Console::ForegroundColor = ConsoleColor::Yellow;
				Console::SetCursorPosition(10, 30);
				cout << "()=()";
				Console::SetCursorPosition(10, 31);
				cout << "(^;^)";
				Console::SetCursorPosition(10, 32);
				cout << "C   C";
				Console::SetCursorPosition(10, 33);
				cout << "()_()";

				Beep(392, 200);

				Beep(369.99, 200);

				Beep(392, 200);
				Console::ForegroundColor = ConsoleColor::Red;
				Console::SetCursorPosition(10, 30);
				cout << "()=()";
				Console::SetCursorPosition(10, 31);
				cout << "(^;^)";
				Console::SetCursorPosition(10, 32);
				cout << "C   C";
				Console::SetCursorPosition(10, 33);
				cout << "()_()";


				Beep(392, 400);

				Beep(196, 400);

				tecla_seleccion = 0;
				x = 0;
				break;
			}
			if (tecla_seleccion == 50) {
				Console::ForegroundColor = ConsoleColor::Green;
				Console::SetCursorPosition(30, 30);
				cout << "        ";
				Console::SetCursorPosition(30, 31);
				cout << "  _.-.___\\\\";
				Console::SetCursorPosition(30, 32);
				cout << "|  _      _`-.";
				Console::SetCursorPosition(30, 33);
				cout << " '-(_)----(_)--`";

				Beep(480, 200);

				Beep(1568, 200);

				Beep(1568, 200);

				Beep(1568, 200);

				Console::ForegroundColor = ConsoleColor::Cyan;
				Console::SetCursorPosition(30, 30);
				cout << "        ";
				Console::SetCursorPosition(30, 31);
				cout << "  _.-.___\\\\";
				Console::SetCursorPosition(30, 32);
				cout << "|  _      _`-.";
				Console::SetCursorPosition(30, 33);
				cout << " '-(_)----(_)--`";

				Beep(739.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Console::ForegroundColor = ConsoleColor::Red;
				Console::SetCursorPosition(30, 30);
				cout << "        ";
				Console::SetCursorPosition(30, 31);
				cout << "  _.-.___\\\\";
				Console::SetCursorPosition(30, 32);
				cout << "|  _      _`-.";
				Console::SetCursorPosition(30, 33);
				cout << " '-(_)----(_)--`";
				Beep(369.99, 200);


				Beep(392, 200);

				Beep(369.99, 200);

				Console::ForegroundColor = ConsoleColor::Green;
				Console::SetCursorPosition(30, 30);
				cout << "        ";
				Console::SetCursorPosition(30, 31);
				cout << "  _.-.___\\\\";
				Console::SetCursorPosition(30, 32);
				cout << "|  _      _`-.";
				Console::SetCursorPosition(30, 33);
				cout << " '-(_)----(_)--`";
				Beep(392, 200);

				Beep(392, 400);

				Beep(196, 400);
				tecla_seleccion = 0;
				x = 1;
				break;
			}
			if (tecla_seleccion == 51) {
				Console::ForegroundColor = ConsoleColor::Blue;
				Console::SetCursorPosition(61, 31);
				cout << "    (@_";
				Console::SetCursorPosition(61, 32);
				cout << "\\\\\\__\\";
				Console::SetCursorPosition(61, 33);
				cout << " < _____)";
				Console::SetCursorPosition(61, 34);
				cout << "      ";
				Beep(480, 200);

				Beep(1568, 200);

				Beep(1568, 200);

				Beep(1568, 200);
				Console::ForegroundColor = ConsoleColor::Yellow;
				Console::SetCursorPosition(61, 31);
				cout << "    (@_";
				Console::SetCursorPosition(61, 32);
				cout << "\\\\\\__\\";
				Console::SetCursorPosition(61, 33);
				cout << " < _____)";
				Console::SetCursorPosition(61, 34);
				cout << "      ";


				Beep(739.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);
				Console::ForegroundColor = ConsoleColor::DarkRed;
				Console::SetCursorPosition(61, 31);
				cout << "    (@_";
				Console::SetCursorPosition(61, 32);
				cout << "\\\\\\__\\";
				Console::SetCursorPosition(61, 33);
				cout << " < _____)";
				Console::SetCursorPosition(61, 34);
				cout << "      ";

				Beep(369.99, 200);

				Beep(392, 200);

				Beep(369.99, 200);

				Console::ForegroundColor = ConsoleColor::Blue;
				Console::SetCursorPosition(61, 31);
				cout << "    (@_";
				Console::SetCursorPosition(61, 32);
				cout << "\\\\\\__\\";
				Console::SetCursorPosition(61, 33);
				cout << " < _____)";
				Console::SetCursorPosition(61, 34);
				cout << "      ";

				Beep(392, 200);

				Beep(392, 400);

				Beep(196, 400);
				tecla_seleccion = 0;
				x = 2;
				break;
			}
			if (tecla_seleccion == 52) {
				Console::ForegroundColor = ConsoleColor::Yellow;
				Console::SetCursorPosition(84, 30);
				cout << "____";
				Console::SetCursorPosition(84, 31);
				cout << "|DD|____T_";
				Console::SetCursorPosition(84, 32);
				cout << "|_ |_____|<";
				Console::SetCursorPosition(84, 33);
				cout << "  @-@-@-oo\\";
				Beep(480, 200);

				Beep(1568, 200);

				Beep(1568, 200);

				Beep(1568, 200);
				Console::ForegroundColor = ConsoleColor::Green;
				Console::SetCursorPosition(84, 30);
				cout << "____";
				Console::SetCursorPosition(84, 31);
				cout << "|DD|____T_";
				Console::SetCursorPosition(84, 32);
				cout << "|_ |_____|<";
				Console::SetCursorPosition(84, 33);
				cout << "  @-@-@-oo\\";


				Beep(739.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Console::ForegroundColor = ConsoleColor::Cyan;
				Console::SetCursorPosition(84, 30);
				cout << "____";
				Console::SetCursorPosition(84, 31);
				cout << "|DD|____T_";
				Console::SetCursorPosition(84, 32);
				cout << "|_ |_____|<";
				Console::SetCursorPosition(84, 33);
				cout << "  @-@-@-oo\\";
				Beep(369.99, 200);

				Beep(392, 200);

				Beep(369.99, 200);

				Beep(392, 200);
				Console::ForegroundColor = ConsoleColor::Yellow;
				Console::SetCursorPosition(84, 30);
				cout << "____";
				Console::SetCursorPosition(84, 31);
				cout << "|DD|____T_";
				Console::SetCursorPosition(84, 32);
				cout << "|_ |_____|<";
				Console::SetCursorPosition(84, 33);
				cout << "  @-@-@-oo\\";
				Beep(392, 400);

				Beep(196, 400);
				tecla_seleccion = 0;
				x = 3;
				break;
			}
			if (tecla_seleccion == 53) {
				Console::ForegroundColor = ConsoleColor::Magenta;

				Console::SetCursorPosition(104, 31);
				cout << "   -----|-----";
				Console::SetCursorPosition(104, 32);
				cout << "*>=====[_]L)";
				Console::SetCursorPosition(104, 33);
				cout << "      -'-`-";
				Beep(480, 200);

				Beep(1568, 200);

				Beep(1568, 200);

				Beep(1568, 200);
				Console::ForegroundColor = ConsoleColor::Green;

				Console::SetCursorPosition(104, 31);
				cout << "   -----|-----";
				Console::SetCursorPosition(104, 32);
				cout << "*>=====[_]L)";
				Console::SetCursorPosition(104, 33);
				cout << "      -'-`-";


				Beep(739.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Beep(783.99, 200);

				Console::ForegroundColor = ConsoleColor::Cyan;

				Console::SetCursorPosition(104, 31);
				cout << "   -----|-----";
				Console::SetCursorPosition(104, 32);
				cout << "*>=====[_]L)";
				Console::SetCursorPosition(104, 33);
				cout << "      -'-`-";
				Beep(369.99, 200);

				Beep(392, 200);

				Beep(369.99, 200);

				Beep(392, 200);
				Console::ForegroundColor = ConsoleColor::Magenta;

				Console::SetCursorPosition(104, 31);
				cout << "   -----|-----";
				Console::SetCursorPosition(104, 32);
				cout << "*>=====[_]L)";
				Console::SetCursorPosition(104, 33);
				cout << "      -'-`-";
				Beep(392, 400);

				Beep(196, 400);
				tecla_seleccion = 0;
				x = 4;
				break;
			}

		}
	}
	fflush(stdin);
	system("color 0F");
	system("cls");
	return x;
}
void f1_cesped_y_teclas() {//oso carro pato tren helicoptro
	Console::SetCursorPosition(0, 35);
	Console::ForegroundColor = ConsoleColor::Cyan;
	cout << "	  1.-oso		  2.-carro		      3.-pato		     4.-tren            5.- helicoptero" << endl;
	Console::ForegroundColor = ConsoleColor::Green;
	cout << ", , , ;;, , , , , ,, , , ;;, , , , , , ;;, ,, , ,, , , ;;, , , , , , ;;, ,, , ,, , , ;;, , , , , , ;;, ,, , , ;;,, ;;;	 , ;;;==" << endl;
	cout << ";;.=.'	 , , , ;;.=.'	;;, , , , , , ;;	=;;.=.'	;;, , , , , , , ;;	=;;.=.'	;;, , , , , , ;;,;;.'	 , ;;	=;,,;;;==" << endl;
	cout << ", , , ;;, , , , , ,, , , ;;, ,, ,, , ;; , ;;, , ,, , , ;;, ,, ,, , ;; , ;;, , ,, , , ;;, ,, ,, , ;; , ;;, , ;; , ,,,;," << endl;
	cout << ";;.=.', ;;, , , , ;;.=.'	=.'	=.', ;;, , , , , ;;.=.'	=.'	'	=.', ;;, , , , , ;;.=.'	=.'	=.', ;;, , , ;" << endl;
}
void f2_semaforo() {
	Console::ForegroundColor = ConsoleColor::DarkGray;
	Console::SetCursorPosition(80, 0);
	cout << "+--------------------------+" << endl;
	Console::SetCursorPosition(80, 1);
	cout << "|                          |" << endl;
	Console::SetCursorPosition(80, 2);
	cout << "|                          |" << endl;
	Console::SetCursorPosition(80, 3);
	cout << "|                          |" << endl;
	Console::SetCursorPosition(80, 4);
	cout << "+--------------------------+" << endl;
	for (int i = 0; i <= 3; i++) {
		if (i == 0) { Console::ForegroundColor = ConsoleColor::Red; Beep(1500, 600); }
		if (i == 1) { Console::ForegroundColor = ConsoleColor::Red; Beep(1500, 600); }
		if (i == 2) { Console::ForegroundColor = ConsoleColor::Yellow; Beep(1500, 600); }
		if (i == 3) { Console::ForegroundColor = ConsoleColor::Green; Beep(3000, 400); }
		Console::SetCursorPosition(83 + (i * 6), 1);
		cout << " .-. " << endl;
		Console::SetCursorPosition(83 + (i * 6), 2);
		cout << "( # )" << endl;
		Console::SetCursorPosition(83 + (i * 6), 3);
		cout << " '-' " << endl;

	}


	fflush(stdin);
	system("color 0F");

}
// AREA DE JUEGO

void titulo(int lap) { // impresion del titulo y el ganador
	Console::SetCursorPosition(50, 1);	cout << "CARRERA " << lap + 1 << endl;
}
void imprime_inicio() { // imprime la linea de partida (vertical)
	int col_x = 20;
	int col_y = 5;
	for (int i = 0; i < 36; i++) {
		Console::SetCursorPosition(col_x, col_y + i);
		cout << (char)176;
	}
}
void imprime_carriles() { // imprime las lineas que separan los carriles (horizontales)
	int col_x = 21;
	int col_y = 5;
	for (int i = 0; i < 6; i++) { // 6 por el numero de carriles
		for (int j = 0; j < 95 - 21; j++) {
			if (i == 0) { // si es la primera linea horizontal
				Console::SetCursorPosition(col_x + j, col_y);
				cout << (char)223;
			}
			else if (i == 5) { // si es la ultima linea horizontal
				Console::SetCursorPosition(col_x + j, col_y);
				cout << (char)220;
			}
			else { // si son los carriles dentro de la pista
				Console::SetCursorPosition(col_x + j, col_y);
				cout << "-";
			}
		}
		col_y += 7; // ancho del carril mas 1 por la linea q divid al carril
	}
}
void imprime_meta() { // imprime la meta al final del la pista (vertical)
	int col_x = 95;
	int col_y = 5;
	for (int i = 0; i < 36; i++) {
		int relleno = 219;
		int espacio = 32;
		if (i % 2 == 0) {
			Console::SetCursorPosition(col_x, col_y + i);
			cout <<
				(char)relleno <<
				(char)espacio <<
				(char)relleno <<
				(char)espacio <<
				(char)relleno <<
				(char)espacio;
		}
		else {
			Console::SetCursorPosition(col_x, col_y + i);
			cout <<
				(char)espacio <<
				(char)relleno <<
				(char)espacio <<
				(char)relleno <<
				(char)espacio <<
				(char)relleno;
		}
	}
}
void imprime_indicadores() {
	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(3, 41);
	cout << "*PUNTO DE PARTIDA*";

	Console::SetCursorPosition(95, 41);
	cout << "*META*";
}
void imprime_area_de_juego(int lap) {

	titulo(lap);
	imprime_inicio();
	imprime_carriles();
	imprime_meta();
	imprime_indicadores();
}

// JUGADORES

void imprime_carros(int carro, int eje_x, int eje_y) {
	if (carro == 0) { // oso: 4 de alto, 5 de ancho
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(eje_x, eje_y);		cout << "()=()";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "(^;^)";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "C   C";
		Console::SetCursorPosition(eje_x, eje_y + 3);	cout << "()_()";
		Console::ForegroundColor = ConsoleColor::White;
	}
	else if (carro == 1) { //carro: 3 de alto, 16 de ancho
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(eje_x, eje_y);		cout << "  _.-.___\\\\";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "|  _      _`-.";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << " '-(_)----(_)--`";
		Console::ForegroundColor = ConsoleColor::White;
	}
	else if (carro == 2) { // pato: 3 de alto, 7 de ancho
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(eje_x, eje_y);		cout << "    (@_";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "\\\\\\__\\";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "<_____)";
		Console::ForegroundColor = ConsoleColor::White;
	}
	else if (carro == 3) { // tren: 4 de alto, 11 de ancho
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(eje_x, eje_y);		cout << "____";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "|DD|____T_";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "|_ |_____|<";
		Console::SetCursorPosition(eje_x, eje_y + 3);	cout << "  @-@-@-oo\\";
		Console::ForegroundColor = ConsoleColor::White;
	}
	else if (carro == 4) {// helicoptero: 3 de alto, 14 de ancho
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(eje_x, eje_y);		cout << "   -----|-----";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "*>=====[_]L)";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "      -'-`-";
		Console::ForegroundColor = ConsoleColor::White;
	}
}
void borra_carros(int carro, int eje_x, int eje_y) {
	if (carro == 0) { // oso: 4 de alto, 5 de ancho
		Console::SetCursorPosition(eje_x, eje_y);		cout << "     ";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "     ";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "     ";
		Console::SetCursorPosition(eje_x, eje_y + 3);	cout << "     ";
	}
	else if (carro == 1) { //carro: 3 de alto, 16 de ancho
		Console::SetCursorPosition(eje_x, eje_y);		cout << "                ";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "                ";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "                ";
	}
	else if (carro == 2) { // pato: 3 de alto, 7 de ancho
		Console::SetCursorPosition(eje_x, eje_y);		cout << "       ";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "       ";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "       ";
	}
	else if (carro == 3) { // tren: 4 de alto, 11 de ancho
		Console::SetCursorPosition(eje_x, eje_y);		cout << "           ";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "           ";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "           ";
		Console::SetCursorPosition(eje_x, eje_y + 3);	cout << "           ";
	}
	else if (carro == 4) {// helicoptero: 3 de alto, 14 de ancho
		Console::SetCursorPosition(eje_x, eje_y);		cout << "              ";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "              ";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "              ";
	}
}



// ASIGNACION JUGADORES INICIAL

void asigna_posicion_inicial_eje_x(int*& posicion_inicial_jugador_eje_x) {
	posicion_inicial_jugador_eje_x[0] = 20 - 5;
	posicion_inicial_jugador_eje_x[1] = 20 - 16;
	posicion_inicial_jugador_eje_x[2] = 20 - 7;
	posicion_inicial_jugador_eje_x[3] = 20 - 11;
	posicion_inicial_jugador_eje_x[4] = 20 - 14;
}
void asigna_posicion_inicial_eje_y(int*& posicion_inicial_jugador_eje_y) {
	posicion_inicial_jugador_eje_y[0] = 12 - 4;
	posicion_inicial_jugador_eje_y[1] = 19 - 3;
	posicion_inicial_jugador_eje_y[2] = 26 - 3;
	posicion_inicial_jugador_eje_y[3] = 33 - 4;
	posicion_inicial_jugador_eje_y[4] = 40 - 3;
}



// MOVIMIENTO EN CONSOLA

void muestra_jugadores_en_pantalla(int* posicion_inicial_jugador_eje_x, int* posicion_inicial_jugador_eje_y) {
	for (int i = 0; i < 5; i++) {
		imprime_carros(i, posicion_inicial_jugador_eje_x[i], posicion_inicial_jugador_eje_y[i]);
	}
}
void borra_jugadores_en_pantalla(int* posicion_inicial_jugador_eje_x, int* posicion_inicial_jugador_eje_y) {
	for (int i = 0; i < 5; i++) {
		borra_carros(i, posicion_inicial_jugador_eje_x[i], posicion_inicial_jugador_eje_y[i]);
	}
}
void cambia_velocidad(int*& posicion_inicial_jugador_eje_x, int* posicion_obstaculo_eje_x, int* obstaculos_por_jugador, int*& penalidad_segundos, int* max_penalidad_segundos, int jugador_elegido) {
	for (int i = 0; i < 5; i++) {

		int largo_carro;
		if (i == 0) { largo_carro = 5; }
		else if (i == 1) { largo_carro = 16; }
		else if (i == 2) { largo_carro = 7; }
		else if (i == 3) { largo_carro = 11; }
		else if (i == 4) { largo_carro = 14; }


		if (posicion_inicial_jugador_eje_x[i] + largo_carro >= posicion_obstaculo_eje_x[i]) {

			if (penalidad_segundos[i] < max_penalidad_segundos[i] && obstaculos_por_jugador[i] != 2) {
				posicion_inicial_jugador_eje_x[i] += 0;
				penalidad_segundos[i]++;
			}
			else if (penalidad_segundos[i] < max_penalidad_segundos[i] && obstaculos_por_jugador[i] == 2) {
				posicion_inicial_jugador_eje_x[i] --;
				penalidad_segundos[i]++;
			}
			else {
				if (i != jugador_elegido) {
					posicion_inicial_jugador_eje_x[i] += rand() % 4 + 2;
				}
				else {
					if (kbhit()) {
						char tecla = getch();
						if (tecla == 32) {
							posicion_inicial_jugador_eje_x[i] += rand() % 4 + 2;
						}
					}
				}

			}
		}
		else {
			if (i != jugador_elegido) {
				posicion_inicial_jugador_eje_x[i] += rand() % 4 + 2;
			}
			else {
				if (kbhit()) {
					char tecla = getch();
					if (tecla == 32) {
						posicion_inicial_jugador_eje_x[i] += rand() % 4 + 2;
					}
				}
			}
		}

	}
}





// CREA OBSTACULOS

void imprime_obstaculos(int obstaculo, int eje_x, int eje_y) {
	if (obstaculo == 0) { // pollo: 5 de alto, 5 de ancho
		Console::ForegroundColor = ConsoleColor::DarkGray;
		Console::SetCursorPosition(eje_x, eje_y);		cout << "  \\\\";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "  (o>";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "L_//)";
		Console::SetCursorPosition(eje_x, eje_y + 3);	cout << "L_/_)";
		Console::SetCursorPosition(eje_x, eje_y + 4);	cout << "  L";
		Console::ForegroundColor = ConsoleColor::White;
	}
	else if (obstaculo == 1) { //piedra: 2 de alto, 4 de ancho
		Console::ForegroundColor = ConsoleColor::DarkGray;
		Console::SetCursorPosition(eje_x, eje_y);	    cout << ".__.";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "|__|";
		Console::ForegroundColor = ConsoleColor::White;
	}
	else if (obstaculo == 2) { // cascara de platano: 3 de alto, 7 de ancho
		Console::ForegroundColor = ConsoleColor::DarkGray;
		Console::SetCursorPosition(eje_x, eje_y);		cout << "   T";
		Console::SetCursorPosition(eje_x, eje_y + 1);	cout << "  /|\\";
		Console::SetCursorPosition(eje_x, eje_y + 2);	cout << "\\/   \\/";
		Console::ForegroundColor = ConsoleColor::White;
	}
}
void muestra_obstaculos_en_pantalla(int* posicion_obstaculo_eje_x, int* posicion_obstaculo_eje_y, int*& obstaculos_por_jugador) {
	for (int i = 0; i < 5; i++) {
		int obstaculo = rand() % 3;
		obstaculos_por_jugador[i] = obstaculo;

		if (obstaculo == 1) {
			posicion_obstaculo_eje_y[i] += 3;
		}
		else if (obstaculo == 2) {
			posicion_obstaculo_eje_y[i] += 2;
		}
		imprime_obstaculos(obstaculo, posicion_obstaculo_eje_x[i], posicion_obstaculo_eje_y[i]);
	}
}
void borra_obstaculos(int* posicion_inicial_jugador_eje_x, int* posicion_obstaculo_eje_x) {
	int eje_y = 6;
	for (int i = 0; i < 5; i++) {

		int largo_carro;
		if (i == 0) { largo_carro = 5; }
		else if (i == 1) { largo_carro = 16; }
		else if (i == 2) { largo_carro = 7; }
		else if (i == 3) { largo_carro = 11; }
		else if (i == 4) { largo_carro = 14; }

		if (posicion_inicial_jugador_eje_x[i] + largo_carro >= posicion_obstaculo_eje_x[i]) {

			Console::SetCursorPosition(posicion_obstaculo_eje_x[i], eje_y);		cout << "       ";
			Console::SetCursorPosition(posicion_obstaculo_eje_x[i], eje_y + 1);	cout << "       ";
			Console::SetCursorPosition(posicion_obstaculo_eje_x[i], eje_y + 2);	cout << "       ";
			Console::SetCursorPosition(posicion_obstaculo_eje_x[i], eje_y + 3);	cout << "       ";
			Console::SetCursorPosition(posicion_obstaculo_eje_x[i], eje_y + 4);	cout << "       ";
			Console::SetCursorPosition(posicion_obstaculo_eje_x[i], eje_y + 5);	cout << "       ";

		}
		eje_y += 7;
	}
}


// ASIGNACION OBSTACULOS

void asigna_posicion_obstaculo_eje_x(int*& posicion_obstaculo_eje_x) {
	posicion_obstaculo_eje_x[0] = rand() % 55 + 30;
	posicion_obstaculo_eje_x[1] = rand() % 55 + 30;
	posicion_obstaculo_eje_x[2] = rand() % 55 + 30;
	posicion_obstaculo_eje_x[3] = rand() % 55 + 30;
	posicion_obstaculo_eje_x[4] = rand() % 55 + 30;
}
void asigna_posicion_obstaculo_eje_y(int*& posicion_obstaculo_eje_y) {
	posicion_obstaculo_eje_y[0] = 12 - 5; // 5 por que es la altura mayor de los obstaculos
	posicion_obstaculo_eje_y[1] = 19 - 5;
	posicion_obstaculo_eje_y[2] = 26 - 5;
	posicion_obstaculo_eje_y[3] = 33 - 5;
	posicion_obstaculo_eje_y[4] = 40 - 5;
}
// COLISION META

void colision_meta(int* posicion_inicial_jugador_eje_x, bool& llego_meta, int* posicion_inicial_jugador_eje_y) {
	for (int i = 0; i < 5; i++) {
		int largo_carro;
		if (i == 0) { largo_carro = 5; }
		else if (i == 1) { largo_carro = 16; }
		else if (i == 2) { largo_carro = 7; }
		else if (i == 3) { largo_carro = 11; }
		else if (i == 4) { largo_carro = 14; }



		if (posicion_inicial_jugador_eje_x[i] + largo_carro >= 95) {
			llego_meta = true;
			Console::SetCursorPosition(101, posicion_inicial_jugador_eje_y[i]);
			cout << "JUGADOR " << i + 1 << " LLEGO A LA META";
		}
	}


}


// RESULTADOS

void genera_matriz_resultados(int**& matriz_resultados) {
	for (int i = 0; i < 3; i++) {
		matriz_resultados[i] = new int[5];
	}
}
void posiciones_ala_matriz(int**& matriz_resultados, int* posicion_inicial_jugador_eje_x, int lap) {
	for (int i = 0; i < 5; i++) {
		int largo_carro;
		if (i == 0) { largo_carro = 5; }
		else if (i == 1) { largo_carro = 16; }
		else if (i == 2) { largo_carro = 7; }
		else if (i == 3) { largo_carro = 11; }
		else if (i == 4) { largo_carro = 14; }

		matriz_resultados[lap][i] = posicion_inicial_jugador_eje_x[i] + largo_carro;
	}
}
void imprime_presentacion(int lap) {
	Console::Clear();
	Console::SetCursorPosition(45, 3);
	Console::ForegroundColor = ConsoleColor::Yellow;

Console::SetCursorPosition(24, 12);
cout<<"      ::::::::      :::     :::::::::  :::::::::  :::::::::: :::::::::      :::  "<<endl;
Console::SetCursorPosition(24, 13);
cout << "    :+:    :+:   :+: :+:   :+:    :+: :+:    :+: :+:        :+:    :+:   :+: :+: " << endl;
Console::SetCursorPosition(24, 14);
cout << "   +:+         +:+   +:+  +:+    +:+ +:+    +:+ +:+        +:+    +:+  +:+   +:+ " << endl;
Console::SetCursorPosition(24, 15);
cout << "  +#+        +#++:++#++: +#++:++#:  +#++:++#:  +#++:++#   +#++:++#:  +#++:++#++: " << endl;
Console::SetCursorPosition(24, 16);
cout << " +#+        +#+     +#+ +#+    +#+ +#+    +#+ +#+        +#+    +#+ +#+     +#+  " << endl;
Console::SetCursorPosition(24, 17);
cout << "#+#    #+# #+#     #+# #+#    #+# #+#    #+# #+#        #+#    #+# #+#     #+#   " << endl;
Console::SetCursorPosition(24, 18);
cout << "########  ###     ### ###    ### ###    ### ########## ###    ### ###     ###    " << endl;

	if(lap+1==1){
		Console::ForegroundColor = ConsoleColor::Cyan;
		Console::SetCursorPosition(61, 21);

		cout << ":::" << endl;
		Console::SetCursorPosition(53, 22);

		cout << "     :+:+: " << endl;
		Console::SetCursorPosition(53, 23);

		cout << "      +:+  " << endl;
		Console::SetCursorPosition(53, 24);

		cout << "     +#+   " << endl;
		Console::SetCursorPosition(53, 25);

		cout << "    +#+    " << endl;
		Console::SetCursorPosition(53, 26);

		cout << "   #+#     " << endl;
		Console::SetCursorPosition(53, 27);

cout<<"#######    "<<endl; 
	}
	if (lap + 1 == 2) {
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(53, 21);
cout<<"       ::::::::"<<endl;
Console::SetCursorPosition(53, 22);
cout<<"     :+:    :+:"<<endl;
Console::SetCursorPosition(53, 23);
cout<<"          +:+  "<<endl;
Console::SetCursorPosition(53, 24);
cout<<"       +#+     "<<endl;
Console::SetCursorPosition(53, 25);
cout<<"    +#+        "<<endl;
Console::SetCursorPosition(53, 26);
cout<<"  #+#          "<<endl;
Console::SetCursorPosition(53, 27);
cout<<"##########     "<<endl;

	}
	if (lap + 1 == 3) {
		Console::ForegroundColor = ConsoleColor::Red;
Console::SetCursorPosition(53, 21); cout<<"      ::::::::"<<endl;
Console::SetCursorPosition(53, 22); cout<<"    :+:    :+:"<<endl;
Console::SetCursorPosition(53, 23); cout<<"          +:+ "<<endl;
Console::SetCursorPosition(53, 24); cout<<"      +#++:   "<<endl;
Console::SetCursorPosition(53, 25); cout<<"        +#+   "<<endl;
Console::SetCursorPosition(53, 26); cout<<"#+#    #+#    "<<endl;
Console::SetCursorPosition(53, 27); cout<<"########      "<<endl;

	}
	

	_sleep(3000);
	Console::Clear();
}

void imprime_ranking(int lap, int**& matriz_resultados, int*&ordenado) {
	Console::Clear();
	Console::SetCursorPosition(45, 5);
	cout << "RANKING" << endl;

	//for (int i = 0; i < 5; i++) {
	//	cout << matriz_resultados[lap][i] << " ";
	//}
	//cout << endl;


	int contador = 0;
	int eje_y = 10;
	int puntos = 10;

	for (int i = 120; i > 0; i--) {
		for (int j = 0; j < 5; j++) {

			if (i == matriz_resultados[lap][j]) {
				Console::SetCursorPosition(40, eje_y);
				cout << contador + 1;

				imprime_carros(j, 45, eje_y);

				Console::SetCursorPosition(60, eje_y);
				cout << puntos << " puntos";

				ordenado[contador] = j;

				contador++;
				eje_y += 5;
				puntos--;
			}


		}
	}


	_sleep(3000);


	Console::Clear();
}

void imprime_podio(int* ordenado) {
	Console::Clear();
	// POR COMPLETAR
	_sleep(3000);

	for (int i = 0; i < 5; i++) {
		cout << ordenado[i] << " ";
	}
	cout << endl;

	int contador = 0;

	int primer_lugar;
	int primer_lugar_puntaje;
	int segundo_lugar;
	int segundo_lugar_puntaje;
	int tercer_lugar;
	int tercer_lugar_puntaje;


	Console::SetCursorPosition(50, 3);
	cout << "PODIUM";

	for (int i = 40; i > 0; i--) {
		for (int j = 0; j < 5; j++) {
			if (ordenado[j] == i) {
				if (contador == 0) {
					primer_lugar = j;
					//cout << "primer lugar: "<<j+1<<" "<< ordenado[j]<<endl;
					imprime_carros(j, 50, 5);
					Console::SetCursorPosition(50, 10);
					cout << ordenado[j] << " puntos";
					contador++;
				}

				else if (contador == 1) {
					segundo_lugar = j;
					//cout << "segundo lugar: " << j+1 << " " << ordenado[j] << endl;
					imprime_carros(j, 30, 15);
					Console::SetCursorPosition(30, 20);
					cout << ordenado[j] << " puntos";
					contador++;
				}

				else if (contador == 2) {
					tercer_lugar = j;
					//cout << "tercer lugar: " << j+1 << " " << ordenado[j] << endl;
					imprime_carros(j, 70, 15);
					Console::SetCursorPosition(70, 20);
					cout << ordenado[j] << " puntos";
					contador++;
				}

			}
		}
	}


}


void f3_resultados() {


	Console::CursorVisible = false;
	Beep(739.99, 200);
	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(26, 1);
	cout << "-----------------------------------" << endl;

	Beep(783.99, 200);
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(34, 2);
	cout << "Tabla de resultados" << endl;

	Beep(783.99, 200);
	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(26, 3);
	cout << "-----------------------------------" << endl;
	Beep(739.99, 200);
	cout << "\n";

	Beep(783.99, 200);
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(30, 5);
	cout << "1.- Jugador " << "puntaje: "<< pt1 << " p" << endl;
	Beep(783.99, 200);
	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(30, 6);
	cout << "2.- Jugador " << "puntaje: " << pt2 << " p" << endl;
	Beep(739.99, 200);
	Console::ForegroundColor = ConsoleColor::DarkGreen;
	Console::SetCursorPosition(30, 7);
	cout << "3.- Jugador " << "puntaje: " << pt3 << " p" << endl;
	Beep(83.99, 200);
	Beep(880, 200);
}
void f3_puestos() {

	int jugador1 = 0, jugador2 = 4, jugador3 = 3, jugador4 = 0, jugador5 = 1;
	//26
	//50
	Console::ForegroundColor = ConsoleColor::DarkRed;
	Console::SetCursorPosition(55, 15);
	cout << "" << endl;
	Console::SetCursorPosition(55, 16);
	cout << "" << endl;
	Console::SetCursorPosition(55, 17);
	cout << " " << endl;
	Console::SetCursorPosition(55, 18);
	cout << "" << endl;
	Console::SetCursorPosition(55, 19);
	cout << "" << endl;
	Console::SetCursorPosition(55, 20);
	cout << "@-----------------------@" << endl;
	Console::SetCursorPosition(55, 21);
	cout << "|           " << pt3 << "           |" << endl;


	Console::ForegroundColor = ConsoleColor::Gray;
	Console::SetCursorPosition(3, 15);
	cout << "	                      " << endl;
	Console::SetCursorPosition(3, 16);
	cout << "                           " << endl;
	Console::SetCursorPosition(3, 17);
	cout << "                           " << endl;
	Console::SetCursorPosition(3, 18);
	cout << "@-----------------------@  " << endl;
	Console::SetCursorPosition(3, 19);
	cout << "|           " << pt2 << "           | " << endl;
	Console::SetCursorPosition(3, 20);
	cout << "|           |           |" << endl;
	Console::SetCursorPosition(3, 21);
	cout << "|           |           |" << endl;

	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(29, 15);
	cout << "             				" << endl;
	Console::SetCursorPosition(29, 16);
	cout << "@-----------------------@	" << endl;
	Console::SetCursorPosition(29, 17);
	cout << "|           "<< pt1<<"           | " << endl;
	Console::SetCursorPosition(29, 18);
	cout << "|           |           |	" << endl;
	Console::SetCursorPosition(29, 19);
	cout << "|           |           |  " << endl;
	Console::SetCursorPosition(29, 20);
	cout << "|           |           |" << endl;
	Console::SetCursorPosition(29, 21);
	cout << "|           |           |" << endl;

	Beep(830.61, 200);
	Beep(830.61, 200);
	//rojo, verde, azul, amarillo, morado


	if (jugador1 == c) {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(62, 14);

		cout << "oso";

		Console::SetCursorPosition(59, 16);
		Beep(987.77, 400);
		cout << "()=()";
		Console::SetCursorPosition(59, 17);
		Beep(880, 200);
		cout << "(^;^)";
		Console::SetCursorPosition(59, 18);
		Beep(783.99, 200);
		cout << "C   C";
		Console::SetCursorPosition(59, 19);
		Beep(698.46, 200);
		cout << "()_()";
	}
	if (jugador2 == c) {
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(62, 14);
		cout << "carro";

		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(59, 16);
		Beep(987.77, 400);
		cout << "        ";
		Console::SetCursorPosition(59, 17);
		Beep(880, 200);
		cout << "  _.-.___\\\\";
		Console::SetCursorPosition(59, 18);
		Beep(783.99, 200);
		cout << "|  _      _`-.";
		Console::SetCursorPosition(59, 19);
		Beep(698.46, 200);
		cout << " '-(_)----(_)--`";
	}
	if (jugador3 == c) {
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(62, 14);
		cout << "pato";

		Console::SetCursorPosition(59, 16);
		Beep(987.77, 400);
		cout << "    (@_";
		Console::SetCursorPosition(59, 17);
		Beep(880, 200);
		cout << "\\\\\\__\\";
		Console::SetCursorPosition(59, 18);
		Beep(783.99, 200);
		cout << " < _____)";
		Console::SetCursorPosition(59, 19);
		Beep(698.46, 200);
		cout << "      ";
	}
	if (jugador4 == c) {

		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(62, 14);
		cout << "tren";

		Console::SetCursorPosition(59, 16);
		Beep(987.77, 400);
		cout << "____";
		Console::SetCursorPosition(59, 17);
		Beep(880, 200);
		cout << "|DD|____T_";
		Console::SetCursorPosition(59, 18);
		Beep(783.99, 200);
		cout << "|_ |_____|<";
		Console::SetCursorPosition(59, 19);
		Beep(698.46, 200);
		cout << "  @-@-@-oo\\";
	}
	if (jugador5 == c) {
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(62, 14);
		cout << "helicoptero";
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(59, 16);
		Beep(987.77, 400);
		cout << "   -----|-----";
		Console::SetCursorPosition(59, 17);
		Beep(880, 200);
		cout << "*>=====[_]L)";
		Console::SetCursorPosition(59, 18);
		Beep(783.99, 200);
		cout << "      -'-`-";
		Console::SetCursorPosition(59, 19);
		Beep(698.46, 200);
		cout << "";
	}

	if (jugador1 == b) {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(12, 12);
		cout << "oso";

		Console::SetCursorPosition(9, 14);
		Beep(659.25, 200);
		cout << "()=()";
		Console::SetCursorPosition(9, 15);
		Beep(698.46, 200);
		cout << "(^;^)";
		Console::SetCursorPosition(9, 16);
		Beep(784, 200);
		cout << "C   C";
		Console::SetCursorPosition(9, 17);
		Beep(880, 400);
		cout << "()_()";
	}//sengundo lugar - vehiculo 1
	if (jugador2 == b) {
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(12, 12);
		cout << "carro";
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(9, 14);
		Beep(659.25, 200);
		cout << "        ";
		Console::SetCursorPosition(9, 15);
		Beep(698.46, 200);
		cout << "  _.-.___\\\\";
		Console::SetCursorPosition(9, 16);
		Beep(784, 200);
		cout << "|  _      _`-.";
		Console::SetCursorPosition(9, 17);
		Beep(880, 400);
		cout << " '-(_)----(_)--`";

	}
	if (jugador3 == b) {
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(12, 12);
		cout << "pato";
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(9, 14);
		Beep(659.25, 200);
		cout << "    (@_";
		Console::SetCursorPosition(9, 15);
		Beep(698.46, 200);
		cout << "\\\\\\__\\";
		Console::SetCursorPosition(9, 16);
		Beep(784, 200);
		cout << " < _____)";
		Console::SetCursorPosition(9, 17);
		Beep(880, 400);
		cout << "      ";
	}
	if (jugador4 == b) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(12, 12);
		cout << "tren";
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(9, 14);
		Beep(659.25, 200);
		cout << "____";
		Console::SetCursorPosition(9, 15);
		Beep(698.46, 200);
		cout << "|DD|____T_";
		Console::SetCursorPosition(9, 16);
		Beep(784, 200);
		cout << "|_ |_____|<";
		Console::SetCursorPosition(9, 17);
		Beep(880, 400);
		cout << "  @-@-@-oo\\";
	}
	if (jugador5 == b) {
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(12, 12);
		cout << "helicoptero";
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(9, 14);
		Beep(659.25, 200);
		cout << "   -----|-----";
		Console::SetCursorPosition(9, 15);
		Beep(698.46, 200);
		cout << "*>=====[_]L)";
		Console::SetCursorPosition(9, 16);
		Beep(784, 200);
		cout << "      -'-`-";
		Console::SetCursorPosition(9, 17);
		Beep(880, 400);
		cout << "";
	}

	if (jugador1 == a) {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(36, 10);
		cout << "oso";

		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(34, 12);
		Beep(784, 200);
		cout << "()=()";
		Console::SetCursorPosition(34, 13);
		Beep(698.46, 200);
		cout << "(^;^)";
		Console::SetCursorPosition(34, 14);
		Beep(659.25, 200);
		cout << "C   C";
		Console::SetCursorPosition(34, 15);
		Beep(587.33, 200);
		cout << "()_()";

	}//primer lugar - vehiculo 1
	if (jugador2 == a) {
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(36, 10);
		cout << "carro";
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(34, 12);
		Beep(784, 200);
		cout << "        ";
		Console::SetCursorPosition(34, 13);
		Beep(698.46, 200);
		cout << "  _.-.___\\\\";
		Console::SetCursorPosition(34, 14);
		Beep(659.25, 200);
		cout << "|  _      _`-.";
		Console::SetCursorPosition(34, 15);
		Beep(587.33, 200);
		cout << " '-(_)----(_)--`";
	}
	if (jugador3 == a) {
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(36, 10);
		cout << "pato";
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(34, 12);
		Beep(784, 200);
		cout << "    (@_";
		Console::SetCursorPosition(34, 13);
		Beep(698.46, 200);
		cout << "\\\\\\__\\";
		Console::SetCursorPosition(34, 14);
		Beep(659.25, 200);
		cout << " < _____)";
		Console::SetCursorPosition(34, 15);
		Beep(587.33, 200);
		cout << "      ";
	}
	if (jugador4 == a) {
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(36, 10);
		cout << "tren";
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(34, 12);
		Beep(784, 200);
		cout << "____";
		Console::SetCursorPosition(34, 13);
		Beep(698.46, 200);
		cout << "|DD|____T_";
		Console::SetCursorPosition(34, 14);
		Beep(659.25, 200);
		cout << "|_ |_____|<";
		Console::SetCursorPosition(34, 15);
		Beep(587.33, 200);
		cout << "  @-@-@-oo\\";
	}
	if (jugador5 == a) {
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(36, 10);
		cout << "helicoptero";
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(34, 12);
		Beep(784, 200);
		cout << "   -----|-----";
		Console::SetCursorPosition(34, 13);
		Beep(698.46, 200);
		cout << "*>=====[_]L)";
		Console::SetCursorPosition(34, 14);
		Beep(659.25, 200);
		cout << "      -'-`-";
		Console::SetCursorPosition(34, 15);
		Beep(587.33, 200);
		cout << "";
	}

}


int main() {
	//buenas noches con todos
	//nosotros somos Andre, Omar, Christian y Stephano
	// y este es nuestro trabajo del game jam
	//lo que no pudimos incluir fue los power ups
	int p;
	
	//fase upc
	Tam_Console_0();
	UPC();

	//fase menu inicio
	Tam_Console_1();
	f0_Instrucciones();
	f0_menu_trofeo(tecla);

	//fase menu seleccion
	Tam_Console_2();
	f1_menu();
	f1_menu_seleccion();
	f1_nombres();
	f1_cesped_y_teclas();
	f1_menu_trofeo();
	p = f1_seleccion_vehiculos(tecla_seleccion);

	//fase juego
	Tam_Console_6();
	srand(time(NULL));
	int lap_total = 3;


	int* ordenado = new int[5];
	for (int i = 0; i < 5; i++) {
		ordenado[i] = 0;
	}

	int** matriz_resultados = new int* [3]; // 3 por las 3 vueltas 
	genera_matriz_resultados(matriz_resultados);

	int jugador_elegido = p; // SE TIENE QUE CAMBIAR , COMIENZA DE 0 A 4

	for (int lap = 0; lap < lap_total; lap++) {
		imprime_presentacion(lap);


		// punto de origen en el eje x de los jugadores
		int* posicion_inicial_jugador_eje_x = new int[5]; //5 por ls 5 jugadores
		int* posicion_inicial_jugador_eje_y = new int[5];

		asigna_posicion_inicial_eje_x(posicion_inicial_jugador_eje_x);
		asigna_posicion_inicial_eje_y(posicion_inicial_jugador_eje_y);


		// punto de origen en el eje x de los obstaculos
		int* posicion_obstaculo_eje_x = new int[5]; //5 por ls 5 jugadores
		int* posicion_obstaculo_eje_y = new int[5];

		asigna_posicion_obstaculo_eje_x(posicion_obstaculo_eje_x);
		asigna_posicion_obstaculo_eje_y(posicion_obstaculo_eje_y);

		f2_semaforo();
		muestra_jugadores_en_pantalla(posicion_inicial_jugador_eje_x, posicion_inicial_jugador_eje_y);


		int* obstaculos_por_jugador = new int[5];
		muestra_obstaculos_en_pantalla(posicion_obstaculo_eje_x, posicion_obstaculo_eje_y, obstaculos_por_jugador);

		int* penalidad_segundos = new int[5];
		for (int i = 0; i < 5; i++) {
			penalidad_segundos[i] = 0;
		}


		int* power_up = new int[5];
		for (int i = 0; i < 5; i++) {
			penalidad_segundos[i] = 1;
		}


		int* max_penalidad_segundos = new int[5];
		for (int i = 0; i < 5; i++) {
			if (obstaculos_por_jugador[i] == 0) { // pollo
				max_penalidad_segundos[i] = 5;
			}
			else if (obstaculos_por_jugador[i] == 1) { // piedra
				max_penalidad_segundos[i] = 3;
			}
			else if (obstaculos_por_jugador[i] == 2) { // cascara de banana
				max_penalidad_segundos[i] = 5;
			}

		}


		//char tecla;
		int segundos_powerup = 0;
		bool llego_meta = false;

		do {

			imprime_area_de_juego(lap);

			_sleep(100);
			borra_jugadores_en_pantalla(posicion_inicial_jugador_eje_x, posicion_inicial_jugador_eje_y);
			cambia_velocidad(posicion_inicial_jugador_eje_x, posicion_obstaculo_eje_x, obstaculos_por_jugador, penalidad_segundos, max_penalidad_segundos, jugador_elegido);


			borra_obstaculos(posicion_inicial_jugador_eje_x, posicion_obstaculo_eje_x);


			muestra_jugadores_en_pantalla(posicion_inicial_jugador_eje_x, posicion_inicial_jugador_eje_y);
			colision_meta(posicion_inicial_jugador_eje_x, llego_meta, posicion_inicial_jugador_eje_y);

		} while (!llego_meta);

		posiciones_ala_matriz(matriz_resultados, posicion_inicial_jugador_eje_x, lap);
		_sleep(2000);
		imprime_ranking(lap, matriz_resultados,ordenado);
	}

	// matriz_resultados es la mtriz de 3 x 5 que aloja los posiciones
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz_resultados[i][j] << " ";
		}
		cout << endl;
	}
	Tam_Console_7();
	imprime_podio(ordenado);
	Beep(739.99, 200);
	Beep(783.99, 200);
	Beep(783.99, 200);
	Beep(739.99, 200);
	Beep(783.99, 200);
	Beep(783.99, 200);
	Beep(739.99, 200);
	Beep(83.99, 200);
	Beep(880, 200);

	Beep(987.77, 400);
	Beep(880, 200);
	Beep(783.99, 200);
	Beep(698.46, 200);

	Beep(659.25, 200);
	Beep(698.46, 200);
	Beep(784, 200);
	Beep(880, 400);

	Beep(784, 200);
	Beep(698.46, 200);
	Beep(659.25, 200);
	Beep(587.33, 200);
	Beep(659.25, 200);
	Beep(698.46, 200);
	Beep(784, 400);
	Beep(698.46, 200);
	Beep(659.25, 200);
	Beep(587.33, 200);
	Beep(523.25, 200);
	Beep(587.33, 200);
	Beep(659.25, 200);
	Beep(698.46, 400);
	Beep(659.25, 200);
	Beep(587.33, 200);
	Beep(493.88, 200);
	Beep(523.25, 200);

	return 0;
}