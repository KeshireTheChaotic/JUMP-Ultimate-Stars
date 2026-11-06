
/* JUS-GAME BattleTutorial::Battle_TutorialCreate [source-string] __FILE__="BattleTutorial.cpp"
   __FUNCTION__="Battle_TutorialCreate" lines=[79] passed to 1 source-location call(s) */

undefined4 *
BattleTutorial::Battle_TutorialCreate
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x40,s_BattleTutorial_cpp_02171c68,s_Battle_TutorialCreate_02171c08,
                              0x4f);
  FUN_020517fc(puVar1,0,0x40);
  uVar2 = FUN_02028920(0);
  puVar1[3] = uVar2;
  *(undefined1 *)((int)puVar1 + 0x3a) = 99;
  *(undefined1 *)((int)puVar1 + 0x3b) = 99;
  *(char *)((int)puVar1 + 0x36) = (char)param_1;
  *(undefined2 *)((int)puVar1 + 0x32) = 0x80;
  *(undefined2 *)(puVar1 + 0xd) = 0xc0;
  iVar3 = FUN_02026f94();
  puVar1[2] = iVar3;
  local_28 = 0x83000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(puVar1[2] + 4),0x2151311);
  (**(code **)(**(int **)(puVar1[2] + 4) + 0x24))(*(int **)(puVar1[2] + 4),puVar1);
  uVar2 = CommonTutorial::CommonTutorial_Create((&PTR_s_battle_tutorial0_bin_02171c20)[param_1],0);
  puVar1[0xb] = uVar2;
  FUN_0206bb68(uVar2,*(int *)(DAT_02172960 + 0xdc) + 0x1c,*(int *)(DAT_02172960 + 0xdc) + 0x20);
  FUN_0206bcf0(puVar1[0xb],*(int *)(DAT_02172960 + 0xe0) + 0x1c,1);
  *(undefined4 **)(puVar1[0xb] + 0x1c) = puVar1;
  iVar3 = 1;
  *(undefined4 *)(puVar1[0xb] + 0x10) = 0x2151665;
  *(undefined4 *)(puVar1[0xb] + 0x14) = 0x2151b1d;
  *(undefined4 *)(puVar1[0xb] + 0x18) = 0x2151ba9;
  *(ushort *)(puVar1[0xb] + 0x6e) = *(ushort *)(puVar1[0xb] + 0x6e) | 1;
  if (*(char *)(DAT_02172960 + 0x16e) != '\0') {
    for (; iVar3 < *(int *)(DAT_02172960 + 0x158); iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 4;
      func_0x0217319c(*(undefined4 *)(DAT_02172960 + iVar4 + 300),3);
      func_0x021731f0(*(undefined4 *)(DAT_02172960 + iVar4 + 300),0);
      func_0x0217329c(*(undefined4 *)(DAT_02172960 + iVar4 + 300),0xffffffff,1);
    }
  }
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar3 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  uVar2 = FUN_020101f4(s_battle_tutorial_a_aar_02171c7c,0);
  *puVar1 = uVar2;
  piVar5 = puVar1 + 4;
  iVar3 = 0;
  do {
    FUN_020329d4();
    iVar4 = FUN_02151294();
    *piVar5 = iVar4;
    local_1c = 0x44000;
    FUN_021512bc(*piVar5,&local_1c);
    (**(code **)(**(int **)(*piVar5 + 4) + 0x94))(*(int **)(*piVar5 + 4),0x800);
    FUN_02023894(*(undefined4 *)(*piVar5 + 4),iVar3 + 0x6a0000,0);
    (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(*piVar5 + 4) + 0xd8))(*(int **)(*piVar5 + 4),0);
    FUN_020282f4(*(undefined4 *)(*piVar5 + 4));
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar3 < 4);
  FUN_02028384(*(undefined4 *)(puVar1[6] + 4),0x2151abd);
  (**(code **)(**(int **)(puVar1[6] + 4) + 0x24))(*(int **)(puVar1[6] + 4),puVar1);
  iVar3 = func_0x021caa0c(s_font_jskfont_aft_02171c94,0,0);
  func_0x021c5fb4(*(undefined4 *)(iVar3 + 4));
  uVar2 = FUN_02151294();
  puVar1[10] = uVar2;
  local_20 = 0x20000;
  FUN_021512bc(puVar1[10],&local_20);
  (**(code **)(**(int **)(puVar1[10] + 4) + 0x94))(*(int **)(puVar1[10] + 4),0x800);
  piVar5 = *(int **)(*(int *)(puVar1[10] + 4) + 100);
  (**(code **)(*piVar5 + 0xa8))(piVar5,6);
  (**(code **)(**(int **)(puVar1[10] + 4) + 0xd8))(*(int **)(puVar1[10] + 4),0);
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  iVar3 = FUN_0203b3f4();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  uVar2 = FUN_020101f4(s_battle_tutorial_b_aar_02171ca8,0);
  puVar1[1] = uVar2;
  piVar5 = puVar1 + 8;
  FUN_020329ec(0x6b0000);
  uVar2 = FUN_02151294();
  puVar1[8] = uVar2;
  local_24 = 0x20000;
  FUN_021512bc(*piVar5,&local_24);
  FUN_02023894(*(undefined4 *)(*piVar5 + 4),0x6b0000,0);
  (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(*piVar5 + 4) + 0xd8))(*(int **)(*piVar5 + 4),0);
  FUN_020282f4(*(undefined4 *)(*piVar5 + 4));
  FUN_02028384(*(undefined4 *)(puVar1[8] + 4),0x2151aed);
  (**(code **)(**(int **)(puVar1[8] + 4) + 0x24))(*(int **)(puVar1[8] + 4),puVar1);
  iVar3 = DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = (&DAT_020a16d0)[iVar3];
  return puVar1;
}

