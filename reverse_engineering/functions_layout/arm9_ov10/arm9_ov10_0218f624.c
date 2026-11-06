
byte * FUN_0218f624(byte *param_1,undefined4 *param_2)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  puVar12 = (uint *)0x0;
  *param_2 = 0;
  uVar9 = (int)(uint)*(ushort *)(param_1 + 6) >> 8;
  uVar13 = (*(ushort *)(param_1 + 6) & 0xff) << 8;
  if (uVar9 != 0 || (uVar13 & 0x3fff) != 0) {
    iVar4 = (*param_1 & 0xf) * 4;
    sVar1 = *(short *)(param_1 + 4);
    uVar14 = ((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 | (*(ushort *)(param_1 + 0xc) & 0xff) << 8)
             << 0x10 | (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                       (*(ushort *)(param_1 + 0xe) & 0xff) << 8;
    puVar11 = &DAT_021a8b54;
    uVar8 = 0;
    do {
      if ((((short)puVar11[1] != 0) && (*puVar11 == uVar14)) &&
         (*(short *)((int)puVar11 + 6) == sVar1)) break;
      if (((short)puVar11[1] == 0) && (puVar12 == (uint *)0x0)) {
        puVar12 = puVar11;
      }
      puVar11 = puVar11 + 0xe;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    iVar5 = ((int)(uint)*(ushort *)(param_1 + 2) >> 8 | (*(ushort *)(param_1 + 2) & 0xff) << 8) +
            (*param_1 & 0xf) * -4;
    uVar9 = uVar9 | uVar13 & 0x1fff;
    iVar6 = uVar9 * 8;
    uVar7 = iVar5 + iVar6;
    if (uVar8 == 8) {
      if ((puVar12 == (uint *)0x0) || (0x1000 < uVar7)) {
        return (byte *)0x0;
      }
      uVar8 = (*DAT_021a84fc)(iVar4 + 0x100e);
      puVar12[0xd] = uVar8;
      if (puVar12[0xd] == 0) {
        return (byte *)0x0;
      }
      *puVar12 = uVar14;
      *(short *)((int)puVar12 + 6) = sVar1;
      *(undefined2 *)(puVar12 + 2) = 0;
      uVar15 = OS_GetTick();
      puVar12[0xb] = (uint)uVar15 >> 0x10 | (int)((ulonglong)uVar15 >> 0x20) << 0x10;
      puVar12[0xc] = puVar12[0xd] + 0xe + iVar4;
      FUN_02051890(param_1,puVar12[0xd] + 0xe,iVar4);
      puVar11 = puVar12;
    }
    if (((short)puVar11[1] == 8) || (0x1000 < uVar7)) {
      *(undefined2 *)(puVar11 + 1) = 0;
      (*DAT_021a8528)(puVar11[0xd]);
      return (byte *)0x0;
    }
    sVar3 = (short)uVar9;
    sVar1 = sVar3 + (short)(iVar5 + 7U >> 3);
    if ((uVar13 & 0x2000) == 0) {
      *(short *)((int)puVar11 + 10) = (short)uVar7;
      *(short *)(puVar11 + 2) = sVar1;
    }
    *(short *)((int)puVar11 + (uint)(ushort)puVar11[1] * 2 + 0xc) = sVar3;
    *(short *)((int)puVar11 + (uint)(ushort)puVar11[1] * 2 + 0x1c) = sVar1;
    *(short *)(puVar11 + 1) = (short)puVar11[1] + 1;
    FUN_02051890(param_1 + iVar4,puVar11[0xc] + iVar6,iVar5);
    if ((ushort)puVar11[2] == 0) {
      return (byte *)0x0;
    }
    uVar10 = 0;
    uVar13 = 0;
    if ((ushort)puVar11[1] != 0) {
      do {
        if ((uVar10 < *(ushort *)((int)puVar11 + uVar13 * 2 + 0xc)) ||
           (uVar2 = *(ushort *)((int)puVar11 + uVar13 * 2 + 0x1c), uVar2 <= uVar10)) {
          uVar13 = uVar13 + 1;
        }
        else {
          uVar13 = 0;
          uVar10 = uVar2;
        }
      } while (uVar13 < (ushort)puVar11[1]);
    }
    if (uVar10 < (ushort)puVar11[2]) {
      return (byte *)0x0;
    }
    uVar13 = puVar11[0xd];
    param_1 = (byte *)(uVar13 + 0xe);
    uVar9 = (uint)*(ushort *)((int)puVar11 + 10) + (*(byte *)(uVar13 + 0xe) & 0xf) * 4 & 0xffff;
    *(ushort *)(uVar13 + 0x10) = (ushort)(uVar9 >> 8) | (ushort)(uVar9 << 8);
    *(undefined2 *)(puVar11 + 1) = 0;
    *param_2 = 1;
  }
  return param_1;
}

