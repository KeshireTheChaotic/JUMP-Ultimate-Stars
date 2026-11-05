
void FUN_0215eaec(int param_1)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = FUN_0215d4e0();
  if (iVar4 != 0) {
    FUN_02157450(param_1,3);
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x1e7) = 0;
    *(undefined1 *)(param_1 + 0x1e9) = 0;
    if (0x1e < *(short *)(param_1 + 0x1dc)) {
      *(undefined2 *)(param_1 + 0x1dc) = 0;
    }
    FUN_0215d82c(*(undefined4 *)(param_1 + 0x1a4),4);
    FUN_0215fcd8(param_1 + 0x130);
    FUN_0215e900(*(undefined4 *)(param_1 + 0x1a8),1);
    *(undefined1 *)(param_1 + 0x1ec) = 0;
    iVar4 = FUN_0215d6c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4));
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4);
      *(undefined1 *)(iVar4 + 0x5c) = 0;
      *(undefined4 *)(iVar4 + 0x54) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0xf9) = 1;
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    *(undefined1 *)(param_1 + 0xf9) = 0;
    if ((*(uint *)(param_1 + 0x128) & 0x40) == 0) {
      FUN_0215eebc(*(undefined4 *)(param_1 + 0x1a8),0);
    }
    else {
      FUN_0215eebc(*(undefined4 *)(param_1 + 0x1a8),1);
    }
    if ((*(uint *)(param_1 + 0x128) & 0x400000) == 0) {
      *(undefined2 *)(param_1 + 0x104) = 0x41;
    }
    else {
      *(undefined2 *)(param_1 + 0x104) = 0x82;
    }
  }
  iVar4 = FUN_0215ead4(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
    iVar6 = *(int *)(iVar4 + 0x5c);
    sVar2 = *(short *)(iVar4 + 0x14a);
    *(short *)(iVar6 + 0x30) = *(short *)(iVar6 + 0x30) + *(short *)(iVar4 + 0x148);
    *(short *)(iVar6 + 0x32) = *(short *)(iVar6 + 0x32) + sVar2;
    *(char *)(param_1 + 0x11a) =
         *(char *)(param_1 + 0x11a) + *(char *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x170);
    *(short *)(param_1 + 0x102) =
         *(short *)(param_1 + 0x102) +
         (short)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x13c) >> 6);
    FUN_0215ff3c(param_1 + 0x130);
    if ((*(uint *)(param_1 + 0x128) & 0x20) != 0) {
      bVar3 = false;
      uVar5 = *(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x44);
      if (((uVar5 & 0x100000) != 0) && ((uVar5 & 0x200000) == 0)) {
        bVar3 = true;
      }
      if ((!bVar3) && (*(short *)(param_1 + 0x1dc) < 3)) {
        FUN_020781e4(*(undefined4 *)(param_1 + 0x1b4),0x1400);
        FUN_0215f6e4(param_1,0x230017,1);
        FUN_0207342c(0x7a,0x55);
      }
    }
  }
  if (*(short *)(param_1 + 0x1dc) < 0x20) {
    *(short *)(param_1 + 0x1dc) = *(short *)(param_1 + 0x1dc) + 1;
  }
  if (*(short *)(param_1 + 0x104) <= *(short *)(param_1 + 0x102)) {
    *(short *)(param_1 + 0x102) = *(short *)(param_1 + 0x104);
    iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
    *(uint *)(iVar4 + 0x40) = *(uint *)(iVar4 + 0x40) | 0x4000;
  }
  if (0x1e < *(short *)(param_1 + 0x102)) {
    bVar1 = *(byte *)(param_1 + 0x1e9);
    *(byte *)(param_1 + 0x1e9) = bVar1 + 1;
    if (((int)*(short *)(param_1 + 0x104) - (int)*(short *)(param_1 + 0x102) >> 6) + 0x10 <
        (int)(uint)bVar1) {
      *(undefined1 *)(param_1 + 0x1e9) = 0;
      FUN_0215d6a0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4),0x11);
    }
    else {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4);
      *(undefined1 *)(iVar4 + 0x5c) = 0;
      *(undefined4 *)(iVar4 + 0x54) = 0xffffffff;
    }
  }
  iVar4 = FUN_0215dec8(param_1);
  if (iVar4 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x11a) != '\0') {
    *(char *)(param_1 + 0x11a) = *(char *)(param_1 + 0x11a) + -1;
    *(undefined1 *)(param_1 + 0x1ec) = 1;
    return;
  }
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  iVar6 = FUN_02159d7c(param_1,2);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = FUN_0215dcac(param_1);
  if (iVar6 != 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x6c) & 2) == 0) || (iVar6 = FUN_021599b0(param_1), iVar6 != 0)) {
    *(undefined1 *)(param_1 + 0x1e6) = 3;
    FUN_0215d2e4(param_1);
    return;
  }
  if ((*(char *)(param_1 + 0x1e7) == '\0') && ((*(uint *)(param_1 + 0x6c) & 0x40) != 0)) {
    *(undefined1 *)(param_1 + 0x1e7) = 1;
  }
  if (*(char *)(param_1 + 0x1e7) == '\0') {
    return;
  }
  *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + '\x01';
  if ('\t' < *(char *)(param_1 + 0x1e8)) {
    if ('\f' < *(char *)(param_1 + 0x1e8)) {
      *(undefined1 *)(param_1 + 0x1e8) = 0;
      *(undefined1 *)(param_1 + 0x1e7) = 0;
    }
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  *(uint *)(iVar6 + 0x40) = *(uint *)(iVar6 + 0x40) | 0x8000;
  iVar6 = FUN_0215ead4(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x1a4);
  }
  if (iVar6 != 0 && iVar4 != 0) {
    if (*(short *)(iVar4 + 0x54) != -1) {
      *(short *)(iVar4 + 0x54) = *(short *)(iVar4 + 0x54) + 1;
    }
    return;
  }
  return;
}

