
uint FUN_037ffaa4(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0x7f) {
    uVar1 = 0xffff;
  }
  else if (param_1 == 0x7e) {
    uVar1 = 0x3c00;
  }
  else if (param_1 < 0x32) {
    uVar1 = param_1 * 2 + 1U & 0xffff;
  }
  else {
    uVar1 = FUN_038078c0(0x1e00,0x7e - param_1);
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1;
}

