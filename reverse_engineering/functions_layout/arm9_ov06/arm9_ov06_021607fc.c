
void FUN_021607fc(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x6b);
  *(byte *)(param_2 + 0x6b) = bVar1 + 1;
  if (0x1e < bVar1) {
    *(undefined1 *)(param_2 + 0x6b) = 0;
    if (*(int *)(DAT_02172960 + 300) == 0) {
      return;
    }
    if (*(char *)(param_2 + 0x6c) != '\0') {
      *(undefined1 *)(param_2 + 0x6c) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0x4000;
      *(undefined4 *)(param_2 + 0x24) = 0x4000;
      *(undefined4 *)(param_2 + 0x20) = 0x4000;
    }
    if (*(char *)(DAT_02172960 + 0x16e) == '\0') {
      piVar3 = (int *)FUN_02160a10(*(undefined4 *)(param_1 + 0x1a8));
      iVar7 = 1;
      iVar8 = 0x7fffffff;
      while (iVar7 < *(int *)(DAT_02172960 + 0x158)) {
        piVar4 = (int *)FUN_02160a10(*(undefined4 *)(param_1 + 0x1a8));
        iVar7 = iVar7 + 1;
        iVar6 = *piVar4 - *piVar3;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        iVar5 = piVar4[1] - piVar3[1];
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar6 + iVar5 < iVar8) {
          iVar8 = iVar6 + iVar5;
        }
      }
    }
    else {
      iVar8 = *(int *)(*(int *)(DAT_02172960 + 300) +
                       (uint)*(byte *)(*(int *)(DAT_02172960 + 300) + 0x107) * 4 + 0xdc);
    }
    *(uint *)(param_2 + 0x20) = (uint)(*(int *)(param_2 + 0x20) + iVar8) >> 1;
    if (*(int *)(DAT_02172960 + 0x4c) == 0) {
      *(uint *)(param_2 + 0x24) = (uint)(*(int *)(param_2 + 0x24) + iVar8) >> 1;
    }
    iVar7 = FUN_020784e4(*(undefined4 *)(param_1 + 0x1b4),0x19);
    if (iVar7 != 0) {
      *(uint *)(param_2 + 0x28) = (uint)(*(int *)(param_2 + 0x28) + iVar8) >> 1;
    }
    cVar2 = *(char *)(*(int *)(*(int *)(DAT_02172960 + 0x118) + 0x56c) + 0x13);
    for (iVar8 = 1; iVar8 < *(int *)(DAT_02172960 + 0x158); iVar8 = iVar8 + 1) {
      if (cVar2 == '\0') {
        if (*(char *)(*(int *)(*(int *)(DAT_02172960 + iVar8 * 4 + 0x118) + 0x56c) + 0x13) == '\x02'
           ) {
          *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
        }
      }
      else {
        iVar7 = *(int *)(DAT_02172960 + iVar8 * 4 + 0x118);
        if (cVar2 == '\x01') {
          if (*(char *)(*(int *)(iVar7 + 0x56c) + 0x13) == '\0') {
            *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
          }
        }
        else if (*(char *)(*(int *)(iVar7 + 0x56c) + 0x13) == '\x01') {
          *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
        }
      }
    }
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  if (((*(uint *)(iVar8 + 0x160) | *(uint *)(iVar8 + 0x158)) & 0x2000) == 0 || param_2 == 0) {
    return;
  }
  if (*(short *)(param_2 + 100) != -1) {
    *(short *)(param_2 + 100) = *(short *)(param_2 + 100) + 1;
  }
  return;
}

