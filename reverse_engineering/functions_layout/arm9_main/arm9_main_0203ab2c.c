
/* JUS-CLASS jus_Class_02094088::vfunc_06 [class-virtual] slot 6 of vtable 02094088 (own slot, not
   inherited) */

bool jus_Class_02094088::vfunc_06(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  piVar1 = (int *)0x4c43434e;
  if (iVar2 == 0x4c43434e) {
    param_2 = (int *)param_2[4];
    piVar1 = (int *)0x544c4150;
  }
  return iVar2 == 0x4c43434e && param_2 == piVar1;
}

