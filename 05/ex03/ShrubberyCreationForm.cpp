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

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", "Default", 145, 137) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", target, 145, 137) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other.getName(), other.getTarget(), 145, 137) {

	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	return ;
}

void ShrubberyCreationForm::doExecution() const {

	std::ofstream outfile((this->getTarget() + "_shrubbery").c_str());
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
		this->setTarget(other.getTarget());
	}
	return (*this);
}
