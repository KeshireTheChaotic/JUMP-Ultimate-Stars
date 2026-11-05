
void FUN_02001040(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["darray.c"] */
  if (param_2 == (code *)0x0) {
    FUN_02002068(&DAT_02092f08,s_darray_c_02092f0c,0,0x104);
  }
  iVar1 = *param_1;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_020012d8(param_1,iVar1);
    (*param_2)(uVar2,param_3);
  }
  return;
}

