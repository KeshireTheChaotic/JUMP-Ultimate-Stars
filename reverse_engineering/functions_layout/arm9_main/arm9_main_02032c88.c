
/* JUS-CLASS jus_Class_02099ba0::vfunc_03 [class-virtual] slot 3 of vtable 02099ba0 (own slot, not
   inherited) */

void jus_Class_02099ba0::vfunc_03(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 100) + 0x20) + 0x1c) + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (iVar1 + -1) * 0x1000;
  }
  *param_1 = iVar1;
  return;
}

