%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
int yywrap(void);
void set_numnode(int val,int type);
int get_numnode();
void set_boolnode(int val,int type);
int get_boolnode();
void set_variable(char* name,int val);
int get_var(char* name);
void set_fun(char* name);
void set_param(char* name);
void insert(char* data);
int eval();


int temp1;
int temp2;

int exp_number;
int bool_number;

int funtion;

typedef struct Num_Node {
    int value;
    int type;
    struct Num_Node *ptr;
} num_node;

num_node *num_ptr = NULL;

typedef struct Bool_Node {
    int word;
    int type;
    struct Bool_Node *ptr;
} bool_node;

bool_node *bool_ptr = NULL;

typedef struct Var_Node {
    char* name;
    int val;
    struct Var_Node *ptr;
} var_node;

var_node *var_ptr = NULL;

typedef struct Par_Node {
    char* name;
    int val;
    struct Par_Node *ptr;
} par_node;

typedef struct Fun_Node {
    char* name;
    par_node parameter[99];
    char* cal[99];
    int param_number;
    int top;
    int val;
    struct Fun_Node *ptr;
} fun_node;

fun_node *fun_ptr=NULL;


%}

%union {
    int num;
    char* str;
}

%token PLU MIN MUL DIV MOD GRE SMA EQU LEP RIP PRN PRB SPA OR AND NOT DE FNN FI TRUE FALSE
%token <num> NUM
%token <str> ID
%left SPA
%%

program : program line
        | line
        ;

line    : stmt SPA 
        | SPA
        ;

stmt    : exp
        | prtstmt
        | defstmt 
        ;

exps    : exp           
        | exps SPA exp
        ;

exp     : NUM       {set_numnode($1,exp_number);}
        | TRUE      {set_boolnode(1,bool_number);}
        | FALSE     {set_boolnode(0,bool_number);}
        | ID        {set_numnode(get_var($1),exp_number);}
        | num_op
        | log_op
        | fun_call
        | fun_exp   
        | if_exp
        ;

num_op  : LEP PLU{exp_number++;} SPA exp SPA exps RIP      {
                                                                int type=num_ptr->type;
                                                                temp2=get_numnode();
                                                                exp_number--;
                                                                while(num_ptr!=NULL && type==num_ptr->type && type != 0){
                                                                    temp1=get_numnode();
                                                                    temp2+=temp1;
                                                                }
                                                                set_numnode(temp2,exp_number);
                                                                
                                                            } //PLUS
        | LEP MIN SPA exp SPA exp RIP       {temp1=get_numnode();temp2=get_numnode();set_numnode(temp2-temp1,exp_number);} //MINUS
        | LEP MUL{exp_number++;} SPA exp SPA exps RIP       {   
                                                                int type=num_ptr->type;
                                                                temp2=get_numnode();
                                                                exp_number--;
                                                                while(num_ptr!=NULL && type==num_ptr->type && type != 0){
                                                                    temp1=get_numnode();
                                                                    temp2=temp1*temp2;
                                                                }
                                                                set_numnode(temp2,exp_number);
                                                            } //MULTIFY
        | LEP DIV SPA exp SPA exp RIP       {temp1=get_numnode();temp2=get_numnode();set_numnode(temp2/temp1,exp_number);} //DIV
        | LEP MOD SPA exp SPA exp RIP       {temp1=get_numnode();temp2=get_numnode();set_numnode(temp2%temp1,exp_number);} //MOD
        | LEP GRE SPA exp SPA exp RIP       {
                                                temp1=get_numnode();
                                                temp2=get_numnode();
                                                if(temp2>temp1){
                                                    set_boolnode(1,bool_number);
                                                }
                                                else{
                                                    set_boolnode(0,bool_number);
                                                }
                                            } //GREATER
        | LEP SMA SPA exp SPA exp RIP       {
                                                temp1=get_numnode();
                                                temp2=get_numnode();
                                                if(temp2<temp1){
                                                    set_boolnode(1,bool_number);
                                                }
                                                else{
                                                    set_boolnode(0,bool_number);
                                                }
                                            } //SMALLER
        | LEP EQU SPA exp SPA exp RIP       {
                                                temp1=get_numnode();
                                                temp2=get_numnode();
                                                if(temp2==temp1){
                                                    set_boolnode(1,bool_number);
                                                }
                                                else{
                                                    set_boolnode(0,bool_number);
                                                }
                                            } //EQUAL
        ;

