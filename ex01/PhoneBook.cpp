/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akella <akella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:12:33 by akella            #+#    #+#             */
/*   Updated: 2025/08/28 06:56:59 by akella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "helper.hpp"

//addcontact
void PhoneBook::add_Contact()
{
    Contact new_contact;
    std::string input;
    //first name 
    input = ft_getline("Enter the first_name : ");
    while(is_not_valid(input))
        input = ft_getline("Error !!\nEnter the first name : ");
    new_contact.set_first_name(input);
    //last name
    input = ft_getline("Enter the last name : ");
    while(is_not_valid(input))
        input = ft_getline("Error !!\nEnter the last name : ");
    new_contact.set_last_name(input);
    //nick name 
    input = ft_getline("Enter the nickname : ");
    while(is_not_valid(input))
        input = ft_getline("Error !!\nEnter the nickname : ");
    new_contact.set_nickname(input);
    //phone number 
    input = ft_getline("Enter the phone number : ");
    while(input.empty() || !is_all_digits(input))
        input = ft_getline("Error !!\nEnter phone number : ");
    new_contact.set_phone_number(input);
    //darkest secret 
    input = ft_getline("Enter the darkest secret : ");
    while(is_not_valid(input))
        input  = ft_getline("Error !!\nEnter the darkest secret : ");
    new_contact.set_darkest_secret(input);
    //circuler array
    contacts[old_index] = new_contact;
    old_index = (old_index + 1) % 8;
    if(index < 8)
        index++;
    std::cout  << "Contact Added Success ! \n";

}

//search_contact
void PhoneBook::search_Contact() const
{
    if(index == 0)
    {
        std::cout << "Phonebook is empty !!\n";
        return ;
    }
    std::string input;
    int search_index;
    display_Contact();
    input = ft_getline("Enter contact index to display : ");
    while(input.empty() || !is_all_digits(input))
        input = ft_getline("Error !!\nEnter contact index to display : ");
    search_index = ft_atoi(input);
    if(search_index < 0 || search_index >= index)
    {
        std::cout  << "invalide index!!\n";
        return ;
    }
    std::cout   << "\n[contact details]\n";
    std::cout   << "First name : "  << contacts[search_index].get_first_name() << "\n";
    std::cout   << "Last name  : " << contacts[search_index].get_last_name() << "\n";
    std::cout   << "Nickname : " << contacts[search_index].get_nickname() << "\n";
    std::cout   << "Phone number : " << contacts[search_index].get_phone_number() << "\n";
    std::cout   << "Darkest secret : " << contacts[search_index].get_darkest_secret() << "\n";

}
//display_contact
void PhoneBook::display_Contact() const
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|\n|----------|----------|----------|----------|\n";
    for(int i = 0; i < index ; i++ )
    {
        std::string firstname = contacts[i].get_first_name(); 
        std::string _nickname = contacts[i].get_nickname(); 
        std::string lastname = contacts[i].get_last_name();
        if(firstname.length() > 10)
            firstname = firstname.substr(0, 9) + ".";
        if(lastname.length() > 10)
            lastname = lastname.substr(0, 9) + ".";
        if(_nickname.length() > 10)
            _nickname = _nickname.substr(0, 9) + ".";
        std::cout << "|" << std::setw(10) << i <<  "|" << std::setw(10)
         << firstname << "|" << std::setw(10) << lastname << "|" <<  std::setw(10) << _nickname << "|\n";
    }
}