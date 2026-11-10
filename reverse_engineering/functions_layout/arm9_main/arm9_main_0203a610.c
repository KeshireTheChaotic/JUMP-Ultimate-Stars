
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_HwPad::vfunc_05 [class-virtual] slot 5 of vtable 020948e4 (own slot, not inherited)
    */

void jus_HwPad::vfunc_05(int param_1)

{
  ushort uVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"KEYPAD":1} io=["027fffa8","04000130"] */
  if (*(int *)(param_1 + 0xe0) != 0) {
    return;
  }
  if ((int)(_DAT_027fffa8 & 0x8000) >> 0xf == 1) {
    return;
  }
  uVar1 = (_DAT_04000130 | _DAT_027fffa8) ^ 0x2fff;
  if ((uVar1 & 1) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x10;
  }
  if ((uVar1 & 2) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x20;
  }
  if ((uVar1 & 0x400) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x40;
  }
  if ((uVar1 & 0x800) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x80;
  }
  if ((uVar1 & 0x200) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x100;
  }
  if ((uVar1 & 0x100) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x200;
  }
  if ((uVar1 & 8) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x8000;
  }
  if ((uVar1 & 4) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x4000;
  }
  if ((uVar1 & 0x2000) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 0x2000;
  }
  if ((uVar1 & 0x10) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 4;
  }
  if ((uVar1 & 0x20) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 8;
  }
  if ((uVar1 & 0x40) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 1;
  }
  if ((uVar1 & 0x80) != 0) {
    *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) =
         *(uint *)(param_1 + 0x18 + *(int *)(param_1 + 0x78) * 4) | 2;
  }
  return;
}

