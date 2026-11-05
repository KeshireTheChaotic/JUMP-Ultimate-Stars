
undefined2 FUN_021956e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = &DAT_021a6f14;
  do {
    iVar1 = FUN_02195724(param_1,param_2,param_3,*puVar2);
    if (iVar1 != 0) {
      return (&DAT_021a6f14)[uVar3];
    }
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return 0;
}

