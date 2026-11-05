
void FUN_021b3e54(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x128))();
  iVar2 = FUN_021b3f54(param_1,uVar1);
  if (((iVar2 != 0) && (iVar3 = FUN_021b3e98(param_1), iVar2 != iVar3)) &&
     (iVar2 = FUN_02023924(param_1,iVar2,0), iVar2 != 0)) {
    (**(code **)(*(int *)param_1[0x1a] + 0x6c))();
  }
  FUN_02027978(param_1);
  return;
}

