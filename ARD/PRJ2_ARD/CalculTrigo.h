//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 2 - Calculs Trigo
// Nom du fichier 		: CalculsTrigo.h
// Date de cr�ation 	: 14.02.2024
// Date de modification : 14.02.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//
#ifndef CALCUL_TRIGO_H
#define CALCUL_TRIGO_H

//-- d�claration -> d�finition globales --// 
#define NB_CHOIX_MAX 2

//-- d�claration -> �num�ration globales --// 
typedef enum { cote, angle } e_choixCoteAngle;
typedef enum { adj = 1, hyp, opp } e_choixCote;
typedef enum { alpha = 1, beta } e_choixAngle;
typedef enum { ok, nok} e_validation;


//-- d�claration -> structure globales --// 
//--> structure 1
struct str_coteTriangle {
	unsigned char adjacent;
	unsigned char hypotenuse;
	unsigned char oppose;
};
//--> structure 2
struct str_triangleRectangle {
	long long  tb_Angle[4];
	struct str_coteTriangle triangle_s;
	struct Str_AetP {
		unsigned int air;
		unsigned int perimetre;
	};
};

//-- d�claration de prototype --// 
	//-> tous les champs de la structure seront mis � z�ro
void Initialiserstructure();
	//-> conversion angle degr� -> en radian 
void Conversion_DegRad();
	//-> conversion angle radian -> en degr� 
void Conversion_RadDeg();
	//-> calculer les diff�rents segments du triangle
void CalculerLongueurSegment();
	//-> calculer les diff�rents angles 
void CalculerAllAngles();


#endif // !CALCUL_TRIGO_H