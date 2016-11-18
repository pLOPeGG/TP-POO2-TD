#define MAP
#include <iostream>
#include "Trajet.h"
#include "TrajetSimple.h"
#include "ListeT.h"
#include "Catalogue.h"


int main()
{
	Catalogue cat;
	Trajet * t1=new TrajetSimple("Paris","Lyon");
	Trajet * t2=new TrajetSimple("Lyon","Marseille",AVION);
	Trajet * t3=new TrajetSimple("Lyon","Marseille",AVION);
	Trajet * t4=new TrajetSimple("Lyon","Marseille",AVION);
	Trajet * t5=new TrajetSimple("Lyon","Marseille",AVION);
	Trajet * t6=new TrajetSimple("Lyon","Marseille",AVION);
	
	
	
	cat.AjouterTrajet(t1);
	cat.AjouterTrajet(t2);
	cat.AjouterTrajet(t3);
	cat.AjouterTrajet(t4);
	cat.AjouterTrajet(t5);
	cat.AjouterTrajet(t6);
	cat.Afficher();
	
}
