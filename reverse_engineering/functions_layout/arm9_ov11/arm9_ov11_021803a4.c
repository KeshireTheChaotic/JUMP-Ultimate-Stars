
void FUN_021803a4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = **(int **)(param_1 + 0x14);
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10);
  if ((*(uint *)(iVar3 + 0x78) & 0x400000) != 0) {
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) & 0xffffffe3;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x18) == '\x10') {
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) & 0xffffffe3;
    *(undefined1 *)(param_1 + 0xa0) = 3;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return;
  }
  iVar3 = *(int *)(iVar3 + 0x5c);
  if ((*(uint *)(param_1 + 0xd4) & 0xf000000) == 0) {
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) & 0xffffffe3;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0xa3) & 1) != 0) {
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) | 4;
  }
  if ((*(byte *)(param_1 + 0xa3) & 1) != 0) {
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) | 8;
  }
  switch(*(char *)(param_1 + 0xa1)) {
  case '\0':
    iVar6 = 0x7fffffff;
    for (puVar1 = (undefined4 *)FUN_0208369c(8); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if ((*(uint *)(*(int *)(puVar1[2] + 0x10) + 0x44) & 1) != 0) {
        iVar4 = *(int *)(*(int *)(puVar1[2] + 0x10) + 0x5c);
        iVar5 = *(int *)(iVar4 + 0xc) - *(int *)(iVar3 + 0xc);
        iVar4 = *(int *)(iVar4 + 0x10) - *(int *)(iVar3 + 0x10);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 + iVar4 < iVar6) {
          iVar6 = iVar5 + iVar4;
        }
      }
    }
    *(byte *)(param_1 + 0xa3) = *(byte *)(param_1 + 0xa3) | 1;
    if (*(byte *)(*(int *)(param_1 + 0x20) + 0xd9) < *(byte *)(*(int *)(param_1 + 0x20) + 0xd8)) {
      *(undefined1 *)(param_1 + 0xa1) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0xa1) = 1;
    }
    return;
  case '\x01':
    return;
  case '\x02':
    iVar3 = FUN_0217bfe0(param_1);
    if (iVar3 != 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0xd4);
    bVar7 = (uVar2 & 2) != 0;
    if (((!bVar7) || ((uVar2 & 0x4000000) == 0)) && ((bVar7 || ((uVar2 & 0x1000000) == 0)))) {
      *(undefined1 *)(param_1 + 0xa1) = 1;
      return;
    }
    iVar3 = FUN_02173318(param_1);
    if (iVar3 == 0) {
      *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) | 0x10;
      *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
      return;
    }
    return;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    break;
  case '\x06':
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) & 0xffffffef;
    if (-1 < *(short *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10) + 0x5c)
                       + 0x26)) {
      *(undefined1 *)(param_1 + 0xa1) = 2;
    }
    return;
  default:
    return;
  }
  *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
  return;
}

