/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akella <akella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:12:23 by akella            #+#    #+#             */
/*   Updated: 2025/08/27 09:46:56 by akella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::cout << "\n[ My Awesome PhoneBook ]\nCommand : ADD , SEARCH , EXIT\n";
    for(std::string command; true;)
    {
        command = ft_getline("Enter Command : ");
        if(command == "ADD")
            PhoneBook.add_Contact();
        else if(command == "SEARCH")
            PhoneBook.search_Contact();
        else if(command == "EXIT")
            return(std::cout << "Exit : the contacts are lost forever!\n", 0);
        else
            std::cout << "[ Enter A Valide Command Please :) ]\n[Command : ADD , SEARCH , EXIT]\n";
    }
    return 0;
} 