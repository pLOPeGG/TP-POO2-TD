/*************************************************************************
                           ListeT  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <ListeT> (fichier ListeT.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Trajet.h"
#include "ListeT.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ListeT::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
unsigned int ListeT::Ajouter(Trajet * aAjouter)
{
	if(cardAct==cardMax)
	{
		this->Ajuster();
	}
	this->trajets[cardAct]=aAjouter;	
	cardAct++;
	return cardAct;
}

//------------------------------------------------- Surcharge d'opérateurs
ListeT & ListeT::operator = ( const ListeT & unListeT )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ListeT::ListeT ( const ListeT & unListeT )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeT>" << endl;
#endif
} //----- Fin de ListeT (constructeur de copie)


ListeT::ListeT ( )
// Algorithme :
//
{
	#ifdef MAP
		cout << "Appel au constructeur de <ListeT>" << endl;
	#endif
	trajets = new Trajet*[CARD_MAX];
	cardAct=0;
	cardMax = CARD_MAX;
} //----- Fin de ListeT


ListeT::~ListeT ( )
// Algorithme :
//
{
	#ifdef MAP
		cout << "Appel au destructeur de <ListeT>" << endl;
	#endif
	unsigned int i;
	for(i=0;i<cardAct;i++)
	{
		delete trajets[i];
	}
	delete[] trajets;
} //----- Fin de ~ListeT



unsigned int ListeT::getCardAct()const
{
	return cardAct;
}

Trajet ** ListeT::getTrajets()const
{
	return trajets;
}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


unsigned int ListeT::Ajuster()
// Appelée quand cardAct=cardMax
{
	Trajet ** nouvtab= new Trajet *[cardMax*2];
	Trajet ** deleteTab = trajets;
	for(unsigned int i=0;i<cardMax;i++) 
	{
		nouvtab[i]=trajets[i];
	}
	trajets=nouvtab;
	delete[] deleteTab;
	cardMax=cardMax*2;
	return cardMax;
}
