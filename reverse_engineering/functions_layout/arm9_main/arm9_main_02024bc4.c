
/* JUS-CLASS jus_Class_02098d98::vfunc_08 [class-virtual] slot 8 of vtable 02098d98 (own slot, not
   inherited) */

void jus_Class_02098d98::vfunc_08(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x50);
  *param_3 = *(undefined4 *)(iVar1 + 0xc);
  param_3[1] = *(undefined4 *)(iVar1 + 0x10);
  param_3[2] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

