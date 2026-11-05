
void FUN_0217fe64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 0x20);
  uVar2 = (uint)*(char *)(iVar4 + 0x115);
  iVar5 = **(int **)(param_1 + 0x14);
  if ((int)uVar2 < 0) {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return;
  }
  uVar3 = *(uint *)(param_1 + 0xd4);
  bVar6 = (uVar3 & 2) != 0;
  if (bVar6) {
    uVar2 = (uint)*(byte *)(param_1 + 0xa1);
  }
  if (bVar6 && uVar2 != 2) {
    *(undefined1 *)(param_1 + 0xa0) = 2;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return;
  }
  cVar1 = *(char *)(param_1 + 0xa1);
  if (cVar1 == '\0') {
    if ((uVar3 & 8) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    iVar4 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x24,uVar3,iVar4,param_4);
    if (iVar4 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0x20;
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 0x20;
    return;
  }
  if (cVar1 == '\x01') {
    if ((*(byte *)(iVar4 + 0x11d) & 4) != 0) {
      *(undefined1 *)(param_1 + 0xa1) = 2;
      return;
    }
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | *(uint *)(param_1 + 0x9c);
    iVar4 = FUN_02173318(param_1);
    if (iVar4 == 0) {
      *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & ~*(uint *)(param_1 + 0x9c);
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      return;
    }
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  iVar4 = FUN_02173318(param_1);
  if (iVar4 == 0) {
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & ~*(uint *)(param_1 + 0x9c);
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return;
  }
  return;
}

