
void FUN_02150e74(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(DAT_0214be10 + 0x184) + *(int *)(DAT_0214be10 + 0x188) +
            *(int *)(DAT_0214be10 + 400) + *(int *)(DAT_0214be10 + 0x194);
  }
  else {
    iVar1 = *(int *)(DAT_0214be10 + 0x18c);
  }
  if (iVar1 != 0) {
    *(char *)(param_1 + 0xc4) = *(char *)(param_1 + 0xc4) + '\x01';
    if (99 < *(byte *)(param_1 + 0xc4)) {
      *(undefined1 *)(param_1 + 0xc4) = 99;
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar1;
    if (*(int *)(param_1 + 0xb8) < 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    if (0xf9c0 < *(int *)(param_1 + 0xb8)) {
      *(undefined4 *)(param_1 + 0xb8) = 0xf9c0;
    }
    if (*(byte *)(param_1 + 0xc5) < *(byte *)(param_1 + 0xc4)) {
      *(byte *)(param_1 + 0xc5) = *(byte *)(param_1 + 0xc4);
    }
    if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0xb8)) {
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb8);
    }
    if (DAT_020b0b98 < *(byte *)(param_1 + 0xc4)) {
      FUN_02071d5c();
    }
    uVar2 = *(int *)(param_1 + 0xb8) >> 6;
    if ((int)(uint)DAT_020b0b9a < (int)uVar2) {
      FUN_02071d84(uVar2 & 0xffff);
    }
  }
  return;
}

