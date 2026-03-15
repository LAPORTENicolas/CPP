#pragma once

#ifndef _HARL_H__
# define _HARL_H__

# include <string>

class Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
		Harl();
		~Harl();
		void	(Harl::*complain(std::string))();
};

#endif // _HARL_H__
