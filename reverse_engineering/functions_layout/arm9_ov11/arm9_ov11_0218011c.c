
void FUN_0218011c(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x20) + 0x11d);
  iVar6 = **(int **)(param_1 + 0x14);
  bVar8 = (bVar2 & 4) != 0;
  if (bVar8) {
    bVar2 = *(byte *)(param_1 + 0xa1);
  }
  uVar1 = *(uint *)(param_1 + 0xd4) >> 0x1c;
  if (bVar8 && bVar2 != 3) {
    *(undefined1 *)(param_1 + 0xa1) = 3;
  }
  iVar3 = FUN_02173318(param_1);
  if (iVar3 == 0) {
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) & 0xfffffff3;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xa1)) {
  case 0:
    if (7 < *(short *)(*(int *)(param_1 + 0x20) + 0x110)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x34) & 0x4000) != 0) {
      *(undefined1 *)(param_1 + 0xa1) = 2;
      return;
    }
    iVar6 = FUN_02179130(*(int *)(param_1 + 0x2c),0x25);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0xa1) = 2;
    }
    else {
      *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    }
    return;
  case 1:
    break;
  case 2:
    *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) | *(uint *)(param_1 + 0x9c);
    iVar3 = FUN_02173318(param_1);
    if (iVar3 == 0) {
      *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) & 0xfffffff3;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      return;
    }
    return;
  case 3:
    iVar3 = FUN_02173318(param_1);
    if (iVar3 == 0) {
      *(uint *)(iVar6 + 0xe4) = *(uint *)(iVar6 + 0xe4) & 0xfffffff3;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      return;
    }
    return;
  default:
    return;
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10);
  iVar6 = *(int *)(iVar3 + 0x88) >> 8;
  iVar3 = *(int *)(iVar3 + 0x8c) >> 8;
  iVar4 = iVar6;
  if (iVar6 < 0x80) {
    iVar4 = iVar3;
  }
  if (iVar4 < 0x80) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    return;
  }
  if (iVar6 < 0x80) {
    *(undefined4 *)(param_1 + 0x9c) = 4;
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    return;
  }
  if (iVar3 < 0x80) {
    *(undefined4 *)(param_1 + 0x9c) = 8;
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    return;
  }
  iVar3 = 0x9000;
  iVar6 = -1;
  uVar5 = 0;
  do {
    if (((uVar5 != uVar1) && (iVar4 = *(int *)(param_1 + uVar5 * 4 + 0xdc), -1 < iVar4)) &&
       (iVar4 < iVar3)) {
      iVar6 = (int)(char)uVar5;
      iVar3 = iVar4;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  if (-1 < iVar6) {
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x44);
    if (piVar7 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      if (piVar7[6] == 0) {
        (**(code **)(*piVar7 + 0x14))();
      }
      iVar3 = piVar7[6];
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
    if (**(int **)(iVar3 + iVar6 * 4 + 0x98) - **(int **)(iVar3 + uVar1 * 4 + 0x98) < 1) {
      *(undefined4 *)(param_1 + 0x9c) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x9c) = 8;
    }
  }
  *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
  return;
}

