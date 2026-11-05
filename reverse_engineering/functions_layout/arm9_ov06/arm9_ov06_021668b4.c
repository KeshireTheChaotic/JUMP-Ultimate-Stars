
undefined4 FUN_021668b4(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_b0 [8];
  int local_a8 [32];
  undefined4 uStack_28;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  uStack_28 = param_4;
  FUN_02051890(*(undefined4 *)(param_1 + 0x80),local_a8,
               (uint)*(byte *)(*(int *)(param_1 + 0x24) + 0x10) << 3);
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x24) + 0x10); iVar5 = iVar5 + 1)
  {
    iVar1 = FUN_0215b3e0();
    FUN_02166a1c(auStack_b0,local_a8 + iVar1 * 2);
    FUN_02166a1c(local_a8 + iVar1 * 2,local_a8 + iVar5 * 2);
    FUN_02166a1c(local_a8 + iVar5 * 2,auStack_b0);
  }
  uVar6 = 0;
  iVar5 = 0;
  do {
    if ((int)(uint)*(byte *)(*(int *)(param_1 + 0x24) + 0x10) <= iVar5) {
      return 0;
    }
    if ((param_3 == 0) ||
       (puVar4 = (undefined4 *)(iVar5 * 0xc + *(int *)(param_1 + 0x2c)),
       iVar1 = FUN_021663ec(*puVar4,puVar4[1],1,0x1800), iVar1 == 0)) {
      uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_02164d48(0xc0,local_a8[iVar5 * 2],local_a8[iVar5 * 2 + 1] + -1,
                   (int)(((uVar3 & 0x3ff) - 0x200) * 0x10000) >> 0x10,
                   (int)((-0x500 - (uVar2 & 0x3ff)) * 0x10000) >> 0x10,0);
      uVar6 = uVar6 + 1;
      if (param_2 <= uVar6) {
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

