
uint FUN_02057530(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x2d3;
  if ((-0x2d4 < param_1) && (iVar2 = param_1, 0 < param_1)) {
    iVar2 = 0;
  }
  if (iVar2 < -0xf0) {
    iVar1 = 3;
  }
  else if (iVar2 < -0x78) {
    iVar1 = 2;
  }
  else if (iVar2 < -0x3c) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return (uint)(byte)(&DAT_02092183)[iVar2] | iVar1 << 8;
}

