
/* JUS-CLASS jus_TagPL4R::vfunc_18 [class-virtual] slot 18 of vtable 02096d78 (own slot, not
   inherited) */

void jus_TagPL4R::vfunc_18(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*param_2 + 0x20))();
  if (iVar1 == 0x344c4150) {
    uVar2 = (**(code **)(*param_2 + 0x60))();
    (**(code **)(*(int *)param_1[8] + 0x14))((int *)param_1[8],uVar2);
    for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar1 = iVar1 + 1) {
      iVar3 = (**(code **)(*param_1 + 0x38))(param_1,iVar1);
      iVar4 = (**(code **)(*param_2 + 0x34))(param_2,iVar1);
      for (iVar6 = 0; iVar6 < (int)(uint)(*(ushort *)(param_1 + 2) >> 1); iVar6 = iVar6 + 1) {
        *(byte *)(iVar3 + iVar6) =
             (byte)((int)(uint)*(byte *)(iVar4 + iVar6) >> 4) |
             (byte)((*(byte *)(iVar4 + iVar6) & 0xf) << 4);
      }
    }
    return;
  }
  iVar1 = (**(code **)(*param_2 + 0x20))();
  if (iVar1 != 0x314c4150) {
    FUN_0201694c(param_1,param_2);
    return;
  }
  uVar2 = (**(code **)(*param_2 + 0x60))();
  (**(code **)(*(int *)param_1[8] + 0x14))((int *)param_1[8],uVar2);
  for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar1 = iVar1 + 1) {
    iVar3 = (**(code **)(*param_1 + 0x38))(param_1,iVar1);
    iVar4 = (**(code **)(*param_2 + 0x34))(param_2,iVar1);
    for (iVar6 = 0; iVar6 < (int)(uint)(*(ushort *)(param_1 + 2) >> 3); iVar6 = iVar6 + 1) {
      iVar5 = iVar3 + iVar6 * 4;
      *(byte *)(iVar3 + iVar6 * 4) =
           (byte)((int)(uint)*(byte *)(iVar4 + iVar6) >> 7) |
           (byte)(((int)(uint)*(byte *)(iVar4 + iVar6) >> 6 & 1U) << 4);
      *(byte *)(iVar5 + 1) =
           (byte)((int)(uint)*(byte *)(iVar4 + iVar6) >> 5) & 1 |
           (byte)(((int)(uint)*(byte *)(iVar4 + iVar6) >> 4 & 1U) << 4);
      *(byte *)(iVar5 + 2) =
           (byte)((int)(uint)*(byte *)(iVar4 + iVar6) >> 3) & 1 |
           (byte)(((int)(uint)*(byte *)(iVar4 + iVar6) >> 2 & 1U) << 4);
      *(byte *)(iVar5 + 3) =
           (byte)((int)(uint)*(byte *)(iVar4 + iVar6) >> 1) & 1 |
           (byte)((*(byte *)(iVar4 + iVar6) & 1) << 4);
    }
  }
  return;
}

