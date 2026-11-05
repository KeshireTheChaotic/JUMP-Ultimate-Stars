
/* JUS-GAME BattleAI_Move::BattleAIMove_Create [source-string] __FILE__="BattleAI_Move.cpp"
   __FUNCTION__="BattleAIMove_Create" lines=[545] passed to 1 source-location call(s) */

undefined4 *
BattleAI_Move::BattleAIMove_Create
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 local_ac;
  undefined1 auStack_a8 [128];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(400,s_BattleAI_Move_cpp_0218189c,s_BattleAIMove_Create_02181888,0x221)
  ;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  FUN_020517fc(puVar1,0,400);
  iVar2 = FUN_02020d90();
  (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),0x80000);
  local_ac = 0x93000;
  FUN_02172e14(iVar2,&local_ac);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_02177444);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02174de4(iVar2,param_1);
  FUN_020282f4(*(undefined4 *)(iVar2 + 4));
  puVar1[4] = iVar2;
  FUN_02177060(auStack_a8,param_3,param_4,param_5,0);
  piVar3 = (int *)FUN_02033410(auStack_a8,0,0);
  if (piVar3[7] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar2 = piVar3[7];
  piVar3 = *(int **)(iVar2 + 4);
  iVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
  iVar7 = 0;
  do {
    FUN_02051890(iVar4 + *(int *)(iVar4 + iVar7 * 4 + 4),puVar1 + iVar7 * 10 + 5,0x28);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 7);
  FUN_02083ab8();
  iVar5 = FUN_0207d2a8();
  iVar9 = DAT_02183a38 + 0x3c;
  for (iVar7 = 0; iVar7 < iVar5; iVar7 = (iVar7 + 1) * 0x10000 >> 0x10) {
    if (-1 < *(short *)(iVar9 + 0x1c)) {
      iVar8 = FUN_021771b0(DAT_02183a38 + 0x18);
      FUN_020517fc(iVar8,0,0x48);
      FUN_02037b98(puVar1 + 2,iVar8);
      *(int *)(iVar8 + 0x40) = iVar9;
    }
    iVar9 = iVar9 + 0x20;
  }
  iVar7 = 0;
  for (puVar11 = (undefined4 *)puVar1[2]; puVar11 != (undefined4 *)0x0;
      puVar11 = (undefined4 *)*puVar11) {
    iVar5 = *(int *)(iVar4 + iVar7 * 4 + 0x20);
    iVar9 = 0;
    do {
      iVar8 = 0;
      while ((iVar8 < 0x10 &&
             (iVar6 = (int)*(char *)(iVar4 + iVar5 + iVar9 * 0x10 + iVar8 + 8), -1 < iVar6))) {
        puVar10 = (undefined4 *)puVar1[2];
        while ((puVar10 != (undefined4 *)0x0 && (*(short *)(puVar10[0x10] + 0x1c) != iVar6))) {
          puVar10 = (undefined4 *)*puVar10;
        }
        if (puVar10 != (undefined4 *)0x0) {
          iVar6 = FUN_021771b0(DAT_02183a38 + 0x28);
          *(undefined4 **)(iVar6 + 8) = puVar10;
          FUN_02037b98(puVar11 + iVar9 * 2 + 2);
        }
        iVar8 = iVar8 + 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 7);
    iVar7 = iVar7 + 1;
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  return puVar1;
}

