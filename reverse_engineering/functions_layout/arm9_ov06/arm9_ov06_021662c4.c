
bool FUN_021662c4(int param_1,undefined4 *param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte local_38 [16];
  undefined4 uStack_28;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  uVar5 = 0;
  uStack_28 = param_4;
  for (uVar6 = 0; uVar6 < *(byte *)(param_1 + 0x14c); uVar6 = uVar6 + 1 & 0xff) {
    if ((*(uint *)(param_1 + 0x148) & 1 << uVar6) == 0) {
      iVar7 = uVar6 * 0xc;
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7);
      if (((*(char *)((int)puVar4 + 9) == '\0') &&
          (iVar2 = FUN_021663ec(*puVar4,puVar4[1],9,0x1800), iVar2 == 0)) &&
         (iVar7 = FUN_021663ec(*(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7),
                               *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7 + 4),1,0x1800),
         iVar7 == 0)) {
        local_38[uVar5] = (byte)uVar6;
        uVar5 = uVar5 + 1 & 0xff;
      }
    }
  }
  if (uVar5 != 0) {
    uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar3,uVar5);
    bVar1 = local_38[extraout_r1];
    iVar7 = (short)(ushort)bVar1 * 0xc;
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7);
    param_2[1] = *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7 + 4);
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + iVar7 + 9) = 0xb4;
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 1 << (uint)bVar1;
    *param_3 = bVar1;
  }
  return uVar5 != 0;
}

