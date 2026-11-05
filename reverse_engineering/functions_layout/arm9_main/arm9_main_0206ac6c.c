
ulonglong FUN_0206ac6c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint local_28;
  byte local_24;
  byte bStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  byte local_20 [12];
  
  iVar7 = 0;
  uVar2 = (param_1 & 0xffff) >> 5;
  uVar1 = param_1 << 0x1b | (param_2 & 0xffffff) << 3 | param_4 & 3 | (param_3 & 1) << 2;
  local_28 = uVar1;
  local_24 = (byte)uVar2;
  bStack_23 = (byte)(uVar2 >> 8);
  uStack_22 = (undefined1)(uVar2 >> 0x10);
  uStack_22 = 0;
  uStack_21 = 0;
  puVar3 = &local_28;
  do {
    *(byte *)puVar3 = (byte)*puVar3 ^ 0xd6;
    puVar3 = (uint *)((int)puVar3 + 1);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 6);
  iVar7 = 0;
  puVar3 = &local_28;
  do {
    *(undefined *)puVar3 =
         (&DAT_020923a4)[(int)(uint)(byte)*puVar3 >> 4] << 4 | (&DAT_020923a4)[(byte)*puVar3 & 0xf];
    puVar3 = (uint *)((int)puVar3 + 1);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  FUN_02051890(&local_28,local_20,8,0xf,uVar1);
  iVar7 = 0;
  pbVar8 = local_20;
  pbVar5 = &DAT_0209239c;
  puVar3 = &local_28;
  do {
    *(byte *)((int)puVar3 + (uint)*pbVar5) = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar5 = pbVar5 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  iVar7 = 0;
  iVar6 = (uint)(CONCAT11(bStack_23,local_24) & 0x7ff) << 1;
  local_24 = (byte)iVar6 | (byte)(local_28 >> 0x1f);
  iVar4 = local_28 << 1;
  bStack_23 = (byte)((uint)iVar6 >> 8);
  uStack_22 = 0;
  uStack_21 = 0;
  local_28._0_1_ = (byte)iVar4;
  local_28 = CONCAT31((int3)((uint)iVar4 >> 8),(byte)local_28 | (byte)((int)(uint)bStack_23 >> 3));
  do {
    *(byte *)puVar3 = (byte)*puVar3 ^ 0x67;
    puVar3 = (uint *)((int)puVar3 + 1);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 6);
  return (ulonglong)(CONCAT15(bStack_23,CONCAT14(local_24,local_28)) & 0x7ffffffffff);
}

