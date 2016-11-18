/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE


//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Trajet.h"
#include "TrajetSimple.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
TrajetSimple & TrajetSimple::operator = ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)


TrajetSimple::TrajetSimple (const char * villeD, const char * villeA, MoyenTransport moyen)
// Algorithme :
//
{
	villeDepart=new char[100];
	villeArrive=new char[100];
	
	strcpy(villeDepart,villeD);
	strcpy(villeArrive,villeA);
	moyenT=moyen;
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
	delete[] villeDepart;
	delete[] villeArrive;
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple

void TrajetSimple::Afficher()const
{
	cout<<"De "<<villeDepart <<" à " <<villeArrive <<" en ";
	AfficherEnum();
	

}

char* TrajetSimple::getVilleDepart()const{
	return villeDepart;

}
    
    
char* TrajetSimple::getVilleArrive()const{
	return villeArrive;

}
    



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void TrajetSimple::AfficherEnum()const
{
	//VOITURE, AVION, TRAIN, BATEAU, VELO, PIED, KAYAK
	switch (moyenT)
	{
		case 0:
			cout<<"voiture";
			break;
		case 1:
			cout<<"avion";
			break;
		case 2:
			cout<<"train";
			break;
		case 3:
			cout<<"bateau";
			break;
		case 4:
			cout<<"velo";
			break;
		case 5:
			cout<<"pied";
			break;
		case 6:
			cout<<"kayak";
			break;
	}
}
			
	
	


