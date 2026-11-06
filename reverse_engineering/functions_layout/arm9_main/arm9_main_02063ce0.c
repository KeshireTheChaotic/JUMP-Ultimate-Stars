
undefined4 FUN_02063ce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x1c) & 2) != 0) {
    iVar1 = FUN_02063c78(param_1);
    if ((*(uint *)(param_1 + 0x1c) & 4) != 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffb;
      uVar2 = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
    }
    if (iVar1 != 0) {
      FUN_02063c20(param_1);
    }
  }
  return uVar2;
}

