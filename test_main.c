/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:52:13 by dcornea           #+#    #+#             */
/*   Updated: 2017/05/01 20:21:18 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/mlx.h"
#include <stdio.h>













int		main(int argc, char **argv)
{

	enemi e; 
	int h; 
	int w; 
	void *image; 

	int x = 500; 
	int y = 500; 
	h = 1000; 
	w = 1000;
   int i = 0; 	
	double    z = 0.0; 

   double  m = 0.0; 


	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, h, w, "Julia Set");

//	image = mlx_new_image(e.mlx, h, w); 	
	while (i < 32000) 
	{
		m = z; 
		z = z*z + 1.25;
		printf("x = %f, y = %f", m , z ); 
	    mlx_pixel_put(e.mlx, e.win, 500 + m, 500 + z, 0xFF00FF); 	
		i++;
	}
	
	
	
//	mlx_put_image_to_window(e.mlx, e.win, image, 0, 0); 

 


	mlx_loop(e.mlx); 
	return (0);
}
