typedef struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
}Treenode;

typedef struct tnode *Treeptr;

Treeptr talloc(void){
    return (Treeptr) malloc(sizeof(Treenode));
}
