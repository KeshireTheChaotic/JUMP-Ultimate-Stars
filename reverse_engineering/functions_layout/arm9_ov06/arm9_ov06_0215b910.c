
undefined4 FUN_0215b910(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x116) < ' ') {
    *(char *)(param_1 + 0x116) = *(char *)(param_1 + 0x116) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x6c) & 0x180) != 0) {
    *(undefined1 *)(param_1 + 0x116) = 0;
    *(undefined1 *)(param_1 + 0x117) = 1;
  }
  iVar1 = FUN_0215b4fc(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0215ba28(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1a4);
    if ((iVar1 != 0) && (*(short *)(iVar1 + 0x58) != -1)) {
      *(short *)(iVar1 + 0x58) = *(short *)(iVar1 + 0x58) + 1;
    }
    if ((*(char *)(param_1 + 0x117) == '\0') || ('\a' < *(char *)(param_1 + 0x116))) {
      FUN_021520dc(8,4,8);
      FUN_0215f6e4(param_1,0x230001,0);
      FUN_0207342c(0x7a,0x29);
      *(code **)(param_1 + 0xfc) = FUN_0215bb34;
    }
    else {
      *(code **)(param_1 + 0xfc) = FUN_0215bb9c;
      *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) | 4;
      iVar1 = *(int *)(param_1 + 0x1a4);
      if ((iVar1 != 0) && (*(short *)(iVar1 + 0x56) != -1)) {
        *(short *)(iVar1 + 0x56) = *(short *)(iVar1 + 0x56) + 1;
      }
    }
  }
  return 0;
}

