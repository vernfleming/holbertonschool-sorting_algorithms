#ifndef SORT_H
#define SORT_H

#include <stddef.h>


void print_array(const int *array, size_t size);
void print_list(const struct listint_s *list);


void bubble_sort(int *array, size_t size);


typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

#endif
