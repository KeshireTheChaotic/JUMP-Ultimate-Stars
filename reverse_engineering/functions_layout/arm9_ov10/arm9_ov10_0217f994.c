
undefined4 FUN_0217f994(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_18 [2];
  
  puVar2 = local_18;
  local_18[0] = DAT_021a3510;
  local_18[1] = DAT_021a3514;
  uVar3 = 0;
  do {
    iVar1 = FUN_02004c2c(param_1,*puVar2);
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return 1;
}

