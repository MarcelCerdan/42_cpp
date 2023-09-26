/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:18:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/26 15:18:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137) {
	this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137) {
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other.getName(), 145, 137) {

	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	return ;
}

std::string ShrubberyCreationForm::getTarget() const {

	return (this->target);
}

void ShrubberyCreationForm::doExecution() const {

	std::ofstream outfile((this->target + "_shrubbery").c_str());
	if (!outfile.good())
	{
		std::cerr << "File cannot be opened." << std::endl;
		return ;
	}
	outfile << "                                                                                                               \n"
			"                                             ..                  .:                                            \n"
			"                                            .==.                .-=.                                           \n"
			"                                          :-*@@+=:            :-+@@*=:                                         \n"
			"                                           .=%#-               .-##-.                                          \n"
			"                                             =:   ..         .   --                                            \n"
			"                                             .     =:       :-    .                                            \n"
			"                                                   .+       *                                                  \n"
			"                                                    #.     :#                                                  \n"
			"                                    :   .---        :%:   :%:       .---.  :                                   \n"
			"                                    *       =.       -%=.+%:       :=      +:                                  \n"
			"                                .:-%@*-:.    ++-=.    :@@%:    .=-*+    .:*%%=::                               \n"
			"                                .:-#%*:.     := ..     =@-     .. +:    .:+%%-..                               \n"
			"                                   .*      :: +*+=:.   =@:   .:=+*+ :-     +:                                  \n"
			"                                    :       +.   .-+*: =@: -*+-.   .+      .                                   \n"
			"                                            +-      .*+=@-**.      :+                                          \n"
			"                                   :-       =#-=-.    *@@%*    .-=-*=       ::                                 \n"
			"                        .           .==      +%  =    .%@%.    =  #+      -+.           .                      \n"
			"                       :=             *-     =+    =+- =@+ -+-    +=     -*             +                      \n"
			"                      :*#-            :%.    %.   +-:=#=@##=:==    %    .%:           .*%=                     \n"
			"                    :=*@@*=-.     :+== =%*-  %=   --  :@@@.  -:   -%  -*%+=++:      :=+@@#=-.                  \n"
			"                      .-+.        +  :* .+*###%%##*+.  *@#  .=**#%%###*+.*:  +        .:*.                     \n"
			"                       .:    ...      #==.       .-#@+ =@# =@#-.       ==#      :-==-:  -                      \n"
			"                         -----=+#*.   *-.=  -=-     +@#*@%#@*    -=-  =:-#    -#+:.  .--                       \n"
			"                                 -%-  +=.  .: -**=   :#@@@#:  =*#- ::  .-*   +%:                               \n"
			"                                  :%*..#.      -%=:.   *@#  :-=##-:.    #: -#*.                                \n"
			"                                    =**%%=++*%@@@@@@%*-+@*+%@@@%%#*###*##**=:                                  \n"
			"                                       .:-+**##*+===++%@@@*+===++##*+=:                                        \n"
			"                             ::  =.    -**=:           *@#          .-+*=.    =: .:                            \n"
			"                            .#-=#*. .+*-       .=*%%%#+*@%=#%%%#+:      :=*:  -%+-+=                           \n"
			"                                .=+%@-       .***#:.=#@@@@%+: .%+*#:      .#@*+:                               \n"
			"                            .     +%#  ..   :%- :#.   :@@@.   :#. :%-   :  =%%.                                \n"
			"                           ==  .-*= +*=+:   #=   .*.   #@@   :*    -%   +=+#::*=:  .#                          \n"
			"                            ==%+-           %     *-   *@%   -+     %.         :=#*=.                          \n"
			"                             =+.:          -%  +.::    *@@    .: *  #=         .:.%                            \n"
			"                             .*+*      =  -#=*=-       *@@.      -=+=#-  -.    =+*-                            \n"
			"                                       +**=.           #@@.           =*++.                                    \n"
			"                                                       %@@:                                                    \n"
			"                                                       @@@:                                                    \n"
			"                                                      .@@@:                                                    \n"
			"                                                      :@@@-                                                    \n"
			"                                                      =@@@+                                                    \n"
			"                                                      +@@@#                                                    \n"
			"                                                      *@@@%                                                    \n"
			"                                                      *@@@%                                                    \n"
			"                                                      #@@@%                                                    \n"
			"                                                      #@@@@                                                    \n"
			"                                                      %@@@@.                                                   \n"
			"                                                      %@@@@-                                                   \n"
			"                                                      @@@@@=                                                   \n"
			"                                                     .@@@@@+                                                   \n"
			"                                                     :@@@@@*                                                   \n"
			"                                                     -@@@@@@.                                                  \n"
			"                                                     =@@@@@@=                                                  \n"
			"                                                    :@@@@@@@@.                                                 \n"
			"                                                   .%@@@@@@@@*                                                 \n"
			"                                                  .#@@@@@@@@@@%-                                               \n"
			"                                               .:+%@@@@@@@@@@@@@*.                                             \n"
			"                                            .+%@@@@@@@@@@@@@@@@@@@%*===:                                       \n"
			"                                         :=*%@@@@@@@@@@@@@@@@@@@@@@@@@@@#=:                                    \n"
			"                                     -*%@#++@@%+=--%@+--#@@%:..+@@*#@@@%###%*.                                 \n"
			"                                    *=..    @%.    +=    =@*   -%:  +@:    .*#:                                \n"
			"                                    .      +#.     .      -#=:  :    %.       .                                \n"
			"                                          :-                         .:                                        \n";
			outfile.close();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {

	if (this != &other) {
		this->target = other.target;
	}
	return (*this);
}
