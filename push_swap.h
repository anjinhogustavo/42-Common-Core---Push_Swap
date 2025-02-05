/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-05 11:40:01 by user              #+#    #+#             */
/*   Updated: 2025-02-05 11:40:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "path to printf"
# include "path to libft"

typedef struct s_stack_node
{
   int  nbr;
   int  index;
   int  push_cost;
   bool above_median;
   bool cheapest;
   struct s_stack_node *target_node;
   struct s_stack_node *next;
   struct s_stack_node *prev;
}   t_stack_node;



#endif
