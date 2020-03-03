//
// Created by Juanu on 15/02/2020.
//




#define TRUE 1
#define FALSE 0

struct mystring{
    char letra;
    struct mystring *sig;
};

typedef struct mystring mystring_t;
typedef struct mystring nodo_t;
typedef int bool_t;

/*falta crear con contenido y arreglar los headers*/
mystring_t *crear(void); /*FUNCIONA*/
mystring_t *crear_con_contenido( char *cad); /*POR FIN FUNCIONA*/
int mystrlen(mystring_t *str); /*funciona*/
void *mystrcat(mystring_t **dest, mystring_t *src); /* funciona*/
void *mystrncat(mystring_t **dest, mystring_t *src, int n); /*funciona*/
mystring_t *mystrchr(mystring_t *str, char c); /*funciona x*/
int mystrcmp(mystring_t *str1, mystring_t *str2); /*ya x*/
mystring_t *mystrcpy(mystring_t **dest, mystring_t *src);/*ya x*/
mystring_t *mystrncpy(mystring_t **dest, mystring_t *src, int n); /*ya x*/
bool_t mystrsub(mystring_t *str1, mystring_t *str2);/*ya x*/
int es_vacia(mystring_t *c); /* x*/
void mydelete(mystring_t **c) /* X*/;
void myprintf(mystring_t *c); /*funciona*/
bool_t insertar(nodo_t **c, char n); /*funciona*/
