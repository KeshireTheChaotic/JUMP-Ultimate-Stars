
/* JUS-CLASS jus_TagDLST::vfunc_25 [class-virtual] slot 25 of vtable 0209ac78 (own slot, not
   inherited) */

void jus_TagDLST::vfunc_25(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_0201309c();
  piVar1 = *(int **)(param_1 + 0x44);
  if ((int *)piVar1[7] == param_2) {
    return;
  }
  FUN_02037ed8(param_2 + 7,piVar1 + 8);
  (**(code **)(*piVar1 + 100))(piVar1,param_2);
  (**(code **)(*param_2 + 0x80))(param_2,piVar1);
  return;
}

