
undefined4
FUN_0205d6a4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0205c614();
  if (puVar1 == (undefined4 *)0x0) {
    return 3;
  }
  if ((param_2 & 8) == 0) {
    iVar2 = FUN_0205c3bc(*puVar1);
  }
  else {
    iVar2 = FUN_0205d330(*puVar1,param_3,param_4);
    if (iVar2 == 0) {
      return 7;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  return 0;
}

