
void FUN_0217d558(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  iVar1 = FUN_02175628();
  iVar8 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
  piVar9 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (int)*(char *)(*(int *)(iVar8 + 0x20) + 0xca);
  if (0xc < iVar1) {
    iVar2 = FUN_02174f4c(**(undefined4 **)(iVar8 + 0x24));
    iVar1 = (iVar1 + (iVar2 + -3) * 2) * 0x1000000 >> 0x18;
  }
  iVar7 = *piVar9;
  iVar2 = FUN_0217bfe0(iVar8);
  if ((iVar2 == 0) || (*(char *)((int)piVar9 + 0xe) != iVar1)) {
    FUN_0217d750(param_1,*(undefined4 *)(iVar7 + 0x10));
    return;
  }
  if (*(short *)(iVar7 + 0x14) < 4) {
    bVar10 = (short)piVar9[3] == 2;
  }
  else {
    bVar10 = (uint)*(ushort *)(piVar9 + 3) == (int)*(short *)(iVar7 + 0x14) - 4U;
  }
  if (bVar10) {
    *(undefined1 *)((int)piVar9 + 0xf) = 1;
  }
  if (*(char *)((int)piVar9 + 0xf) == '\x01') {
    iVar1 = FUN_02175628(*(undefined4 *)(iVar8 + 0x1c));
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
    if (*(char *)(iVar8 + 0x38) < '\0') {
      *(undefined1 *)(iVar8 + 0x38) = *(undefined1 *)(iVar8 + 0x107);
    }
    piVar5 = *(int **)(iVar1 + *(char *)(iVar8 + 0x38) * 4 + 0x98);
    piVar3 = *(int **)(iVar1 + (*(uint *)(iVar8 + 0xd4) >> 0x1c) * 4 + 0x98);
    iVar2 = piVar3[1];
    iVar8 = piVar5[1];
    iVar1 = *piVar5 - *piVar3;
    piVar9[2] = 0;
    iVar8 = iVar8 - iVar2;
    if (iVar8 < 0) {
      iVar2 = -iVar8;
    }
    else {
      iVar2 = iVar8;
    }
    if (iVar1 < 0) {
      iVar6 = -iVar1;
    }
    else {
      iVar6 = iVar1;
    }
    if (iVar2 < iVar6) {
      if (iVar1 < 1) {
        uVar4 = piVar9[2] | 8;
      }
      else {
        uVar4 = piVar9[2] | 4;
      }
      piVar9[2] = uVar4;
      iVar2 = iVar8 * 2;
      if (iVar2 < 0) {
        iVar2 = iVar8 * -2;
      }
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar2) {
        if (iVar8 < 1) {
          piVar9[2] = piVar9[2] | 1;
        }
        else {
          piVar9[2] = piVar9[2] | 2;
        }
      }
    }
    else {
      if (iVar8 < 1) {
        uVar4 = piVar9[2] | 1;
      }
      else {
        uVar4 = piVar9[2] | 2;
      }
      piVar9[2] = uVar4;
      iVar2 = iVar1 * 2;
      if (iVar2 < 0) {
        iVar2 = iVar1 * -2;
      }
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if (iVar8 < iVar2) {
        if (iVar1 < 1) {
          piVar9[2] = piVar9[2] | 8;
        }
        else {
          piVar9[2] = piVar9[2] | 4;
        }
      }
    }
    *(undefined1 *)((int)piVar9 + 0xf) = 2;
  }
  if (piVar9[2] != 0) {
    *(uint *)(piVar9[1] + 0xe4) = *(uint *)(piVar9[1] + 0xe4) | piVar9[2];
  }
  if ((int)*(short *)(iVar7 + 0x14) < (int)(uint)*(ushort *)(piVar9 + 3)) {
    FUN_0217d750(param_1,0xf);
    return;
  }
  *(ushort *)(piVar9 + 3) = *(ushort *)(piVar9 + 3) + 1;
  return;
}

