
void FUN_02082e10(int param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (puVar9 = *(undefined4 **)(iVar6 + 0x10); puVar9 != (undefined4 *)0x0;
      puVar9 = (undefined4 *)*puVar9) {
    iVar10 = puVar9[2];
    uVar4 = *(uint *)(iVar10 + 0x34);
    *(uint *)(iVar10 + 0x34) = uVar4 & 0xffffefcb;
    if ((uVar4 & 0x100) == 0) {
      *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar10 + 0x10);
    }
    else {
      *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) & 0xfffffeff;
    }
    uVar4 = *(uint *)(iVar10 + 0x34);
    if ((uVar4 & 0x600) == 0) {
      if ((uVar4 & 0xc0) == 0) {
        *(short *)(iVar10 + 0x24) =
             *(short *)(iVar10 + 0x24) + *(short *)(iVar10 + 0x2c) + *(short *)(iVar10 + 0x30);
        *(short *)(iVar10 + 0x26) =
             *(short *)(iVar10 + 0x26) + *(short *)(iVar10 + 0x2e) + *(short *)(iVar10 + 0x32);
      }
      else {
        *(short *)(iVar10 + 0x24) = *(short *)(iVar10 + 0x24) + *(short *)(iVar10 + 0x30);
        *(short *)(iVar10 + 0x26) =
             *(short *)(iVar10 + 0x26) + *(short *)(iVar10 + 0x32) + *(short *)(iVar10 + 0x2e);
        *(undefined2 *)(iVar10 + 0x38) = 0;
        if ((((*(uint *)(iVar10 + 0x34) & 0x40) != 0) &&
            (sVar3 = *(short *)(iVar10 + 0x2c), 0 < sVar3)) ||
           (((*(uint *)(iVar10 + 0x34) & 0x80) != 0 &&
            (sVar3 = *(short *)(iVar10 + 0x2c), sVar3 < 0)))) {
          *(short *)(iVar10 + 0x24) = *(short *)(iVar10 + 0x24) + sVar3;
        }
        *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) & 0xffffff3f;
      }
      iVar8 = (int)*(short *)(iVar10 + 0x24);
      iVar5 = (int)*(short *)(iVar10 + 0x26);
      bVar1 = *(byte *)(iVar10 + 0x3e);
      iVar2 = iVar8;
      if (iVar8 < 0) {
        iVar2 = iVar8 * -0x10000 >> 0x10;
      }
      if (iVar5 < 0) {
        iVar5 = iVar5 * -0x10000 >> 0x10;
      }
      if ((int)((uint)bVar1 * 0x100) < iVar2) {
        if (iVar8 < 0) {
          *(ushort *)(iVar10 + 0x24) = (ushort)bVar1 * -0x100;
        }
        else {
          *(ushort *)(iVar10 + 0x24) = (ushort)bVar1 * 0x100;
        }
      }
      bVar1 = *(byte *)(iVar10 + 0x3e);
      if ((int)((uint)bVar1 * 0x100) < iVar5) {
        if (*(short *)(iVar10 + 0x26) < 0) {
          *(ushort *)(iVar10 + 0x26) = (ushort)bVar1 * -0x100;
        }
        else {
          *(ushort *)(iVar10 + 0x26) = (ushort)bVar1 * 0x100;
        }
      }
      if ((*(uint *)(iVar10 + 0x34) & 0x800) == 0) {
        sVar3 = (short)((uint)((int)(short)(ushort)*(byte *)(iVar10 + 0x3c) *
                               (int)*(short *)(iVar10 + 0x24) * 0x100) >> 0x10);
        sVar7 = (short)((uint)((int)(short)(ushort)*(byte *)(iVar10 + 0x3d) *
                               (int)*(short *)(iVar10 + 0x26) * 0x100) >> 0x10);
      }
      else {
        if (*(short *)(iVar10 + 0x2c) == 0) {
          sVar3 = (short)((uint)(*(short *)(iVar10 + 0x24) * 6) >> 8);
          sVar7 = (short)((uint)((int)(short)(ushort)*(byte *)(iVar10 + 0x3d) *
                                 (int)*(short *)(iVar10 + 0x26) * 0x100) >> 0x10);
          if ((sVar3 == 0) && (*(short *)(iVar10 + 0x24) != 0)) {
            sVar3 = 1;
          }
        }
        else {
          sVar3 = (short)((uint)((int)(short)(ushort)*(byte *)(iVar10 + 0x3c) *
                                 (int)*(short *)(iVar10 + 0x24) * 0x100) >> 0x10);
          sVar7 = (short)((uint)((int)(short)(ushort)*(byte *)(iVar10 + 0x3d) *
                                 (int)*(short *)(iVar10 + 0x26) * 0x100) >> 0x10);
        }
        *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) & 0xfffff7ff;
      }
      *(short *)(iVar10 + 0x24) = *(short *)(iVar10 + 0x24) - sVar3;
      *(short *)(iVar10 + 0x26) = *(short *)(iVar10 + 0x26) - sVar7;
      if ((*(uint *)(iVar10 + 0x34) & 2) == 0) {
        *(short *)(iVar10 + 0x26) = *(short *)(iVar10 + 0x26) + *(short *)(iVar6 + 0x2c);
      }
      *(int *)(iVar10 + 0xc) =
           *(int *)(iVar10 + 0xc) + (int)*(short *)(iVar10 + 0x24) + (int)*(short *)(iVar10 + 0x38);
      *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + (int)*(short *)(iVar10 + 0x26);
      if (*(int *)(iVar10 + 0xc) < 0) {
        *(undefined4 *)(iVar10 + 0xc) = 0;
      }
      if (*(int *)(iVar10 + 0x10) < 0) {
        *(undefined4 *)(iVar10 + 0x10) = 0;
      }
      if (0x3ffff < *(int *)(iVar10 + 0xc)) {
        *(undefined4 *)(iVar10 + 0xc) = 0x3ffff;
      }
      if (0x3ffff < *(int *)(iVar10 + 0x10)) {
        *(undefined4 *)(iVar10 + 0x10) = 0x3ffff;
      }
      *(undefined4 *)(iVar10 + 0x2c) = 0;
      *(undefined4 *)(iVar10 + 0x30) = 0;
      if ((*(short *)(iVar10 + 0x24) < 0x10) && (-0x11 < *(short *)(iVar10 + 0x24))) {
        *(undefined2 *)(iVar10 + 0x24) = 0;
      }
      if ((*(short *)(iVar10 + 0x26) < 0x10) && (-0x11 < *(short *)(iVar10 + 0x26))) {
        *(undefined2 *)(iVar10 + 0x26) = 0;
      }
      sVar3 = *(short *)(iVar10 + 0x24);
      bVar11 = sVar3 == 0;
      if (bVar11) {
        sVar3 = *(short *)(iVar10 + 0x26);
      }
      if (bVar11 && sVar3 == 0) {
        *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) | 0x20;
      }
      *(undefined2 *)(iVar10 + 0x3a) = *(undefined2 *)(iVar10 + 0x38);
      *(undefined2 *)(iVar10 + 0x38) = 0;
      if (*(short *)(iVar10 + 0x26) < 0) {
        *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) | 0x10;
      }
      if (0 < *(short *)(iVar10 + 0x26)) {
        *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) | 4;
      }
    }
    else {
      *(uint *)(iVar10 + 0x34) = uVar4 | 0x20;
    }
  }
  return;
}

