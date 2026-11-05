
void FUN_020011e4(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [8];
  
                    /* JUS-TAG strings=["comparator","darray.c"] */
  if (param_3 == 0) {
    FUN_02002068(s_comparator_02092f38,s_darray_c_02092f0c,0,0xb7);
  }
  iVar1 = FUN_02000f38(param_2,param_1[5],*param_1,param_1[2],param_3,auStack_18);
  uVar2 = FUN_0200d12c(iVar1 - param_1[5],param_1[2]);
  FUN_02001230(param_1,param_2,uVar2);
  return;
}

