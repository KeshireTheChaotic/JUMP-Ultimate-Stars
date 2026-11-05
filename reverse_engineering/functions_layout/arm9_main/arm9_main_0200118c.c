
void FUN_0200118c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG strings=["(n >= 0) && (n < array->count)","darray.c"] */
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    FUN_02002068(s__n_>__0______n_<_array_>count__02092f18,s_darray_c_02092f0c,0,0xc0);
  }
  iVar1 = *param_1;
  if (param_2 < iVar1 + -1) {
    uVar2 = FUN_020012d8(param_1,param_2);
    uVar3 = FUN_020012d8(param_1,param_2 + 1);
    FUN_02002450(uVar2,uVar3,((iVar1 + -1) - param_2) * param_1[2]);
  }
  *param_1 = *param_1 + -1;
  return;
}

