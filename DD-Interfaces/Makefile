.PHONY : run

run: tablasDeConversion
	./tablasDeConversion

tablasDeConversion : conversion.o tablasDeConversion.o
	gcc conversion.o tablasDeConversion.o -o tablasDeConversion

conversion.o: conversion.c
	gcc -c conversion.c -o conversion.o

tablasDeConversion.o : tablasDeConversion.c
	gcc -c tablasDeConversion.c -o tablasDeConversion.o

