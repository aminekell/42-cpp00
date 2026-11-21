/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akella <akella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 10:43:16 by akella            #+#    #+#             */
/*   Updated: 2025/08/28 06:49:27 by akella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_HPP
#define HELPER_HPP

#include "Contact.hpp"
#include "PhoneBook.hpp"

// helper
std::string trim(std::string str);                    
long ft_atoi(const std::string& str);                             
bool is_all_digits(const std::string &str);
std::string ft_getline(const std::string& prompt);
bool is_not_valid(const std::string &input);

#endif