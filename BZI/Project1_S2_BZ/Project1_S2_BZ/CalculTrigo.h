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
typedef struct trianlge_s;
//--> structure 1
struct str_coteTriangle {
	unsigned char adjacent;
	unsigned char hypotenuse;
	unsigned char oppose;
};
//--> structure 2
struct str_triangleRectangle {
	long long tb_Angle[4]; 
	int air;
	int perimetre;
};

//-- d�claration de prototype --// 
	//-> tous les champs de la structure seront mis � z�ro
e_validation checkFct(struct str_triangleRectangle,int *pt_strTriangle);
	//-> conversion angle degr� -> en radian 
void Conversion_DegRad(struct str_triangleRectangle,int *pt_strTriangle);
	//-> conversion angle radian -> en degr� 
void Conversion_RadDeg(struct str_triangleRectangle, int *pt_strTriangle);
	//-> calculer les diff�rents segments du triangle
e_validation checkFct(struct str_triangleRectangle,int *pt_strTriangle);
	//-> calculer les diff�rents angles 
e_validation checkFct(struct str_triangleRectangle,int *pt_strTriangle);
#endif // !CALCUL_TRIGO_H