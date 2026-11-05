
void FUN_020178bc(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x20))();
  if (iVar1 != 0x52344c50) {
    FUN_0201694c(param_1,param_2);
    return;
  }
  uVar2 = (**(code **)(*param_2 + 0x60))();
  (**(code **)(*(int *)param_1[8] + 0x14))((int *)param_1[8],uVar2);
  for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar1 = iVar1 + 1) {
    iVar3 = (**(code **)(*param_1 + 0x38))(param_1,iVar1);
    iVar4 = (**(code **)(*param_2 + 0x34))(param_2,iVar1);
    for (iVar5 = 0; iVar5 < (int)(uint)(*(ushort *)(param_1 + 2) >> 1); iVar5 = iVar5 + 1) {
      *(byte *)(iVar3 + iVar5) =
           (byte)((int)(uint)*(byte *)(iVar4 + iVar5) >> 4) |
           (byte)((*(byte *)(iVar4 + iVar5) & 0xf) << 4);
    }
  }
  return;
}

