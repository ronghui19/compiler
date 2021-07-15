#include "util.h"
#include "straght_line.h"

A_stm A_CompoundStm(A_stm stm1, A_stm stm2) {

    A_stm s = checked_malloc(sizeof(*s));
    s->kind = A_CompoundStm;
    s->u.compound.stm1 = stm1;
    s->u.compound.stm2 = stm2;
    return s;
}

A_stm A_AssignStm(string id, A_exp exp) {
    A_stm s = checked_malloc(sizeof(*s));
    s->kind = A_AssignStm;
    s->u.assign.id = id;
    s->u.assign.exp = exp;
    return s;
}

A_stm A_printStm(A_expList exps) {
    A_stm s = checked_malloc(sizeof(*s));
    s->kind = A_printStm;
    s->u.print.exps = exps;
    return s;
}

A_exp A_IDExp(string id) {
    A_exp e = checked_malloc(sizeof(*e));
    e->kind = A_idExp;
    e->u.id = id;
    return e;
}

A_exp A_NumExp(int num) {
    A_exp e = checked_malloc(sizeof(*e));
    e->kind = A_NumExp;
    e->u.num = num;
    return e;
}

A_exp A_opExp(A_exp left, A_binop oper, A_exp right) {
    A_exp e = checked_malloc(sizeof(*e));
    e->kind = A_opExp;
    e->u.op.left = left;
    e->u.op.oper = oper;
    e->u.op.right = right;
    return e;
}

A_exp A_EseqExp(A_stm stm, A_exp exp) {
    A_exp e = checked_malloc(sizeof(*e));
    e->kind = A_eseqExp;
    e->u.eseq.stm = stm;
    e->u.eseq.exp = exp;
    return e;
}

A_expList A_pairExpList(A_exp head, A_expList tail) {
    A_expList el = checked_malloc(sizeof(*el));
    el->kind = A_pairExpList;
    el->u.pair.head = head;
    el->u.pair.tail = tail;
    return el;
}

A_expList A_lastExpList(A_exp last) {
    A_expList el = checked_malloc(sizeof(*el));
    el->kind = A_lastExpList;
    el->u.last = last;
    return el;
}