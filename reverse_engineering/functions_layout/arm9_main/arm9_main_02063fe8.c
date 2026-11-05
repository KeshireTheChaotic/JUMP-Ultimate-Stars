
undefined4 FUN_02063fe8(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[2];
  param_1[4] = param_2;
  param_1[5] = 2;
  param_1[3] = param_1[3] | 1;
  uVar2 = OS_DisableInterrupts();
  if ((*(uint *)(iVar5 + 0x1c) & 0x80) != 0) {
    FUN_020634f4(param_1,3);
    OS_RestoreInterrupts(uVar2);
    return 0;
  }
  if ((1 << (param_2 & 0xff) & 0x1fcU) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  iVar4 = *param_1;
  piVar3 = (int *)param_1[1];
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar3;
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar4;
  }
  iVar4 = iVar5 + 0x20;
  for (iVar1 = *(int *)(iVar5 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar4 = iVar1;
  }
  *(int **)(iVar4 + 4) = param_1;
  *param_1 = iVar4;
  param_1[1] = 0;
  if (((*(uint *)(iVar5 + 0x1c) & 8) == 0) && ((*(uint *)(iVar5 + 0x1c) & 0x10) == 0)) {
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x10;
    OS_RestoreInterrupts(uVar2);
    if ((*(uint *)(iVar5 + 0x58) & 0x200) != 0) {
      (**(code **)(iVar5 + 0x54))(param_1,9);
    }
    OS_DisableInterrupts();
    param_1[3] = param_1[3] | 0x40;
    if ((param_1[3] & 4U) == 0) {
      OS_RestoreInterrupts();
      FUN_02064160(param_1);
      return 1;
    }
    OS_RestoreInterrupts();
  }
  else {
    if ((param_1[3] & 4U) == 0) {
      OS_RestoreInterrupts(uVar2);
      return 1;
    }
    do {
      FUN_02053290(param_1 + 6);
    } while ((param_1[3] & 0x40U) == 0);
    OS_RestoreInterrupts(uVar2);
  }
  uVar2 = FUN_02064128(param_1);
  return uVar2;
}

