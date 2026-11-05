
undefined4 FUN_02193608(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_02193294();
  if (uVar1 == 0) {
    return 0;
  }
  *param_2 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  return 1;
}

