
undefined4 FUN_0215e1d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02159930();
  if ((iVar1 == 0) && ((*(uint *)(param_1 + 0x6c) & 0x10) != 0)) {
    if (((*(uint *)(param_1 + 0x128) & 4) != 0) &&
       ((*(char *)(param_1 + 0xdc) == '\0' &&
        (uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x78), (uVar2 & 0x400) == 0)
        ))) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) {
          *(undefined1 *)(param_1 + 0xdd) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0xdd) = 0xff;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xdd) = 1;
      }
      if (*(char *)(param_1 + 0xdd) != '\0') {
        *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xdc) + '\x01';
        FUN_02157494(param_1,5,FUN_0215e2dc,0,0,param_4);
        return 1;
      }
    }
    if (*(byte *)(param_1 + 0xd9) < *(byte *)(param_1 + 0xd8)) {
      *(undefined1 *)(param_1 + 0xdd) = 0;
      FUN_02157494(param_1,5,FUN_0215e2dc,0,0,param_4);
      return 1;
    }
  }
  return 0;
}

