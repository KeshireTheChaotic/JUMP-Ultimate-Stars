
void FUN_02001230(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG strings=["(n >= 0) && (n <= array->count)","darray.c"] */
  if ((param_3 < 0) || (*param_1 < param_3)) {
    FUN_02002068(s__n_>__0______n_<__array_>count__02092f44,s_darray_c_02092f0c,0,0xa7);
  }
  if (*param_1 == param_1[1]) {
    FUN_02001404(param_1);
  }
  *param_1 = *param_1 + 1;
  iVar1 = *param_1;
  if (param_3 < iVar1 + -1) {
    uVar2 = FUN_020012d8(param_1,param_3 + 1);
    uVar3 = FUN_020012d8(param_1,param_3);
    FUN_02002450(uVar2,uVar3,((iVar1 + -1) - param_3) * param_1[2]);
  }
  FUN_020013e8(param_1,param_2,param_3);
  return;
}

