/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:34:24 by murachid          #+#    #+#             */
/*   Updated: 2022/02/01 09:12:22 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

int main (int argc, char **argv) 
{
	int i;
	int j;
	char c; 
	i = 1;
	j = 0;
	if(!argv[1])
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			c = toupper(argv[i][j]);
			std::cout << c;
			j++;
		}
		i++;
	}
	std::cout<< std::endl;
	return 0;
}
