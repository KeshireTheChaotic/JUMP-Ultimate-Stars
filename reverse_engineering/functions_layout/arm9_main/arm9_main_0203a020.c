
/* JUS-CLASS jus_TagNFC4::vfunc_04 [class-virtual] slot 4 of vtable 020968d4 (own slot, not
   inherited) */

void jus_TagNFC4::vfunc_04(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0201a228((uint)(param_2 * param_3) >> 1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

