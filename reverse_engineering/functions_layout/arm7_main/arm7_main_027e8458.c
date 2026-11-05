
undefined4 FUN_027e8458(uint *param_1,undefined4 *param_2)

{
  ushort uVar1;
  short *psVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  psVar2 = DAT_027f97f0;
  uVar7 = 0;
  uVar6 = *param_1;
  if (((ushort)(*DAT_027f97f0 - 9U) < 2) && ((uVar6 & 0x2c00) != 0)) {
    uVar7 = 3;
    uVar6 = uVar6 & 0xffffd3ff;
  }
  uVar4 = OS_DisableInterrupts();
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x3fff;
    *(short *)(param_2 + 1) = psVar2[0x2d];
    *(short *)((int)param_2 + 6) = psVar2[0x2d];
    *(short *)(param_2 + 2) = psVar2[0x2d];
    *(short *)((int)param_2 + 10) = psVar2[0x18];
    *(short *)(param_2 + 3) = psVar2[0x19];
    *(short *)((int)param_2 + 0xe) = psVar2[0x22];
    *(short *)(param_2 + 4) = psVar2[0x23];
    *(short *)((int)param_2 + 0x12) = psVar2[0x20];
    *(short *)(param_2 + 5) = psVar2[0x21];
    *(short *)((int)param_2 + 0x16) = psVar2[0x4c];
    *(char *)(param_2 + 6) = (char)psVar2[0x49];
    *(char *)((int)param_2 + 0x19) = (char)psVar2[0x4a];
    *(char *)((int)param_2 + 0x1a) = (char)psVar2[0x4d];
    *(char *)((int)param_2 + 0x1b) = (char)psVar2[0x4e];
  }
  if ((uVar6 & 1) != 0) {
    sVar3 = (short)param_1[1];
    if (sVar3 == 0) {
      sVar3 = 0x10;
    }
    psVar2[0x2c] = sVar3;
  }
  if ((uVar6 & 2) != 0) {
    uVar5 = (uint)*(ushort *)((int)param_1 + 6);
    if (uVar5 == 0) {
      uVar5 = 0x10;
    }
    psVar2[0x2d] = (short)uVar5;
    if ((int)uVar5 < (int)psVar2[0x31]) {
      psVar2[0x31] = (short)uVar5;
    }
  }
  if ((uVar6 & 4) != 0) {
    uVar5 = (uint)(ushort)param_1[2];
    if (uVar5 == 0) {
      uVar5 = 0x10;
    }
    psVar2[0x2e] = (short)uVar5;
    if ((int)uVar5 < (int)psVar2[0x31]) {
      psVar2[0x31] = (short)uVar5;
    }
  }
  if ((uVar6 & 8) != 0) {
    if ((ushort)psVar2[0x1a] < (*(short *)((int)param_1 + 10) + 1U & 0xfffe)) {
      uVar7 = 6;
    }
    else {
      FUN_027e0030();
    }
  }
  if ((uVar6 & 0x10) != 0) {
    if ((ushort)psVar2[0x1b] < ((short)param_1[3] + 1U & 0xfffe)) {
      uVar7 = 6;
    }
    else {
      FUN_027e0000();
    }
  }
  if ((uVar6 & 0x20) != 0) {
    uVar1 = *(ushort *)((int)param_1 + 0xe);
    if (uVar1 < 0x2711) {
      psVar2[0x22] = uVar1;
      *(uint *)(psVar2 + 0x24) = (uint)((ulonglong)(uint)uVar1 * 0x82ea >> 6) >> 10;
      psVar2[0x26] = 0;
      psVar2[0x27] = 0;
    }
    else {
      uVar7 = 6;
    }
  }
  if ((uVar6 & 0x40) != 0) {
    uVar1 = (ushort)param_1[4];
    if (uVar1 < 0x2711) {
      psVar2[0x23] = uVar1;
      *(uint *)(psVar2 + 0x28) = (uint)((ulonglong)(uint)uVar1 * 0x82ea >> 6) >> 10;
      psVar2[0x2a] = 0;
      psVar2[0x2b] = 0;
    }
    else {
      uVar7 = 6;
    }
  }
  if ((uVar6 & 0x80) != 0) {
    uVar1 = *(ushort *)((int)param_1 + 0x12);
    if ((uVar1 < 0xbf) || ((0xdb < uVar1 && (uVar1 < 0x107)))) {
      psVar2[0x20] = uVar1;
    }
    else {
      uVar7 = 6;
    }
  }
  if ((uVar6 & 0x100) != 0) {
    uVar1 = (ushort)param_1[5];
    if ((uVar1 < 0xbf) || ((0xdb < uVar1 && (uVar1 < 0x107)))) {
      psVar2[0x21] = uVar1;
    }
    else {
      uVar7 = 6;
    }
  }
  if ((uVar6 & 0x200) != 0) {
    psVar2[0x4c] = *(short *)((int)param_1 + 0x16);
  }
  if ((uVar6 & 0x400) != 0) {
    psVar2[0x49] = (ushort)(byte)param_1[6];
  }
  if ((uVar6 & 0x800) != 0) {
    psVar2[0x4a] = (ushort)*(byte *)((int)param_1 + 0x19);
  }
  if ((uVar6 & 0x1000) != 0) {
    psVar2[0x4d] = (ushort)*(byte *)((int)param_1 + 0x1a);
  }
  if ((uVar6 & 0x2000) != 0) {
    psVar2[0x4e] = (ushort)*(byte *)((int)param_1 + 0x1b);
  }
  OS_RestoreInterrupts(uVar4);
  return uVar7;
}

