
/* JUS-CLASS CommonEffect_0209c30c::vfunc_25 [class-virtual] slot 25 of vtable 0209c30c (own slot,
   not inherited) */

void CommonEffect_0209c30c::vfunc_25(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1[0xd] + 0x224) == 0) {
    for (uVar4 = 1; uVar3 = (**(code **)(*param_1 + 0xac))(), uVar4 < uVar3; uVar4 = uVar4 + 1) {
      iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar4);
      iVar2 = (**(code **)(**(int **)(iVar1 + 0x30) + 0x10))();
      if (iVar2 != 0) {
        (**(code **)(**(int **)(iVar1 + 0x30) + 0x60))(*(int **)(iVar1 + 0x30),1,FUN_020160f0,0);
      }
    }
  }
  FUN_02022380(param_1);
  return;
}

