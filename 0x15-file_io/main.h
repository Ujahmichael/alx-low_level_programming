#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void close_elf(int elf);
#endif