log_op  : LEP{bool_number++;} AND SPA exp SPA exps RIP  {  //AND
                                                            int type=bool_ptr->type;
                                                            temp1=get_boolnode();
                                                            bool_number--;
                                                            while(bool_ptr!=NULL && type==bool_ptr->type && type != 0){
                                                                temp2=get_boolnode();
                                                                temp1=temp1*temp2;
                                                            }
                                                            set_boolnode(temp1,bool_number);
                                                        } 
        | LEP{bool_number++;} OR SPA exp SPA exps RIP   {  //OR
                                                            int type=bool_ptr->type;
                                                            temp1=get_boolnode();
                                                            bool_number--;
                                                            while(bool_ptr!=NULL && type==bool_ptr->type && type != 0){
                                                                temp2=get_boolnode();
                                                                temp1=temp1+temp2;
                                                            }
                                                            if(temp1==0){
                                                                set_boolnode(0,bool_number);
                                                            }
                                                            else{
                                                                set_boolnode(1,bool_number);
                                                        }
                                                        } 
        | LEP NOT SPA exp RIP                           {  //NOT
                                                            int type=bool_ptr->type;
                                                            temp1=get_boolnode();
                                                            bool_number--;
                                                            if(temp1==0){
                                                                set_boolnode(1,bool_number);
                                                            }
                                                            else{
                                                                set_boolnode(0,bool_number);
                                                            }
                                                        } 
        ;
if_exp  : LEP FI SPA exp SPA exp SPA exp RIP    {
                                                    int test=get_boolnode();
                                                    int el=get_numnode();
                                                    int th=get_numnode();
                                                    if(test==1){
                                                        set_numnode(th,exp_number);
                                                    }
                                                    else{
                                                        set_numnode(el,exp_number);
                                                    }
                                                }

fun_id  : fun_id SPA fun_id
        | ID                {set_param($1);}
        | 
        ;
fes     : fe
        | fe SPA fes
        ;
fe      : NUM   {char* str = (char*)malloc(20 * sizeof(char));sprintf(str,"%d",$1);insert(str);}
        | ID    {insert($1);}
        | LEP{insert("(");} PLU{insert("+");} SPA fes RIP{insert(")");}   
        | LEP{insert("(");} MIN{insert("-");} SPA fes RIP{insert(")");} 
        | LEP{insert("(");} MOD{insert("%");} SPA fes RIP{insert(")");} 
        | LEP{insert("(");} MUL{insert("*");} SPA fes RIP{insert(")");}  
        | LEP{insert("(");} DIV{insert("/");} SPA fes RIP{insert(")");} 
        ;

expm    : expm SPA exp
        | exp
        |
        ;

fun_exp : LEP FNN{set_fun("");} SPA LEP fun_id RIP SPA fes RIP 

fun_call: LEP fun_exp SPA expm RIP    {for(int i=fun_ptr->param_number-1;i>=0;i--){fun_ptr->parameter[i].val=get_numnode();}set_numnode(eval(fun_ptr),exp_number);}
        | LEP ID expm RIP   {   
                                fun_node *temp=fun_ptr;
                                while(1){
                                    if(strcmp(temp->name, $2)==0){
                                        for(int i=temp->param_number-1;i>=0;i--){
                                            temp->parameter[i].val=get_numnode();
                                        }
                                        set_numnode(eval(temp),exp_number);
                                        break;
                                    }
                                    temp=temp->ptr;
                                }                                    
                            }
        ;


prtstmt : LEP PRN SPA exp RIP {printf("%d\n",get_numnode());}
        | LEP PRB SPA exp RIP {
                                if(get_boolnode()==1){
                                    printf("#t\n");
                                }
                                else{
                                    printf("#f\n");
                                }
                              }
        ;

defstmt : LEP DE SPA ID SPA exp RIP {   
                                        if(funtion==1){
                                            fun_ptr->name=$4;
                                            funtion=0;
                                        }
                                        else{
                                            set_variable($4,get_numnode());
                                            
                                        }
                                    }
        ;



