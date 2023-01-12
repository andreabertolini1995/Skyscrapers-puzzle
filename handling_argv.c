/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:15:43 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/23 19:15:44 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

void	ft_delete_spaces(char **argv, char coordinates[17])
{
	int	iter;
	int	k;

	iter = 0;
	k = 0;
	while (argv[1][iter] != '\0')
	{
		if (argv[1][iter] == ' ')
			iter++;
		else
		{
			coordinates[k] = argv[1][iter];
			k++;
			iter++;
		}
	}
}

int	ft_char_int(char c)
{
	int	n;

	n = (int) c;
	return (n - 48);
}

int	ft_error_message(int argc, char **argv)
{
	int	i;

	if (argc != 2 || ft_strlen(argv[1]) != 31)
		return (1);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if ((i >= 0 && i <= 7) || (i >= 16 && i <= 24))
		{
			if (((i % 2) == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
				|| ((i % 2) == 1 && argv[1][i] != ' '))
				return (1);
		}
		i++;
	}
	return (0);
}
