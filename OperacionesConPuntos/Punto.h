#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto {
private:
	float x;
	float y;
public:
	Punto(void) {
		x = 0.0;
		y = 0.0;
	};
	Punto(float a, float b) {
		x = a;
		y = b;
	};
	~Punto(void) {
		//cout << "Objeto destruido..." << endl;
	};
	void pideleAlUsuarioTusDatos(void) {
		cout << "Dame mi x ";
		cin >> x;
		cout << "Dame mi y ";
		cin >> y;
	};
	void muestraTusDatos(void) {
		cout << "(" << x << ", " << y << ")" << endl;
	};
	float dameTuX(void) {
		return x;
	};
	void modificaTuX(float a) {
		x = a;
	};
	float dameTuY(void) {
		return y;
	};
	void modificaTuY(float b) {
		y = b;
	};
	void modificaTusDatos(float a, float b) {
		x = a;
		y = b;
	};
};

