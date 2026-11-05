
/* JUS-CLASS jus_Class_0209647c::vfunc_19 [class-virtual] slot 19 of vtable 0209647c (own slot, not
   inherited) */

void jus_Class_0209647c::vfunc_19(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_02019e70();
  *puVar1 = 0x1000;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x1000;
  puVar1[4] = *(undefined4 *)(param_1 + 0xc);
  puVar1[5] = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_1 + 0x24);
  return;
}

