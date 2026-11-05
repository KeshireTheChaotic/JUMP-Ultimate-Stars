
/* JUS-CLASS jus_Class_02095a6c::vfunc_10 [class-virtual] slot 10 of vtable 02095a6c (own slot, not
   inherited) */

undefined4 jus_Class_02095a6c::vfunc_10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)param_1[7] + 0x2c))((int *)param_1[7],0);
  iVar2 = (**(code **)(*(int *)param_1[7] + 0x2c))((int *)param_1[7],0);
  if ((*(byte *)(iVar2 + 5) & 1) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    iVar2 = iVar2 * 4;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    iVar2 = iVar2 * 0x24;
  }
  return *(undefined4 *)(iVar1 + iVar2 + param_2 * 4 + 0x10);
}

