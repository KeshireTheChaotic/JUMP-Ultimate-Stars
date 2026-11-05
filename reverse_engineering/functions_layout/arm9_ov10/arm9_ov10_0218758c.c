
undefined4 FUN_0218758c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_2 + 0xc);
  if (((puVar2 == (undefined4 *)0x0) || (iVar1 = FUN_02004c2c(*param_3,*puVar2), iVar1 != 0)) ||
     (iVar1 = FUN_02004c2c(param_3[1],puVar2[2]), iVar1 != 0)) {
    return 1;
  }
  *(int *)param_3[2] = param_2;
  param_3[3] = 1;
  return 0;
}

