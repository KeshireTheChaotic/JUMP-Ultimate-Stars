
void FUN_02161424(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1 = (uint)*(byte *)(DAT_0216e7e8 + 0x1a) - param_1;
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_1 < 2) {
    uVar1 = 0;
  }
  else if (param_1 < 6) {
    uVar1 = FUN_020507a8(0x7f,6 - param_1);
  }
  else {
    uVar1 = 0x7f;
  }
  FUN_02162364(uVar1);
  if (param_1 < 2) {
    iVar2 = -0x100;
  }
  else if (param_1 < 6) {
    iVar2 = FUN_020507a8(0x200,6 - param_1);
    iVar2 = iVar2 + -0x100;
  }
  else {
    iVar2 = 0x100;
  }
  FUN_0216234c(0xffff,iVar2);
  return;
}

