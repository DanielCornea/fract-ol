/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_frac.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 10:03:31 by dcornea           #+#    #+#             */
/*   Updated: 2017/05/02 12:28:42 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/mlx.h"
#include <stdio.h>
#define WIDTH 1000 
#define HEIGHT 1000

	/* real to screen */
#define fx(x) ((int) ((x + 2)/4.0 * WIDTH))
#define fy(y) ((int) ((2 - y)/4.0 * HEIGHT))

	/* screen to real */
#define gx(i) ((i)*4.0/WIDTH - 2)
#define gy(j) ((j)*4.0/HEIGHT - 2)


static void julia(int it, int pd, enemi e)
{
	int p;
	long double re = -0.75, im = 0;
	long double x0 = 0, y0 = 0;
	int color; 
//	cout << "Enter c" << endl;
//	cin >> re >> im;
	im = -0.8 ; 
	for (int i = fx(-2.0); i <= fx(2.0); i++)
	{
		for (int j = fy(-2.0); j >= fy(2.0); j--)
		{
			long double x = gx(i), y = gy(j), t;
			int k = 0;
			while (x*x + y*y < 4 && k < it)
			{
				t = x*x - y*y + re;
				y = 2*x*y + im;
				x = t;
				k++;
			}
			p = (int) (k * pd);
			if (p ==1)
				color = 0xFF00FF; 
			if (p==2)
				color = 0x00FF00; 
			if (p == 3)
				color = 0x0000FF; 
			//printf("p = %d", p); 
			mlx_pixel_put(e.mlx, e.win, i, j,color);
		//setcolor(COLOR(colour[p][0],colour[p][1],colour[p][2]));
		//	cout << p; // for ASCII output
		//	cout << endl; // for ASCII output
		}
	}
}



int main ()
{
	enemi e;
	int x; 
	int y; 
	int i; 

	x = 300; 
	y = 200; 

	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 1000, 1000, "Julia Set");
	julia(600, 1, e); 
/*
	i = 0; 
	while (y < x)
	{
		while (i<y) 
		{
			mlx_pixel_put(e.mlx, e.win, x, y, 0xFF00FF);
			i++; 
		}
		y++; 
	}
	*/
	mlx_loop(e.mlx);
}




