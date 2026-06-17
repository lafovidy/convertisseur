#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "convertisseur.h"
float temperature_F_vers_Degre(float nombre)
{
	float c;
	c=(nombre-32)/1.8;
	return(c);
}
float temperature_D_vers_Fahreinheit(float nombre)
{
	float f;
	f=(nombre*1.8)+32;
	return(f);
}
float angle_degre_vers_radian(float nombre)
{
	float rad;
	rad=nombre*(3.1415926535/180);
	return(rad);
}
float angle_radian_vers_degre(float nombre)
{
	float deg;
	deg=nombre*(180/3.1415926535);
	return(deg);
}
float metre_vers_pieds(float nombre)
{
	float p;
	p=nombre*3.28084;
	return(p);
}
float pieds_vers_metre(float nombre)
{
	float m;
	m=nombre/3.28084;
	return(m);
}
void arguments(int argc,char *argv[])
{
	char *nom_fonction=argv[1];
	float valeur=atof(argv[2]);
	float resultat;
	if(argc<3)
	{
		printf("Trop peu d'argument\n");
		exit(0);
	}
	if(strcmp(nom_fonction,"Fahreinheit_vers_celsius")==0)
	{
		resultat=temperature_F_vers_Degre(valeur);
		printf("%f\n",resultat);
	}
	else if(strcmp(nom_fonction,"celsius_vers_Fahreinheit")==0)
	{
		resultat=temperature_D_vers_Fahreinheit(valeur);
		printf("%f\n",resultat);
	}
	else if(strcmp(nom_fonction,"angle_degre_vers_radian")==0)
	{
		resultat=angle_degre_vers_radian(valeur);
		printf("%f\n",resultat);
	}
	else if(strcmp(nom_fonction,"angle_radian_vers_degre")==0)
	{
		resultat=angle_radian_vers_degre(valeur);
		printf("%f\n",resultat);
	}
	else if(strcmp(nom_fonction,"metre_vers_pieds")==0)
	{
		resultat=metre_vers_pieds(valeur);
		printf("%f\n",resultat);
	}
	else if(strcmp(nom_fonction,"pieds_vers_metre")==0)
	{
		resultat=pieds_vers_metre(valeur);
		printf("%f\n",resultat);
	}
	else
	{
		printf("il n'y a pas de tel fonction ici\n");
	}
}
