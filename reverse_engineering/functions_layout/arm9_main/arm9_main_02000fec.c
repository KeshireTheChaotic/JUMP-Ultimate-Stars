
undefined4 FUN_02000fec(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* JUS-TAG strings=["darray.c"] */
  if (param_2 == (code *)0x0) {
    FUN_02002068(&DAT_02092f08,s_darray_c_02092f0c,0,0x121);
  }
  iVar1 = *param_1;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    uVar2 = FUN_020012d8(param_1,iVar1);
    iVar3 = (*param_2)(uVar2,param_3);
  } while (iVar3 != 0);
  return uVar2;
}

