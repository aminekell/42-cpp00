/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akella <akella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:12:19 by akella            #+#    #+#             */
/*   Updated: 2025/08/28 07:40:20 by akella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

bool is_all_digits(const std::string &str)
{
    for(size_t i = 0; i < str.length(); i++){
        if(std::isdigit(str[i]) == 0) 
            return false;
        }
    return true;
}

std::string trim(std::string str)
{
    int start = 0;
    int end = str.length();
    for(; start < end  && std::isspace(str[start]); start++);
    for(; end > start  && std::isspace(str[end - 1]); end--);
    return str.substr(start, end - start);
}

long ft_atoi(const std::string &str)
{
    long result = 0;
    for(size_t i = 0; i < str.length() && std::isdigit(str[i]); i++)
    {
        result = result * 10 + (str[i] - '0');
        if(result > 2147483647) 
            return -1;
    }
    return (result);
}

std::string ft_getline(const std::string &prompt)
{
    std::string input;

    std::cout << prompt;
    std::getline(std::cin, input);
    if (std::cin.eof())
    {
        std::cout << "\nEXIT\n";
        exit(0);
    }
    return trim(input);
}

bool is_not_valid(const std::string &input)
{
    if (input.empty())
        return true;
    for (size_t i = 0; i < input.length(); i++)
    {
        char c = input[i];
        bool is_letter = static_cast<char>(std::isalpha(c));
        bool is_number = static_cast<char>(std::isdigit(c));
        bool is_space = (c == 32);
        if (!is_letter && !is_number && !is_space)
            return true;
    }
    return false;
}