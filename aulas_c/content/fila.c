#include<stdio.h>
#include<stdlib.h>

/*
    The line, follows a simple concept, the FIFO (First in First out)
    In a line, the first person who enters the line, is the firs to go out.
    Here, in coding, we have the same idea.

    To add someone to a line we use -> enqueue();

    To remove we use -> dequeue();

    If you wanto to clean the line you can use -> clean();

    ============================
    Line Struct:

    line[10]    //the own line
    head    //the first elemente of the line
    tail    // show us how many elementes are in the line

    ============================
    Aplication:
    
    We use a line when we want to organize the service order of the elementes.

    

*/