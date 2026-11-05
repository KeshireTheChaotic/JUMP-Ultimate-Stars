
void FUN_0217c2c0(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int local_2c;
  int local_28;
  
  iVar8 = -1;
  iVar10 = 0x7fff;
  uVar12 = *(undefined4 *)(**(int **)(param_1 + 0x24) + 0xc);
  iVar7 = -1;
  iVar9 = -0x8000;
  iVar11 = 0;
  local_28 = 0x7fff;
  do {
    iVar3 = FUN_0217b504(*(undefined4 *)(param_1 + 0x24),iVar11);
    if (iVar3 == 0) {
      param_3 = 1;
    }
    if (iVar3 != 0) {
      param_3 = 0;
    }
    if (((param_3 & 1 << (uint)*(byte *)(param_1 + 0x38)) == 0) &&
       (iVar3 = FUN_0217b51c(*(undefined4 *)(param_1 + 0x24),iVar11), 0 < iVar3)) {
      uVar4 = FUN_021733b4();
      iVar5 = FUN_0217b7cc(uVar12,uVar4);
      iVar6 = 0;
      param_3 = iVar5 + 0x9c;
      iVar13 = local_28;
      for (iVar14 = 0; iVar14 < (int)(uint)*(byte *)(iVar5 + 0xc); iVar14 = iVar14 + 1) {
        iVar6 = (iVar6 + *(int *)(param_3 + 0xc)) * 0x10000 >> 0x10;
        if (*(short *)(param_3 + 0x14) < iVar13) {
          iVar13 = (int)*(short *)(param_3 + 0x14);
        }
        param_3 = param_3 + 0x20;
      }
      if (iVar9 < iVar6) {
        iVar7 = iVar3;
        iVar9 = iVar6;
        local_2c = iVar13;
      }
      if (iVar13 < iVar10) {
        iVar8 = iVar3;
        iVar10 = iVar13;
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 2);
  FUN_02174f24(**(undefined4 **)(param_1 + 0x24));
  if (iVar7 < 0 && iVar8 < 0) {
    *(undefined1 *)(param_1 + 0x105) = 1;
    FUN_0217aa58(param_1);
  }
  else {
    iVar9 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
    iVar11 = *(char *)(param_1 + 0x38) * 0x10c + *(int *)(*(int *)(iVar9 + 4) + 0x10) + 0xa8;
    iVar9 = **(int **)(iVar11 + 0x24);
    iVar3 = *(int *)(iVar9 + 0xc);
    if (iVar9 == 0) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)(iVar9 + 0xc4);
    }
    uVar1 = (undefined1)iVar7;
    if (cVar2 < '\0') {
      *(undefined1 *)(param_1 + 0x3a) = uVar1;
      *(undefined1 *)(param_1 + 0x39) = 2;
      *(undefined1 *)(param_1 + 0x3e) = 0;
    }
    else {
      if ((0 < iVar7) && (iVar3 != 0)) {
        uVar12 = FUN_021733b4((int)cVar2);
        iVar9 = FUN_0217b7cc(iVar3,uVar12);
        if (iVar9 != 0) {
          if (*(char *)(iVar9 + 0xc) == '\0') {
            *(undefined1 *)(param_1 + 0x3a) = uVar1;
            *(undefined1 *)(param_1 + 0x39) = 2;
            *(undefined1 *)(param_1 + 0x3e) = 0;
            return;
          }
          iVar9 = (int)(((int)*(short *)(iVar9 + 0xb0) -
                        (uint)*(ushort *)(**(int **)(iVar11 + 0x24) + 0xbe)) * 0x10000) >> 0x10;
          if (local_2c < iVar9) {
            *(undefined1 *)(param_1 + 0x3a) = uVar1;
            *(undefined1 *)(param_1 + 0x39) = 2;
            *(undefined1 *)(param_1 + 0x3e) = 0;
            return;
          }
          if ((iVar10 < iVar9) && (-1 < iVar8)) {
            *(char *)(param_1 + 0x3a) = (char)iVar8;
            *(undefined1 *)(param_1 + 0x39) = 2;
            *(undefined1 *)(param_1 + 0x3e) = 0;
            return;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x3e) = 0;
      *(undefined1 *)(param_1 + 0x39) = 1;
    }
  }
  return;
}

