/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akella <akella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:56:29 by akella            #+#    #+#             */
/*   Updated: 2025/08/25 17:02:02 by akella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
    for (int i = 1; av[i]; i++)
    {
        std::string str = av[i];
        for (size_t j = 0; j < str.length(); j++)
            str[j] = std::toupper(str[j]);
        std::cout << str;
    }
    std::cout << std::endl;
    return 0;
}
