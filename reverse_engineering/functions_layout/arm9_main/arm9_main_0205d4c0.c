
undefined4
FUN_0205d4c0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_0205c54c();
  if (puVar1 == (uint *)0x0) {
    return 5;
  }
  if ((param_2 & 4) == 0) {
    iVar2 = FUN_0205c3bc(*puVar1 & 0xffffff);
  }
  else {
    if ((*puVar1 & 0x1000000) == 0) {
      iVar2 = FUN_0205d240(*puVar1 & 0xffffff,param_3,param_4);
    }
    else {
      iVar2 = FUN_0205d120(*puVar1 & 0xffffff,param_3,param_4);
    }
    if (iVar2 == 0) {
      return 9;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  return 0;
}

