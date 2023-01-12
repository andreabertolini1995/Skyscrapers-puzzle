/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_arrays.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:43:00 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/23 17:43:02 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_print_array(int arr[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_putnbr(arr[i]);
		ft_putchar(' ');
		i++;
	}
}

void	ft_empty_array(int arr[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		arr[i] = 0;
		i++;
	}
}

void	ft_empty_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_print_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(matrix[i][j]);
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	check_matrix(int matrix[4][4])
{
	int	i;
	int	j;
	int	is_full;

	is_full = 1;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix[i][j] == 0)
			{
				is_full = 0;
				return (is_full);
			}
			j++;
		}
		i++;
	}
	return (is_full);
}
