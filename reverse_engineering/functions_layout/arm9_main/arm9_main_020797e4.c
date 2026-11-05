
void FUN_020797e4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  
  iVar8 = *param_1;
  if (iVar8 == 0) {
    return;
  }
  cVar5 = *(char *)(iVar8 + 0x5d6);
  if (cVar5 == 0) {
    iVar8 = 0;
    do {
      FUN_02079db0(param_1[iVar8 + 0x19],0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
  }
  else {
    bVar3 = *(byte *)(iVar8 + 0x5d4);
    bVar4 = *(byte *)(iVar8 + 0x5d5);
    iVar8 = 0;
    do {
      FUN_02079d34(param_1[iVar8 + 0x19],(int)(char)(&DAT_02092e44)[iVar8 + cVar5 * 2],
                   (short)(ushort)bVar3 * 0x30 + 0x18,(short)(ushort)bVar4 * 0x30 + 0x18,param_4);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
  }
  if ((char)param_1[0x34] != '\0') {
    iVar8 = 0;
    do {
      if (*(char *)(*param_1 + iVar8 + 0x5d7) == -1) {
        FUN_02079db0(param_1[iVar8 + 0x1b],0);
      }
      else {
        FUN_02079d34(param_1[iVar8 + 0x1b],iVar8 + 4);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
  }
  if (*(char *)((int)param_1 + 0xd1) == '\0') {
    return;
  }
  iVar8 = 0;
  for (puVar11 = *(undefined4 **)(*param_1 + 0x558); puVar11 != (undefined4 *)0x0;
      puVar11 = (undefined4 *)*puVar11) {
    uVar13 = ((int)(*(byte *)((int)puVar11 + 0xe) & 0xf0) >> 4) + (uint)*(byte *)(puVar11 + 0x11);
    uVar12 = (*(byte *)((int)puVar11 + 0xe) & 0xf) + (uint)*(byte *)((int)puVar11 + 0x43);
    iVar7 = FUN_02077584(*param_1,uVar12 & 0xff,uVar13 & 0xff);
    if (iVar7 != 0) {
      iVar7 = FUN_020779cc(*param_1,puVar11);
      uVar9 = *(byte *)((int)puVar11 + 0xf) & 0xf;
      iVar10 = uVar9 - 1;
      if (-1 < iVar10) {
        iVar1 = iVar10 * 2;
        iVar2 = iVar10 * 2;
        if (iVar7 != 0) {
          iVar10 = uVar9 + 6;
        }
        iVar6 = iVar8 + 0x1e;
        if (iVar7 == 0) {
          iVar10 = iVar10 + 0xb;
        }
        iVar8 = iVar8 + 1;
        FUN_02079d34(param_1[iVar6],iVar10,uVar12 * 0x30 + 0x18 + (int)(char)(&DAT_02092e3c)[iVar1],
                     uVar13 * 0x30 + 0x18 + (int)(char)(&DAT_02092e3d)[iVar2]);
      }
    }
  }
  for (; iVar8 < 0x10; iVar8 = iVar8 + 1) {
    FUN_02079db0(param_1[iVar8 + 0x1e],0);
  }
  return;
}

