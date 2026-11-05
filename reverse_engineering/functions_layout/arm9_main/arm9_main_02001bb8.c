
undefined4 FUN_02001bb8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1 & 0xff;
  uVar1 = (*param_1 & 0xff00) >> 8;
  if (uVar2 == 10) {
    return 1;
  }
  if (((uVar2 == 0xac) && (0xf < uVar1)) && (uVar1 < 0x20)) {
    return 1;
  }
  if ((uVar2 == 0xc0) && (uVar1 == 0xa8)) {
    return 1;
  }
  return 0;
}

