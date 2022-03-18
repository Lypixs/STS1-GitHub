//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
	if (age <= 18)
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}


int exposant(int nbre, int exp)
{
	int resultat;
	
	resultat = pow(nbre, exp);
	
	return resultat;
	
}


float TVA(int prix)
{
	float resultat;
	
	resultat = prix+(prix*(19.6/100));
	
	return resultat;
	
}


int plusGrand(int a, int b, int c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	else if (b >= a && b >=c)
	{
		return b;
	}
	else 
	{
		return c;
	}
	
}



//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb)
{
	if (nb % 2 == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}

/*int sommeNombre(int nb)
{
	int somme;
	
	somme = nb!;
	
	return somme;
	
}*/

float salaireNet(int salaire)
{
	
	
}









//Fonctions réalisées par l'étudiant 3 :

bool estImpair(int nb)
{
	if (nb % 2 == 1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

float moyenne(int nb1, int nb2, int nb3)
{
	float moyenne;
	
	moyenne = (nb1 + nb2 + nb3)/3;
	
	return moyenne
	
}

float reduction(int prix, int reduc)
{
	
	float resultat;
	
	resultat = prix - (prix*(reduc/100));
	
	return resultat;
	
}

int nombreMedian(int a, int b, int c)
{
	if (( a <= b && a >= c) || ( a >= b && a <= c))
	{
		return a;
	}
	
}