
void FUN_02013c48(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*(int *)param_1[0xb] + 0x68))((int *)param_1[0xb],param_1[0xc]);
  iVar1 = (iVar1 + 1U >> 1) + 1 + (uint)(*(ushort *)(param_1[0x12] + 4) >> 1);
  iVar4 = param_1[0xd];
  if ((param_1[0x10] & 4U) == 0) {
    iVar1 = iVar4 + (iVar1 + 1) * 2;
    iVar5 = iVar4 + 2;
  }
  else {
    iVar5 = iVar4 + (iVar1 + 1) * 2;
    iVar1 = iVar4 + 2;
  }
  piVar2 = (int *)param_1[0xb];
  if (param_3 == 0) {
    uVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,param_1[0xc]);
    iVar4 = (**(code **)(*(int *)param_1[0xb] + 0x68))((int *)param_1[0xb],param_1[0xc]);
    FUN_02051890(uVar3,iVar5,(uint)*(ushort *)(param_1[0x12] + 4) + iVar4);
  }
  else {
    iVar4 = (**(code **)(*piVar2 + 0x68))();
    FUN_02051890(iVar1,iVar5,(uint)*(ushort *)(param_1[0x12] + 4) + iVar4);
  }
  iVar4 = (**(code **)(*(int *)param_1[0xb] + 0x68))((int *)param_1[0xb],param_1[0xc]);
  FUN_02051890(param_2,iVar1,(uint)*(ushort *)(param_1[0x12] + 4) + iVar4);
  FUN_02013aec(param_1);
  (**(code **)(*param_1 + 0x6c))();
  return;
}

