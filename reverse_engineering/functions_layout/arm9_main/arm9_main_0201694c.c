
void FUN_0201694c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  iVar2 = (**(code **)(*param_2 + 0x20))();
  if (iVar1 == iVar2) {
    uVar3 = (**(code **)(*param_2 + 0x5c))();
    MIi_CpuCopy32(param_2[3],param_1[3],uVar3);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 100))();
  if ((iVar1 == 0) || (iVar1 = (**(code **)(*param_2 + 0x60))(), iVar1 == 0)) {
    for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)(param_1 + 2); iVar2 = iVar2 + 1) {
        uVar3 = (**(code **)(*param_2 + 0x24))(param_2,iVar2,iVar1);
        (**(code **)(*param_1 + 0x28))(param_1,iVar2,iVar1,uVar3);
      }
    }
    return;
  }
  for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)(param_1 + 2); iVar2 = iVar2 + 1) {
      uVar3 = (**(code **)(*param_2 + 0x2c))(param_2,iVar2,iVar1);
      (**(code **)(*param_1 + 0x30))(param_1,iVar2,iVar1,uVar3);
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x60))();
  (**(code **)(*param_1 + 0x6c))(param_1,uVar3);
  return;
}

