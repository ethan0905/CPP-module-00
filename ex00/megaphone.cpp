/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:02:12 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 15:43:09 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac >= 2)
    {
        while (av[i])
        {
            std::string str(av[i]);

            j = 0;
            while (j < (int)str.length())
            {
                str[j] = (char)std::toupper(str[j]);
                j++;
            }
            std::cout << str; 
            i++;
        }
		std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
