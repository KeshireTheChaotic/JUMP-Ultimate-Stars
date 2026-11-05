
int FUN_0205e74c(int param_1,undefined4 param_2,int param_3,int param_4,short param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_0205e9dc(&local_30);
  local_28 = param_4 + param_3;
  local_24 = local_2c;
  local_2c = param_3 + -0x10;
  uVar2 = FUN_0205e9b4(param_1,param_2);
  if ((uint)(local_2c - local_30) < 0x10) {
    local_2c = local_30;
  }
  else {
    uVar3 = FUN_0205e954(&local_30,0x4652);
    uVar2 = FUN_0205e984(param_1,uVar3,uVar2);
  }
  if ((uint)(local_24 - local_28) < 0x10) {
    local_28 = local_24;
  }
  else {
    uVar3 = FUN_0205e954(&local_28,0x4652);
    FUN_0205e984(param_1,uVar3,uVar2);
  }
  if ((*(uint *)(param_1 + -4) & 1) != 0) {
    MIi_CpuClear32(0,local_2c,local_28 - local_2c);
  }
  local_1c = local_28;
  local_20 = param_3 + -0x10;
  iVar4 = FUN_0205e954(&local_20,0x5544);
  *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) & 0x7fff;
  *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | param_5 << 0xf;
  *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) & 0x80ff;
  *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | (ushort)((iVar4 - local_2c & 0x7fU) << 8);
  uVar1 = *(ushort *)(param_1 + 0x10);
  *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) & 0xff00;
  *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | uVar1 & 0xff;
  FUN_0205e984(param_1 + 8,iVar4,*(undefined4 *)(param_1 + 0xc));
  return param_3;
}

