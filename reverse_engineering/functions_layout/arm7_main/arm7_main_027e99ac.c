
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e99ac(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808160"] */
  _DAT_04808160 = 0x100;
  iVar1 = 100;
  uVar2 = 0;
  local_18 = 0;
  do {
    FUN_027f5874(iVar1,1,&local_18);
    FUN_027e9b60(uVar2,local_18);
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x69);
  FUN_027e9b60(0x5a,2);
  return;
}

