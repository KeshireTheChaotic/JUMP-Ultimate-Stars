
void FUN_01ffa178(int param_1)

{
  int unaff_r11;
  uint uVar1;
  int in_r12;
  
  uVar1 = unaff_r11 + in_r12 * 0x100;
  **(uint **)(param_1 + 0x10) = uVar1;
  (*(code *)((uint)(&switchD_01ffa1dc::switchdataD_01ffa168)[uVar1 & 3] & 0xfffffffc))();
  return;
}

