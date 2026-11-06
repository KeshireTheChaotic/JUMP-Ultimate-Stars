
void FUN_01ffb62c(int param_1)

{
  int unaff_r11;
  uint uVar1;
  int in_r12;
  
  uVar1 = unaff_r11 + in_r12 * 0x100;
  **(uint **)(param_1 + 0x10) = uVar1;
  (*(code *)((uint)(&switchD_01ffb690::switchdataD_01ffb61c)[uVar1 & 3] & 0xfffffffc))();
  return;
}

