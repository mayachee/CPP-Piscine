/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:06:34 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/14 19:52:50 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
  int i = 1;
  int j = 0;

  if (ac == 1)
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else
  {
    std::string str = "";
    while (av[i])
    {
      j = 0;
      str = av[i];
      while (str[j])
      {
        str[j] = toupper(str[j]);
        std::cout << str[j];
        j++;
      }
      i++;
    }
    std::cout << std::endl;
  }
  return 0;
}
