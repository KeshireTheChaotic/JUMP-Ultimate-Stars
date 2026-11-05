
/* JUS-CLASS jus_Class_02095ea0::vfunc_17 [class-virtual] slot 17 of vtable 02095ea0 (own slot, not
   inherited) */

undefined4
jus_Class_02095ea0::vfunc_17(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(**(int **)(param_1 + 0x1c) + 0x2c);
  iVar1 = (*pcVar2)(*(int **)(param_1 + 0x1c),0,pcVar2,param_4,param_4);
  return *(undefined4 *)(iVar1 + 0xc);
}

