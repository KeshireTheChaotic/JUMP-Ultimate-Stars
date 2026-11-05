
/* JUS-CLASS jus_Class_02095a6c::vfunc_05 [class-virtual] slot 5 of vtable 02095a6c (own slot, not
   inherited) */

undefined4 jus_Class_02095a6c::vfunc_05(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
  if ((*(byte *)(iVar2 + 5) & 1) == 0) {
    param_2 = param_2 << 2;
  }
  else {
    param_2 = param_2 * 0x24;
  }
  return *(undefined4 *)(iVar1 + param_2 + 0x2c);
}

