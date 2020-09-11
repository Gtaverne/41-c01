/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 21:57:17 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/11 13:07:16 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

void entr(void)
{
	write(1, "______\nNew exo\n ", 15);
}

int main()
{
	entr();
	int *p;
	int i = 5;
	p = &i;
	printf("Valeur initialement pointee : %d\n", *p);
	ft_ft(p);
	printf("Valeur modifiee : %d\n", *p);
	
	entr();
	
	i = 27;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	
	ptr2 = &p;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("V initially pointed: %d\n", *********ptr9);
	ft_ultimate_ft(ptr9);
	printf("V pointed after func ex01: %d\n", *********ptr9);
	
	entr();
	
	int nb1,nb2;
	int *pnb1;
	int *pnb2;

	nb1 = 18;
	nb2 = 6;
	pnb1 = &nb1;
	pnb2 = &nb2;
	printf("Before swap:\nnb1: %d nb2: %d\n", *pnb1,*pnb2);
	ft_swap(pnb1, pnb2);
	printf("After swap:\nnb1: %d nb2: %d\n", *pnb1,*pnb2);
	
	entr();
    printf("Div Mod ex03\n");
	int a, b;
	int *pa;
	int *pb;
	
	a = 500;
	b = 400;
	pa = &a;
	pb = &b;
	printf("a: %d b: %d\n", *pa,*pb);
	printf("*pa: %d, *pb : %d\n", *pa,*pb);
	ft_div_mod(a, b, pa, pb);
	printf("*pa: %d, *pb : %d\n", *pa,*pb);
	
	entr();
	printf("Div Mod ex04\n");
	*pa = 97;
	*pb = 10;
	printf("*pa: %d, *pb : %d\n", *pa,*pb);
	ft_div_mod(a, b, pa, pb);
	printf("*pa: %d, *pb : %d\n", *pa,*pb);

	entr();

	char *str;
	str = "Mazel taff";
//	printf("My test with printf: %s\n\n", str);
	printf("And with the function:\n");
	ft_putstr(str);
	printf("\nOn a bien la chaine au dessus ?\n\n");

	entr();
	printf("Test strlen: %d\n", ft_strlen(str));
	
	entr();
	printf("Even length str\n");
	int tab_int[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	int lon_int;
	lon_int = 8;
	ft_rev_int_tab(tab_int, lon_int);
	int k = 0;
	while ( k < lon_int)
	{
		printf("%d,", tab_int[k]);
		k++;
	}
	
	printf("\n\nOdd length str:\n");
	int tab_int_odd[9] = {2, 4, 6, 8, 412, 10, 11, 12, 24};
	int lon_int_odd;
	lon_int_odd = 9;
	ft_rev_int_tab(tab_int_odd, lon_int_odd);
	k = 0;
	while ( k < lon_int_odd)
	{
		printf("%d,", tab_int_odd[k]);
		k++;
	}
	
	entr();
	
	printf("\nTest avec tab int even\n");
	k = 0;
	while ( k < lon_int)
	{
		printf("%d,", tab_int[k]);
		k++;
	}
	printf("\nApres tri\n");
	ft_sort_int_tab(tab_int, lon_int);
	k = 0;
	while ( k < lon_int)
	{
		printf("%d,", tab_int[k]);
		k++;
	}

	printf("\n\nTest avec tab int odd\n");
	k = 0;
	while ( k < lon_int_odd)
	{
		printf("%d,", tab_int_odd[k]);
		k++;
	}
	
	printf("\nApres tri\n");
	ft_sort_int_tab(tab_int_odd, lon_int_odd);
	k = 0;
	while ( k < lon_int_odd)
	{
		printf("%d,", tab_int_odd[k]);
		k++;
	}

}
