
/* JUS-CLASS jus_Class_02095a6c::vfunc_06 [class-virtual] slot 6 of vtable 02095a6c (own slot, not
   inherited) */

int jus_Class_02095a6c::vfunc_06(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(**(int **)(param_1 + 0x1c) + 0x2c);
  iVar1 = (*pcVar2)(*(int **)(param_1 + 0x1c),0,pcVar2,param_4,param_4);
  if ((*(byte *)(iVar1 + 5) & 1) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
  return iVar1 + param_2 * 0x24 + 0xc;
}

