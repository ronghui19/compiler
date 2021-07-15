#include <stdio.h>
// #include <stdlib.h>

#include "util.h"
#include "straght_line.h"

#define MAX(a, b) (a > b ? a : b)

int maxargs(A_stm stm);
int maxargsExp(A_exp exp);


int maxargsExp(A_exp exp) {

    switch (exp->kind) {
        case A_idExp:
            return 0;
        case A_numExp:
            return 0;
        case A_opExp:
            return MAX(maxargsExp(exp->u.op.left), 
                        maxargsExp(exp->u.op.right));
        case A_eseqExp:
            return MAX(maxargsExp(exp->u.eseq.stm),
                        maxargsExp(exp->u.eseq.exp));
        default:
            fprintf(stderr, "unknown expression kind");
            exit(1);
    }
}

int maxargs(A_stm stm) {

    A_expList list = stm->u.print.exps;
    


}

int main(int argc, char const *argv[])
{
    
    return 0;
}
