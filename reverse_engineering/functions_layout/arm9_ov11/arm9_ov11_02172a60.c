
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME BattleAI::BattleAI_Create [source-string] __FILE__="BattleAI.cpp"
   __FUNCTION__="BattleAI_Create" lines=[249, 253] passed to 3 source-location call(s) */

undefined4 * BattleAI::BattleAI_Create(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_020517fc(&DAT_02181a60,0,0x1fd8);
  DAT_02181a88 = FUN_02020d90();
  (**(code **)(**(int **)(DAT_02181a88 + 4) + 0x94))(*(int **)(DAT_02181a88 + 4),0x80000);
  (**(code **)(**(int **)(DAT_02181a88 + 4) + 0x24))(*(int **)(DAT_02181a88 + 4),&DAT_02181a60);
  local_24 = 0x8d000;
  FUN_02172e14(DAT_02181a88,&local_24);
  FUN_02028384(*(undefined4 *)(DAT_02181a88 + 4),FUN_02173410);
  DAT_02181a60 = 0x4e414d41;
  uVar9 = *(uint *)(_DAT_02172960 + 0x158) & 0xff;
  iVar1 = FUN_02033bb8(DAT_021816c4);
  if (iVar1 == 0) {
    DAT_02181a84 = 0;
  }
  else {
    piVar2 = (int *)FUN_02033410(DAT_021816c4,0,0);
    if (piVar2[7] == 0) {
      (**(code **)(*piVar2 + 0x10))();
    }
    DAT_02181a84 = piVar2[7];
  }
  puVar7 = &DAT_02181f38;
  iVar1 = 0;
  do {
    FUN_02037b98(&DAT_02181a6c,puVar7);
    iVar1 = iVar1 + 1;
    puVar7 = puVar7 + 0x38;
  } while (iVar1 < 0x60);
  puVar7 = &DAT_02183438;
  iVar1 = 0;
  do {
    FUN_02037b98(&DAT_02181a7c,puVar7);
    iVar1 = iVar1 + 1;
    puVar7 = puVar7 + 0xc;
  } while (iVar1 < 0x80);
  puVar8 = &DAT_02181b08;
  uVar10 = 0;
  if (uVar9 != 0) {
    for (; uVar10 < uVar9; uVar10 = uVar10 + 1 & 0xff) {
      if ((int *)puVar8[7] != (int *)0x0) {
        (**(code **)(*(int *)puVar8[7] + 8))();
      }
      if (puVar8[5] != 0) {
        FUN_0202899c();
        (**(code **)(**(int **)puVar8[5] + 0xc))();
      }
      if (puVar8[6] != 0) {
        FUN_02020934();
        (**(code **)(*(int *)puVar8[6] + 0xc))();
      }
      iVar1 = FUN_02020d90();
      puVar8[7] = iVar1;
      (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),0x80000);
      FUN_02028384(*(undefined4 *)(puVar8[7] + 4),FUN_02173c54);
      local_28 = 0x8f000;
      FUN_02172e14(puVar8[7],&local_28);
      (**(code **)(**(int **)(puVar8[7] + 4) + 0x24))(*(int **)(puVar8[7] + 4),puVar8);
      piVar2 = *(int **)(puVar8[7] + 4);
      if (DAT_02181a88 == 0) {
        (**(code **)(*piVar2 + 0xd4))(piVar2,0);
      }
      else {
        (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(DAT_02181a88 + 4));
      }
      FUN_020282f4(*(undefined4 *)(puVar8[7] + 4));
      iVar1 = thunk_FUN_0201a228(4,s_BattleAI_cpp_021817c0,s_BattleAI_Create_0218179c,0xf9);
      uVar4 = 0;
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)
                 thunk_FUN_0201a228(0x134,s_BattleAI_cpp_021817c0,s_BattleAI_Create_0218179c,0xf9);
        if (puVar3 != (undefined4 *)0x0) {
          jus_Class_02094864::jus_Class_02094864();
          *puVar3 = &BattleAI_Part_02181700::vftable;
          puVar3[0x38] = uVar10;
          puVar3[0x4b] = 0;
          puVar3[0x3a] = 0;
          puVar3[0x39] = 0;
          puVar3[0x4c] = 0;
          iVar5 = 0;
          do {
            iVar6 = iVar5 + 1;
            puVar3[iVar5 + 0x3b] = 0;
            iVar5 = iVar6;
          } while (iVar6 < 0x10);
        }
        uVar4 = FUN_020288dc(iVar1,puVar3);
      }
      puVar8[5] = uVar4;
      FUN_0202894c(uVar4);
      puVar3 = (undefined4 *)
               thunk_FUN_0201a228(0x14,s_BattleAI_cpp_021817c0,s_BattleAI_Create_0218179c,0xfd);
      if (puVar3 != (undefined4 *)0x0) {
        jus_Class_02095814::jus_Class_02095814();
        *puVar3 = &BattleAI_Part_02181740::vftable;
        puVar3[2] = uVar10;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined2 *)((int)puVar3 + 0xe) = 0;
        *(undefined2 *)(puVar3 + 3) = 0;
      }
      puVar8[6] = puVar3;
      FUN_02020910(puVar3);
      BattleAI_JobAtkCmd::BattleAIObj_CreateCommandNode(puVar8);
      BattleAI_JobAtkBrh::BattleAIObj_CreateBranchNode(puVar8);
      FUN_0217e2d8(puVar8);
      puVar8[0x35] = puVar8[0x35] | uVar10 << 0x1c;
      *(undefined1 *)(puVar8 + 0x42) = 1;
      *puVar8 = 0x4a424f41;
      *(undefined1 *)(puVar8 + 0xe) = 0xff;
      *(undefined1 *)((int)puVar8 + 0x10b) = 0xff;
      puVar8 = puVar8 + 0x43;
    }
  }
  FUN_02176518(DAT_02181a88);
  return &DAT_02181a60;
}

