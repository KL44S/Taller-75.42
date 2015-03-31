#pragma once

struct vector2D
{
	vector2D() {}
	
	vector2D(float  x, float y) : x(x), y(y) {}	

	/// establecer coordenadas.
	void Set(float  x_, float  y_) { x = x_; y = y_; }	

	/// Leer un elemento por �ndice.
	float operator () (int i) const
	{
		return (&x)[i];
	}

	/// Escribir un elemento por �ndice.
	float& operator () (int i)
	{
		return (&x)[i];
	}

	/// Sumar con otro vector.
	void operator += (const vector2D& v)
	{
		x += v.x; y += v.y;
	}

	/// Sustraer un vector de este vector.
	void operator -= (const vector2D& v)
	{
		x -= v.x; y -= v.y;
	}

	///Multiplicar por un escalar.
	void operator *= (float a)
	{
		x *= a; y *= a;
	}	

	/// Longitud al cuadrado
	float cuadrado() const
	{
		return x * x + y * y;
	}
	

	float x, y;
};
