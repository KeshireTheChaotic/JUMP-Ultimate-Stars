
void FUN_0203d288(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = DAT_0209dd40;
  uVar6 = *(uint *)(param_1 + 0x8e0);
  if (uVar6 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x8c8);
    uVar2 = *(ushort *)(param_1 + 0x8ca);
    iVar5 = *(int *)(param_1 + 0x940);
    uVar3 = (**(code **)(param_1 + 0x948))();
    MI_DmaFill32(DAT_0209dd40,uVar3,0,iVar5 * (uint)uVar1 * (uint)uVar2);
    return;
  }
  uVar4 = (**(code **)(param_1 + 0x948))();
  MI_DmaFill16(uVar3,uVar4,uVar6 & 0xffff,
               *(int *)(param_1 + 0x940) *
               (uint)*(ushort *)(param_1 + 0x8c8) * (uint)*(ushort *)(param_1 + 0x8ca));
  return;
}

