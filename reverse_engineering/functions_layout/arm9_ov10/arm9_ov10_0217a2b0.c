
undefined4 FUN_0217a2b0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02178448();
  if ((*(char *)(iVar1 + 0x19e) != '\0') && (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 4))
  {
    return 1;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = FUN_0217961c(*param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_02178448();
      if ((*(char *)(iVar1 + 0x19e) != '\0') &&
         (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 1)) {
        return 1;
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}

