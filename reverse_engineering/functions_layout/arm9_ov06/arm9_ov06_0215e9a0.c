
undefined4 FUN_0215e9a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x18) != '\x03') && ((*(byte *)(param_1 + 0xde) & 8) == 0)) &&
     (iVar1 = FUN_021599b0(param_1), iVar1 == 0)) {
    if ((*(uint *)(param_1 + 0x6c) & 2) != 0) {
      *(undefined1 *)(param_1 + 0x11a) = 6;
      FUN_02157494(param_1,3,FUN_0215eaec,FUN_0215eed8,0,param_4);
      return 1;
    }
    if ((*(uint *)(param_1 + 0x128) & 0x10) != 0) {
      iVar1 = FUN_0215ead4(*(undefined4 *)(param_1 + 0x1a8));
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x11a) = 0xc;
        FUN_020781e4(*(undefined4 *)(param_1 + 0x1b4),0xffffce00);
        FUN_0215d6a0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4),0x10);
        FUN_02157494(param_1,3,FUN_0215eaec,FUN_0215eed8,0,param_4);
        FUN_0215f6e4(param_1,0x230017,1);
        FUN_0207342c(0x7a,0x55);
        return 1;
      }
      iVar1 = FUN_020782ac(*(undefined4 *)(param_1 + 0x1b4),0xffffce00);
      if (iVar1 != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
        *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 4;
      }
    }
  }
  return 0;
}

