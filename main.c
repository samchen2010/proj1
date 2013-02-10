/*
 * main.c
 *
 *  Created on: Feb 10, 2013
 *      Author: siyuanch
 */
int v=4;
int matrix[][] ;

read_Edge(){

}


int main(){

int v=4;
// read the input file//the edge.
	int i,j;
	for(i=0; i<v;i++){
		for(j=0;i<v;j++){
			read_Edge(d);
		}
	}

	printf("hello");

}



void output(){
	int i,j;
		for(i=0; i<v;i++){
			for(j=0;i<v;j++){
				printf("%d ",matrix[i][j]);
			}
		}
}



change 001
<<<<<<< HEAD

change 002

=======
////change  3
>>>>>>> upstream/master
char * read (char *filen,char*key,struct list * head){
    char *my_string;
    char *filecontent=malloc(100);
    FILE *fp;
    if ((fp = fopen(filen, "r")) == NULL) {
        printf(" can't open:%s.\n", filen);
        return 1;
    }
    else {
        struct list * temp=malloc(sizeof( struct list));;
        
        int bi=0;
        char *a; char *s;char *b;
        int loop=0;
        char *out=malloc(10000);
        struct nodeE * nod; struct nodeE * nodtemp;
        while (fgets(filecontent, 1000, fp)!= NULL)
        {
            TokenizerT *tk;
            tk= TKCreate(filecontent);
            a=TKGetNextToken(tk);
            
            if(strcmp(a,"<list>")==0){
