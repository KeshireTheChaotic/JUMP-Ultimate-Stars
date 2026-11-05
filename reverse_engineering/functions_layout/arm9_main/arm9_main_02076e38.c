
undefined4
FUN_02076e38(int param_1,uint param_2,int param_3,uint param_4,undefined1 param_5,int *param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  
  if (*(int *)(param_1 + 0x560) == 0) {
    return 0x20000000;
  }
  for (puVar9 = *(undefined4 **)(param_1 + 0x558); puVar9 != (undefined4 *)0x0;
      puVar9 = (undefined4 *)*puVar9) {
    if (*(ushort *)puVar9[0xd] == param_2) {
      return 0x40000000;
    }
  }
  uVar5 = FUN_02076d30(param_1,param_2,param_3,param_4,param_4);
  if (uVar5 == 0) {
    return 0x10000000;
  }
  iVar6 = FUN_02076c98(param_1,param_2);
  if (iVar6 == 0) {
    iVar12 = 0;
  }
  else {
    iVar7 = FUN_02076d00();
    iVar12 = *(int *)(param_1 + 0x560);
    if (iVar12 == 0) {
      iVar12 = 0;
    }
    else {
      FUN_02037c24(param_1 + 0x560,iVar12);
      FUN_02037b98(param_1 + 0x558,iVar12);
      FUN_020517fc(iVar12 + 0xc,0,4);
      FUN_020517fc(iVar12 + 0x10,0,0x22);
      *(short *)(iVar12 + 0xc) = (short)param_2;
      *(byte *)(iVar12 + 0xe) = (byte)param_3 & 0xf | (byte)((param_4 & 0xf) << 4);
      *(undefined1 *)(iVar12 + 0xf) = param_5;
      *(int *)(iVar12 + 0x34) = iVar6;
      *(int *)(iVar12 + 0x38) = iVar7;
      *(undefined4 *)(iVar12 + 0x3c) = 0;
      *(undefined1 *)(iVar12 + 0x40) = *(undefined1 *)(iVar6 + 6);
      *(undefined1 *)(iVar12 + 0x41) = *(undefined1 *)(iVar6 + 7);
      *(undefined **)(iVar12 + 8) = (&PTR_FUN_0209f51c)[*(byte *)(iVar12 + 0x40)];
      *(byte *)(iVar12 + 0x12) = *(byte *)(iVar6 + 0xb) & 0xf;
      uVar3 = (*(code *)(&PTR_FUN_0209f528)[*(byte *)(iVar12 + 0x40)])(param_1,iVar12);
      *(undefined1 *)(iVar12 + 0x42) = uVar3;
      iVar11 = 0;
      iVar14 = (int)(uint)*(byte *)(iVar6 + 0xb) >> 4;
      if (iVar14 != 3) {
        *(char *)(iVar12 + 0x13) = (char)iVar14;
      }
      *(undefined1 *)(iVar12 + 0x46) = 0;
      *(undefined1 *)(iVar12 + 0x45) = 0;
      do {
        iVar14 = 0;
        iVar15 = iVar7 + iVar11 * 5;
        uVar3 = (undefined1)iVar11;
        do {
          uVar2 = (undefined1)iVar14;
          if (*(char *)(iVar15 + iVar14) == '\x01') {
            *(undefined1 *)(iVar12 + 0x43) = uVar2;
            *(undefined1 *)(iVar12 + 0x44) = uVar3;
          }
          if ((*(char *)(iVar15 + iVar14) != '\0') &&
             ((int)(uint)*(byte *)(iVar12 + 0x45) <= iVar14)) {
            *(undefined1 *)(iVar12 + 0x45) = uVar2;
            *(undefined1 *)(iVar12 + 0x46) = uVar3;
          }
          if (*(char *)(iVar6 + 10) == *(char *)(iVar15 + iVar14)) {
            *(undefined1 *)(iVar12 + 0x47) = uVar2;
            *(undefined1 *)(iVar12 + 0x48) = uVar3;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < 5);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 4);
    }
  }
  if (iVar12 == 0) {
    if (param_6 != (int *)0x0) {
      *param_6 = 0;
    }
    bVar4 = false;
  }
  else {
    pcVar13 = *(char **)(iVar12 + 0x38);
    *(uint *)(param_1 + 0x568) = *(uint *)(param_1 + 0x568) | uVar5;
    piVar10 = (int *)(param_4 * 0x14 + param_1 + 8 + param_3 * 4);
    param_3 = param_3 + param_4 * 5;
    while (param_3 < 0x14) {
      cVar1 = *pcVar13;
      param_3 = param_3 + 1;
      pcVar13 = pcVar13 + 1;
      if (cVar1 != '\0') {
        *piVar10 = iVar12;
      }
      piVar10 = piVar10 + 1;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = iVar12;
    }
    bVar4 = true;
  }
  if (bVar4) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x10000000;
  }
  return uVar8;
}

