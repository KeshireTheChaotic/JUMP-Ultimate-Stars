
undefined4 FUN_0215bab8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215b4fc();
  if (iVar1 != 0) {
    FUN_0207cec8(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
    return 1;
  }
  iVar1 = FUN_0215ba28();
  if (iVar1 != 0) {
    FUN_021520dc(8,4,8);
    FUN_0215f6e4(param_1,0x230001,0);
    FUN_0207342c(0x7a,0x29);
    *(code **)(param_1 + 0xfc) = FUN_0215bb34;
  }
  return 0;
}

