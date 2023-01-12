/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:46:36 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/22 22:46:37 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_empty_matrix(int matrix[4][4]);
void	ft_delete_spaces(char **argv, char coordinates[17]);
void	ft_fill_matrix(int matrix[4][4], char coordinates[17]);
int		check_matrix(int matrix[4][4]);
void	ft_print_matrix(int matrix[4][4]);
void	ft_fill_gaps(int matrix[4][4]);
int		ft_error_message(int argc, char **argv);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		matrix[4][4];
	char	coordinates[17];

	if (ft_error_message(argc, argv) == 1)
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	ft_empty_matrix(matrix);
	ft_delete_spaces(argv, coordinates);
	ft_fill_matrix(matrix, coordinates);
	while (check_matrix(matrix) == 0)
		ft_fill_gaps(matrix);
	ft_print_matrix(matrix);
}
