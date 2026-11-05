
void FUN_0201272c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = jus_AllocDebug(0x34);
  iVar4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_02012200(param_1);
    uVar3 = (**(code **)(*param_1 + 0x7c))();
    iVar4 = PropBindInstance_020950e0::PropBindInstance_020950e0(iVar1,param_1[5],uVar2,uVar3);
  }
  (**(code **)(*(int *)param_1[5] + 0xc))();
  param_1[5] = iVar4;
  return;
}

