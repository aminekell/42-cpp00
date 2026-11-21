/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akella <akella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:12:36 by akella            #+#    #+#             */
/*   Updated: 2025/08/28 06:57:35 by akella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "helper.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
        int index;
        int old_index;
        
    public:
        PhoneBook() : index(0), old_index(0) {}
        void add_Contact();
        void search_Contact() const;
        void display_Contact() const;
};
#endif