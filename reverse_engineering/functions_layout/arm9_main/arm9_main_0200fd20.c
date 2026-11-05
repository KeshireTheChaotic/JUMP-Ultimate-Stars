
/* JUS-CLASS jus_Class_02095ea0::vfunc_18 [class-virtual] slot 18 of vtable 02095ea0 (own slot, not
   inherited) */

undefined4
jus_Class_02095ea0::vfunc_18(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  pcVar3 = *(code **)(**(int **)(param_1 + 0x1c) + 0x2c);
  iVar1 = (*pcVar3)(*(int **)(param_1 + 0x1c),0,pcVar3,param_4,param_4);
  iVar4 = 0;
  while( true ) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
    if ((int)(uint)*(ushort *)(iVar2 + 6) <= iVar4) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + iVar4 * 0x10 + 0x10)) break;
    iVar4 = iVar4 + 1;
  }
  return 1;
}

