/*************************************************************************
                           ListeT  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <ListeT> (fichier ListeT.h) ----------------
#if ! defined ( LISTET_H )
#define LISTET_H
#define MAP

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes
	const unsigned int CARD_MAX = 5;
//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ListeT>
//
//
//------------------------------------------------------------------------

class ListeT
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    unsigned int Ajouter(Trajet * aAjouter);


//------------------------------------------------- Surcharge d'opérateurs
    ListeT & operator = ( const ListeT & unListeT );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ListeT ( const ListeT & unListeT );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ListeT ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ListeT ( );
    // Mode d'emploi :
    //
    // Contrat :
    //
	
	unsigned int getCardAct()const;
	//Mode d'emploi :
	//Renvoie l'attribut cardAct soit le nombre d'éléments stockés actuellement
	
	Trajet ** getTrajets()const;
	//Mode d'emploi :
	//Renvoie l'attribut trajets soit le tableau contenant les pointeurs vers les trajets stockés

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
	unsigned int Ajuster();
	//NB : cardAct=cardMax à l'appel
	
//----------------------------------------------------- Attributs protégés
	unsigned int cardAct;
	unsigned int cardMax;
	Trajet ** trajets;
};

//-------------------------------- Autres définitions dépendantes de <ListeT>

#endif // LISTET_H

