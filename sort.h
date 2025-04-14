#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - doubly linked list
 *
 * @n: integer
 * @prev: pointer to previous element
 * @next: pointer to next element
 */


typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const struct listint_s *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);


#endif
