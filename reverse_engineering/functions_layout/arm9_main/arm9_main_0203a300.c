
/* JUS-CLASS jus_TagFFL4::vfunc_04 [class-virtual] slot 4 of vtable 02096850 (own slot, not
   inherited) */

void jus_TagFFL4::vfunc_04(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = jus_AllocDebug(param_2 << 2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

