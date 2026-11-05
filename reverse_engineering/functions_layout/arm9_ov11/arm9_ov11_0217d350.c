
void FUN_0217d350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  iVar2 = FUN_02175628();
  iVar9 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  piVar10 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = (int)*(char *)(*(int *)(iVar9 + 0x20) + 0xca);
  if (0xc < iVar2) {
    iVar3 = FUN_02174f4c(**(undefined4 **)(iVar9 + 0x24));
    iVar2 = (iVar2 + (iVar3 + -3) * 2) * 0x1000000 >> 0x18;
  }
  iVar3 = FUN_0217bfe0(iVar9);
  if ((iVar3 == 0) || (*(char *)((int)piVar10 + 0xe) != iVar2)) {
    if (*(char *)((int)piVar10 + 0xf) < 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(char *)((int)piVar10 + 0xf) * 0xc + *piVar10 + 0x1c);
    }
    FUN_0217d750(param_1,uVar5);
    return;
  }
  piVar4 = (int *)(*(char *)((int)piVar10 + 0xf) * 0xc + *piVar10 + 0x1c);
  uVar8 = (uint)(short)piVar4[1];
  uVar7 = (uint)*(ushort *)(piVar10 + 3);
  uVar6 = (uVar8 - (int)*(short *)((int)piVar4 + 6)) - 2;
  if (uVar7 == uVar6) {
    uVar8 = *(byte *)(iVar9 + 0x104) + 1 & 0xff;
    if (uVar8 < 8) {
      if (*(uint *)(&DAT_0218190c + uVar8 * 4) < (*(uint *)(*(int *)(iVar9 + 0x2c) + 0x38) & 0xff))
      {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
    }
    else {
      uVar8 = 1;
    }
    if (uVar8 == 0) {
      FUN_0217d750(param_1,*piVar4,uVar7,0,param_4);
      return;
    }
  }
  bVar1 = false;
  if ((int)uVar6 <= (int)uVar7) {
    if (*(byte *)(piVar10 + 4) == 0) {
      *(uint *)(piVar10[1] + 0xe4) =
           *(uint *)(piVar10[1] + 0xe4) | *(uint *)(&DAT_02181468 + *piVar4 * 4);
    }
    else if ((1 < *(byte *)(piVar10 + 4)) &&
            (*(uint *)(piVar10[1] + 0xe4) =
                  *(uint *)(piVar10[1] + 0xe4) & ~*(uint *)(&DAT_02181468 + *piVar4 * 4),
            (char)piVar10[4] == '\x03')) {
      *(undefined1 *)(piVar10 + 4) = 0;
      *(char *)((int)piVar10 + 0x11) = *(char *)((int)piVar10 + 0x11) + '\x01';
    }
    *(char *)(piVar10 + 4) = (char)piVar10[4] + '\x01';
    if (*(short *)((int)piVar4 + 10) <= (short)(ushort)*(byte *)((int)piVar10 + 0x11)) {
      *(undefined1 *)((int)piVar10 + 0x11) = 0;
      *(undefined1 *)(piVar10 + 4) = 0;
      *(char *)((int)piVar10 + 0xf) = *(char *)((int)piVar10 + 0xf) + '\x01';
      if ((int)(uint)*(byte *)(*piVar10 + 0xd) <= (int)*(char *)((int)piVar10 + 0xf)) {
        bVar1 = true;
      }
    }
    uVar8 = (uint)*(ushort *)(piVar10 + 3);
    uVar7 = (uint)(short)piVar4[1];
    if ((int)uVar7 < (int)uVar8) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    FUN_0217d750(param_1,*piVar4,uVar7,uVar8,param_4);
    return;
  }
  *(short *)(piVar10 + 3) = (short)piVar10[3] + 1;
  return;
}

