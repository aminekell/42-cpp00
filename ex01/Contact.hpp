/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akella <akella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:12:14 by akella            #+#    #+#             */
/*   Updated: 2025/08/27 13:19:49 by akella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public :
        //getter
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nickname() const;
        std::string get_phone_number() const;
        std::string get_darkest_secret() const;
        //setter
        void set_first_name(std::string new_first_name);
        void set_last_name(std::string new_last_name);
        void set_nickname(std::string new_nickname);
        void set_phone_number(std::string new_phone_number);
        void set_darkest_secret(std::string new_darkest_secret);
};

#endif