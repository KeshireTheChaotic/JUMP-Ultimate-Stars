
void FUN_020693dc(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint local_30;
  byte local_2c [24];
  
  pbVar7 = &DAT_02092380;
  pbVar6 = local_2c;
  iVar5 = 0x18;
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    *pbVar6 = bVar1;
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_0206918c(param_1,param_2,0x20,0x18);
  iVar5 = 0;
  do {
    *(byte *)(param_2 + iVar5) = *(byte *)(param_2 + iVar5) ^ *(byte *)(DAT_0209dd68 + iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x18);
  local_30 = 0;
  do {
    bVar1 = local_2c[local_30 & 0xff];
    uVar3 = local_30 & 0xff;
    uVar4 = *(undefined1 *)(param_2 + local_30);
    while (bVar1 != 0xff) {
      uVar8 = (uint)local_2c[uVar3];
      uVar2 = *(undefined1 *)(param_2 + uVar8);
      *(undefined1 *)(param_2 + (uint)local_2c[uVar3]) = uVar4;
      local_2c[uVar3] = 0xff;
      uVar3 = uVar8;
      uVar4 = uVar2;
      bVar1 = local_2c[uVar8];
    }
    local_30 = local_30 + 1;
  } while ((int)local_30 < 0x18);
  iVar5 = 0;
  do {
    *(byte *)(param_2 + iVar5) = *(byte *)(param_2 + iVar5) ^ *(byte *)(DAT_0209dd5c + iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x18);
  return;
}

