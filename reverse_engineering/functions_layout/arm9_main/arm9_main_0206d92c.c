
uint FUN_0206d92c(void)

{
  int iVar1;
  uint uVar2;
  int in_r3;
  int in_stack_00000000;
  
  in_r3 = in_r3 + 6;
  if (0x1f < in_r3) {
    in_r3 = 0x1f;
  }
  iVar1 = in_stack_00000000 + 6;
  if (in_r3 < in_stack_00000000 + 6) {
    iVar1 = in_r3;
  }
  uVar2 = (iVar1 + (in_r3 - iVar1)) - (in_r3 - iVar1 >> 2);
  return (uVar2 | uVar2 * 0x20 | in_r3 << 10) & 0xffff;
}

