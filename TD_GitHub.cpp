//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
	bool resultat;

	if(age >= 18)
	{
		resultat=true;
	}
	else
	{
		resultat=false;
	}
	return resultat;
}

int exposant(int nbre, int exp)
{
	int resultat, i;

	for (i=0;i<=exp;i++)
	{
		resultat = resultat * nombre;
	}
	return resultat;
	
}

float TVA(int prix)
{
	float resultat;

	resultat = prix * 0.804;

	return resultat;

}

int plusGrand(int a, int b, int c)
{
	int resultat;

	if(a>b && a>c)
	{
		resultat=a;
	}
	else if(b>c && b>a)
	{
		resultat=b;
	}
	else if(c>a && c>b)
	{
		resultat=c;
	}
	return resultat;
}
//Fonctions réalisées par l'étudiant 2 :
bool estPair(int nb)
{
	if (nb%2=0)
	{
		return true;
	}else
	{
		return false;
	}
}

int sommeNombre(int nb)
{
	int resultat = 0;
	int i=0;
	for(i=0;i<nb;i++)
	{
		resultat=resultat+nb;
	}
	return resultat;
}

float salaireNet(int salaire)
{
	int resultat;
	resultat=salaire*0.77;
	return resultat;
}

int plusPetit(int a, int b, int c)
{
	if(a<b && a<c)
	{
		return a;
	}
	if(b<a && b<c)
	{
		return b;
	}
	if(c<a && c<b)
	{
		return c;
	}
}









//Fonctions réalisées par l'étudiant 3 :
