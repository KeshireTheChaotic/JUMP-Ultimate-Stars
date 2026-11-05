
/* JUS-CLASS jus_Class_02096c70::vfunc_14 [class-virtual] slot 14 of vtable 02096c70 (own slot, not
   inherited) */

int jus_Class_02096c70::vfunc_14(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(**(int **)(param_1 + 0x20) + 0x38);
  iVar1 = (*pcVar3)(*(int **)(param_1 + 0x20),param_2 + *(short *)(param_1 + 0x26),pcVar3,
                    (int)*(short *)(param_1 + 0x26),param_4);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  return iVar1 + ((uint)(*(short *)(param_1 + 0x24) * iVar2) >> 3);
}

