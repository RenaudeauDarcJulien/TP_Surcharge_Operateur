#pragma once
#include <iostream>
using namespace std;

class point
{
	int x, y;
	int tab[50];
public:
	//Constructeur
	point(int abs = 0, int ord = 0) 
	{ 
		x = abs; y = ord;
		for (int i = 0; i < 50; i++)
		{
			tab[i] = 0;
		}
	}
	//Contrsucteur par Recopie
	point(const point &obj)
	{
		x = obj.x;
		y = obj.y;
		for (int i = 0; i < 50; i++)
		{
			tab[i] = obj.tab[i];
		}
	}
	//Destructeur
	~point();


	//Fonction Afficha
	void afficher() const
	{
		cout << "Coordonnees :" << x << " " << y << "\n";
	}

	point operator+(const point&) const;
	point operator-(const point&) const;
	point operator+=(const point&);
	point operator-=(const point&);
	point operator*=(const point&);
	point operator/=(const point&);
	friend bool operator==(point const&, point const&);
	friend bool operator!=(point const&, point const&);
	point operator=(const point&);

	friend ostream& operator << (ostream& os, const point& mp);// surcharge cout
	friend istream& operator >> (istream& is, point& mp);//surcharge cin
};

