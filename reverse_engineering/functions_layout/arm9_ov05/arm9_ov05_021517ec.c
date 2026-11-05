
undefined4 FUN_021517ec(undefined4 *param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = 1;
  while (iVar5 < (int)param_1[0x10d]) {
    iVar1 = iVar5 + 0xfd;
    iVar5 = iVar5 + 1;
    if (param_1[iVar1] == (uint)*param_2) {
      uVar2 = 0;
    }
  }
  uVar3 = 0;
  do {
    puVar4 = (ushort *)param_1[uVar3 + 5];
    if (puVar4 != (ushort *)0x0) {
      if (*puVar4 == *param_2) {
        uVar2 = 0;
      }
      if (puVar4[1] == param_2[1]) {
        uVar2 = 0;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  iVar5 = FUN_0214e654(*param_1,param_2[1]);
  if (iVar5 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

