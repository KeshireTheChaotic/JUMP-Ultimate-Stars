
uint FUN_02076dd8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_02076e38();
  if ((uVar1 & 0xf0000000) == 0) {
    FUN_02077610(param_1);
    iVar2 = FUN_020772e4(param_1);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 0x10;
    }
    iVar2 = FUN_02077768(param_1);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 0x100;
    }
  }
  return uVar1;
}

