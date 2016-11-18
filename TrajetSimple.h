/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------
#if ! defined ( TRAJET_SIMPLE_H )
#define TRAJET_SIMPLE_H
#define MAP

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

enum MoyenTransport
{
	VOITURE, AVION, TRAIN, BATEAU, VELO, PIED, KAYAK
};

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
//
//
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    TrajetSimple & operator = ( const TrajetSimple & unTrajetSimple );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    TrajetSimple ( const TrajetSimple & unTrajetSimple );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TrajetSimple (const char * villeD, const char * villeA, MoyenTransport moyen=VOITURE);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetSimple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    virtual void Afficher()const;
    //Affiche les attributs de l'objet selon le format <"De $villeDepart à $villeArrive en $moyenT">
    
    virtual char* getVilleDepart()const;
    
    
    virtual char* getVilleArrive()const;
    
    
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
	void AfficherEnum()const;
//----------------------------------------------------- Attributs protégés
	char * villeDepart;
	char * villeArrive;
	MoyenTransport moyenT;

};

//-------------------------------- Autres définitions dépendantes de <TrajetSimple>

#endif // TrajetSimple_H

