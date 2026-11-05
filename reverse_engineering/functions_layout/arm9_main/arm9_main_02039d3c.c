
/* JUS-CLASS jus_TagNG18::vfunc_04 [class-virtual] slot 4 of vtable 02096a60 (own slot, not
   inherited) */

void jus_TagNG18::vfunc_04(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = jus_AllocDebug(param_2 * param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

