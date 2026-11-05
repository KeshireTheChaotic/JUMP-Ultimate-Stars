
undefined4 FUN_0215004c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
    iVar3 = param_1 + iVar4 * 4;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
      if ((iVar4 != iVar2) && (*(int *)(iVar3 + 0x1c) < *(int *)(param_1 + iVar2 * 4 + 0x1c))) {
        *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
      }
    }
    iVar2 = param_1 + iVar4 * 4;
    if (*(int *)(iVar2 + 0x5c) != *(int *)(iVar2 + 0x4c)) {
      if ((*(int *)(iVar2 + 0x5c) == 0) && (*(byte *)(param_1 + iVar4 + 0xc0) < 0xfe)) {
        *(char *)(param_1 + iVar4 + 0xc0) = *(char *)(param_1 + iVar4 + 0xc0) + '\x01';
      }
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x4c);
    }
  }
  iVar4 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x14) <= iVar4) {
      uVar1 = FUN_0214f998();
      return uVar1;
    }
    if ((int)(uint)*(byte *)(param_1 + 0xc6) <= *(int *)(param_1 + iVar4 * 4 + 0x1c)) break;
    iVar4 = iVar4 + 1;
  }
  return 1;
}

