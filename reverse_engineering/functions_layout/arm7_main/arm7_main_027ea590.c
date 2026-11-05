
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ea590(void)

{
  int iVar1;
  int iVar2;
  int local_8 [2];
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["048080bc","04808140"] */
  local_8[0] = 0xe2e2;
  FUN_027f5874(0x58,2,local_8);
  local_8[0] = local_8[0] + 0x202;
  iVar2 = FUN_027e9bd4();
  iVar1 = local_8[0];
  if ((iVar2 == 0x14) && (iVar1 = local_8[0] + -0x6161, (_DAT_048080bc & 2) != 0)) {
    iVar1 = local_8[0] + -0xc1c1;
  }
  local_8[0] = iVar1;
  _DAT_04808140 = (short)local_8[0];
  return;
}

