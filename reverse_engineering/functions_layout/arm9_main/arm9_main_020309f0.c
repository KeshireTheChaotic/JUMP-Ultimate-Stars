
/* JUS-CLASS PropBindInstance_020950e0::vfunc_13 [class-virtual] slot 13 of vtable 020950e0 (own
   slot, not inherited) */

undefined4
PropBindInstance_020950e0::vfunc_13(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
  piVar2 = *(int **)(param_1 + 0xc);
  if (param_2 < uVar1) {
    uVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,param_2,param_3);
    return uVar3;
  }
  iVar4 = (**(code **)(*piVar2 + 0x2c))();
  iVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x2c))();
  if (param_2 < (uint)(iVar4 + iVar5)) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
    pcVar6 = *(code **)(**(int **)(param_1 + 0x24) + 0x34);
    param_3 = (*pcVar6)(*(int **)(param_1 + 0x24),param_2 - iVar4,param_3,pcVar6,param_4);
  }
  return param_3;
}

