
bool FUN_02157958(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(*(int *)(iVar1 + 0x10) + 0x144) != 0) {
    FUN_020781e4(*(undefined4 *)(param_2 + 0x1b4));
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x40) & 0x100000) == 0) {
    if (((*(uint *)(iVar1 + 0x158) & 0xf) != 0) || ((*(uint *)(iVar1 + 0x160) & 0xf) != 0)) {
      FUN_0215fc78(param_2 + 0x130,0xd);
      FUN_02157908(*(undefined4 *)(param_2 + 0x1a4),0x18);
    }
  }
  else {
    FUN_0215fc78(param_2 + 0x130,0xd);
  }
  return *(char *)(param_2 + 0x18) != '\x1b';
}

