
void FUN_0217cab4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = FUN_0217bfe0();
  if (iVar3 == 0) {
    FUN_0217aa58(param_1);
    *(undefined1 *)(param_1 + 0x105) = 1;
    return;
  }
  iVar3 = (int)*(char *)(*(int *)(param_1 + 0x20) + 0xca);
  iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x18);
  if ((0xc < iVar3) && (((iVar3 + -0xd) * 0x1000000 >> 0x18 & 0xffU) < 2)) {
    iVar4 = FUN_02174f4c(**(undefined4 **)(param_1 + 0x24));
    iVar3 = (iVar3 + (iVar4 + -3) * 2) * 0x1000000 >> 0x18;
  }
  iVar4 = (int)*(char *)(param_1 + 0x3a);
  if ((0xc < iVar4) && (((iVar4 + -0xd) * 0x1000000 >> 0x18 & 0xffU) < 2)) {
    iVar5 = FUN_02174f4c(**(undefined4 **)(param_1 + 0x24));
    iVar4 = (iVar4 + (iVar5 + -3) * 2) * 0x1000000 >> 0x18;
  }
  if (iVar3 != iVar4) {
    *(undefined1 *)(param_1 + 0x3e) = 0;
    *(undefined1 *)(param_1 + 0x39) = 4;
    return;
  }
  if (*(char *)(param_1 + 0x38) < '\0') {
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_1 + 0x107);
  }
  iVar3 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  cVar2 = *(char *)(param_1 + 0x38);
  iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
  iVar4 = **(int **)(param_1 + 0x14);
  iVar5 = 0;
  do {
    iVar11 = *(int *)(iVar10 + iVar5 * 4 + 0x80);
    if (iVar11 != 0) {
      iVar6 = func_0x0216a8f0(iVar11);
      iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 0x5c);
      if (*(char *)(iVar11 + 0x1a) == '\x05') {
        bVar1 = *(byte *)(param_1 + 0x3e);
        if (3 < bVar1) {
          if (bVar1 < 0x12) {
            *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 1;
          }
          else if (bVar1 < 0x24) {
            if ((*(uint *)(param_1 + 0xd4) & 0x80) == 0) {
              *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 8;
            }
            else {
              *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 4;
            }
          }
          else if (bVar1 < 0x34) {
            *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 2;
          }
          else if (bVar1 < 0x3e) {
            if ((*(uint *)(param_1 + 0xd4) & 0x80) == 0) {
              *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 4;
            }
            else {
              *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 8;
            }
          }
        }
        *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
      }
      if (*(char *)(iVar11 + 0x1a) == '\x11') {
        iVar8 = *(int *)(iVar6 + 0xc);
        iVar11 = *(int *)(iVar6 + 0x10);
        iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(cVar2 * 0x10c + iVar3 + 200) + 0x1a8) + 0x10) +
                        0x5c);
        iVar9 = *(int *)(iVar6 + 0xc);
        iVar6 = *(int *)(iVar6 + 0x10) + -0x1800;
        if (iVar9 != iVar8) {
          uVar7 = *(uint *)(iVar4 + 0xe8);
          if (iVar9 != iVar8 && -1 < iVar9 - iVar8) {
            uVar7 = uVar7 | 4;
            *(uint *)(iVar4 + 0xe8) = uVar7;
          }
          if (iVar9 - iVar8 < 1) {
            *(uint *)(iVar4 + 0xe8) = uVar7 | 8;
          }
        }
        if (iVar6 != iVar11) {
          if (iVar6 - iVar11 < 1) {
            *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 1;
          }
          else {
            *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 2;
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}

