/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:16:56 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/23 19:17:01 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_int(char c);
void	ft_fill_cols(int matrix[4][4], int view, int opposite_view, int row);
void	ft_fill_rows(int matrix[4][4], int view, int opposite_view, int row);

void	ft_fill_matrix(int matrix[4][4], char coordinates[17])
{
	int	i;
	int	view;
	int	opposite_view;

	i = 0;
	while (coordinates[i] != '\0')
	{
		view = ft_char_int(coordinates[i]);
		opposite_view = ft_char_int(coordinates[i + 4]);
		if (i >= 0 && i <= 3)
			ft_fill_cols(matrix, view, opposite_view, i);
		else if (i >= 8 && i <= 11)
			ft_fill_rows(matrix, view, opposite_view, i - 8);
		else
			i++;
		i++;
	}
}
