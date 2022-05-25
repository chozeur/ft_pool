/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushCommente.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:00:54 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/17 14:05:32 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);			//	Prototype de la fonction ft_putchar, situee dans ft_putchar.c

void	ft_prim(int x)				//	Etablissement de la fonction permettant d'ecrire la ermiere ligne
{
	int	i;				//	Definition de la variable i, de type entier

	i = 1;					//	Initialisation de la variable i
	while (i <= x + 1)			//	Tant que l'on ne vient pas d'ecrire le retour a la ligne apres le dernier caractere de la ligne
	{
		if (i == 1)			//	Si on est sur le premier caractere de la premiere ligne
			ft_putchar('A');	
		else if (i == x)		//	Si on est sur le dernier caractere de la ligne
			ft_putchar('C');
		else if (i == x + 1)		//	Si on vient d'ecrire le dernier caractere
			ft_putchar('\n');
		else				//	On affiche B entre le premier et le dernier caractere
			ft_putchar('B');
		i++;				//	Incrementation de i
	}
	i = 1;
}

void	ft_inter(int x)				//	Etablissement de la fonction permettant d'ecrire les lignes intermediaires
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1)			//	Premier caractere
			ft_putchar('B');
		else if (i == x)		//	Dernier caractere
			ft_putchar('B');
		else if (i == x + 1)		//	Retour a la ligne
			ft_putchar('\n');
		else				//	Caracteres intermediaires
			ft_putchar(' ');
		i++;
	}
	i = 1;
}

void	ft_last(int x)
{
	int	i;

	i = 1;
	while (i <= x + 1)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i == x)
			ft_putchar('A');
		else if (i == x + 1)
			ft_putchar('\n');
		else
			ft_putchar('B');
		i++;
	}
	i = 1;
}

void	rush(int x, int y)			//	Definition de la fonction rush, qui prend en parametres les entiers  x et y fournis en entree du main
{
	int	j;				//	Definition de la variables j de type entier, permettant de se situer dans en ordonnees dans le programme

	j = 1;					//	Initialisation de j
	while (j <= y)				//	Tant que l'on a pas depasse la derniere ligne
	{
		if (j == 1)			//	Si on est sur la premiere ligne
		{
			ft_prim(x);
			j++;
		}
		else if (j >= 2 && j < y)	//	Si on est ni sur la premiere ligne ni sur la derniere
		{
			ft_inter(x);
			j++;
		}
		else if (j == y)		//	 Si on est sur la derniere ligne
		{
			ft_last(x);
			j++;
		}
	}
}
