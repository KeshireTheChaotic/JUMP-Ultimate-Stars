
/* JUS-CLASS jus_Class_02093ff0::vfunc_20 [class-virtual] slot 20 of vtable 02093ff0 (own slot, not
   inherited) */

undefined4 jus_Class_02093ff0::vfunc_20(undefined4 param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0x50435344;
  if (*param_2 == 0x50435344) {
    uVar1 = (uint)*(byte *)(param_2 + 1);
  }
  if (*param_2 == 0x50435344 && uVar1 == 0x10) {
    return *(undefined4 *)((int)param_2 + 5);
  }
  return 0;
}