%%
void set_numnode(int val,int type){
    num_node *newnode=malloc(sizeof(num_node));
    newnode->value=val;
    newnode->type=type;
    newnode->ptr=num_ptr;
    num_ptr=newnode;
}
int get_numnode(){
    int t_value=num_ptr->value;
    num_node *t_node=num_ptr;
    num_ptr=num_ptr->ptr;
    free(t_node);
    return t_value;
}
void set_boolnode(int val,int type){
    bool_node *newnode=malloc(sizeof(bool_node));
    newnode->word=val;
    newnode->type=type;
    newnode->ptr=bool_ptr;
    bool_ptr=newnode;
}
int get_boolnode(){
    int t_word=bool_ptr->word;
    bool_node *t_node=bool_ptr;
    bool_ptr=bool_ptr->ptr;
    free(t_node);
    return t_word;
}
void set_variable(char* name,int val){
    var_node *newnode=malloc(sizeof(var_node));
    newnode->name=name;
    newnode->val=val;
    newnode->ptr=var_ptr;
    var_ptr=newnode;
}
int get_var(char* name){
    var_node *temp=var_ptr;
    while(temp!=NULL){
        if(strcmp(temp->name, name)==0){
            return temp->val;
        }
        temp=temp->ptr;
    }
}
void set_fun(char* name){
    fun_node *newnode=malloc(sizeof(fun_node));
    newnode->name=name;
    newnode->param_number=0;
    newnode->top=-1;
    newnode->ptr=fun_ptr;
    funtion=1;
    fun_ptr=newnode;
    
}
void set_param(char* name){
    fun_ptr->parameter[fun_ptr->param_number].name=name;
    fun_ptr->param_number++;
}
void insert(char* data){
    fun_ptr->top++;
    fun_ptr->cal[fun_ptr->top]=data;
}
int eval(fun_node *fun_ptr){
    int type=0;
    num_node stack[99];
    int stack_top=-1;
    for(int i=fun_ptr->top;i>=0;i--){
        bool found=false;
        if(fun_ptr->cal[i][0]=='+'){
            while(1){
                if(stack[stack_top-1].type!=type){
                    stack[stack_top].type=type-1;
                    break;
                }
                stack[stack_top-1].value=stack[stack_top].value+stack[stack_top-1].value;
                stack_top--;
            }
        }else if(fun_ptr->cal[i][0]=='-'){
            stack[stack_top-1].value=stack[stack_top].value-stack[stack_top-1].value;
            stack[stack_top-1].type--;
            stack_top--;
        }else if(fun_ptr->cal[i][0]=='/'){
            stack[stack_top-1].value=stack[stack_top].value/stack[stack_top-1].value;
            stack[stack_top-1].type--;
            stack_top--;
        }else if(fun_ptr->cal[i][0]=='%'){
            stack[stack_top-1].value=stack[stack_top].value%stack[stack_top-1].value;
            stack[stack_top-1].type--;
            stack_top--;
        }else if(fun_ptr->cal[i][0]=='*'){
            while(1){
                if(stack[stack_top-1].type!=type){
                    stack[stack_top].type=type-1;
                    break;
                }
                stack[stack_top-1].value=stack[stack_top].value*stack[stack_top-1].value;
                stack_top--;
            };
        }else if(fun_ptr->cal[i][0]=='('){
            type--;
        }else if(fun_ptr->cal[i][0]==')'){
            type++;
        }else{
            for(int j=0;j<fun_ptr->param_number;j++){
                if (strcmp(fun_ptr->parameter[j].name,fun_ptr->cal[i])==0){
                    stack_top++;
                    stack[stack_top].value=fun_ptr->parameter[j].val;
                    stack[stack_top].type=type;
                    found=true;
                    break;
                }
            }
            if(!found){
                stack_top++;
                stack[stack_top].value=atoi(fun_ptr->cal[i]);
                stack[stack_top].type=type;
            }
        }
    }
    return stack[0].value;
}
void yyerror(char *str){
    printf("syntax error\n");
    exit(0);
}

int yywrap(){
    return 1;
}
int main()
{
    yyparse();
    return 0;
}

