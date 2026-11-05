
/* WARNING: Removing unreachable block (ram,0x021ba898) */
/* JUS-GAME CommonWindow::CommonWindow_Create [source-string] __FILE__="CommonWindow.cpp"
   __FUNCTION__="CommonWindow_Create" lines=[83, 678] passed to 2 source-location call(s); header
   inlines: ALWidgetBaseImp.h:Create */

undefined4 * CommonWindow::CommonWindow_Create(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_4c [8];
  undefined4 local_44;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x220,s_CommonWindow_cpp_021d3f34,s_CommonWindow_Create_021d3e6c,0x53);
  FUN_020517fc(puVar1,0,0x220);
  *(undefined1 *)((int)puVar1 + 0xa3) = 0;
  *(undefined1 *)((int)puVar1 + 0xa5) = 1;
  *(undefined1 *)((int)puVar1 + 0xa1) = 0xff;
  if (param_1 == 0) {
    iVar2 = FUN_0203b414();
  }
  else {
    iVar2 = FUN_0203b424(param_2);
  }
  puVar1[6] = *(undefined4 *)(iVar2 + 0x88);
  *(char *)((int)puVar1 + 0x9a) = (char)param_1;
  *(char *)((int)puVar1 + 0x99) = (char)param_2;
  iVar2 = FUN_02026f94();
  puVar1[4] = iVar2;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(puVar1[4] + 4),FUN_021bad90);
  (**(code **)(**(int **)(puVar1[4] + 4) + 0x24))(*(int **)(puVar1[4] + 4),puVar1);
  piVar3 = (int *)thunk_FUN_0203341c(s_bin_commwin_bin_021d3f48,0,0);
  if (piVar3[7] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar2 = piVar3[7];
  puVar1[5] = iVar2;
  piVar3 = *(int **)(iVar2 + 4);
  uVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
  *puVar1 = uVar4;
  FUN_021bbf80();
  if (param_3 == 0) {
    FUN_0203d0b4(*(undefined4 *)(puVar1[6] + 4),1);
    local_2c = 0;
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x10))(*(int **)(puVar1[6] + 4),&local_2c);
    FUN_0203d478(*(undefined4 *)(puVar1[6] + 4),4);
    FUN_0203cfbc(*(undefined4 *)(puVar1[6] + 4),0x40,0x20);
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x90))(*(int **)(puVar1[6] + 4),0x8000);
  }
  else {
    FUN_0203d0b4(*(undefined4 *)(puVar1[6] + 4),1);
    local_30 = 0;
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x10))(*(int **)(puVar1[6] + 4),&local_30);
    FUN_0203d478(*(undefined4 *)(puVar1[6] + 4),4);
    FUN_0203cfbc(*(undefined4 *)(puVar1[6] + 4),0x40,0x20);
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x90))(*(int **)(puVar1[6] + 4),0x4000);
  }
  DAT_020a0dd0 = *(undefined4 *)(puVar1[6] + 4);
  piVar3 = (int *)FUN_02035c90(s_common_win_c00_dig_021d3f58);
  if (piVar3[0xe] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  iVar5 = piVar3[0xe];
  FUN_02036ab8();
  iVar2 = FUN_021acab4();
  puVar1[7] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),s_common_win_c00_atm_021d3f6c);
  if (iVar5 == 0) {
    piVar3 = *(int **)(*(int *)(puVar1[7] + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,0,0);
  }
  else {
    piVar3 = *(int **)(*(int *)(puVar1[7] + 4) + 100);
    (**(code **)(*piVar3 + 0x50))(piVar3,*(undefined4 *)(iVar5 + 4),0);
  }
  local_34 = 0;
  local_38 = 0;
  FUN_021bb970(puVar1[7],&local_38,&local_34);
  (**(code **)(**(int **)(puVar1[7] + 4) + 0xd8))(*(int **)(puVar1[7] + 4),0);
  FUN_02034d7c(iVar5);
  uVar4 = FUN_021bbfb0(puVar1[7]);
  uVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar4,0xf3,2,5,0x80);
  puVar1[1] = uVar4;
  uVar4 = FUN_021bbfb0(puVar1[7]);
  uVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar4,0xf5,2,5,0x80);
  puVar1[2] = uVar4;
  uVar4 = FUN_021bbfb0(puVar1[7]);
  uVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar4,0xf1,2,5,0x80);
  puVar1[3] = uVar4;
  FUN_021bbff8(puVar1[1],3,0x870,0x8df,0x1e);
  FUN_021bbff8(puVar1[2],3,0x870,0x8df,0x1e);
  FUN_021bbff8(puVar1[3],3,0x870,0x8df,0x1e);
  FUN_021bc018(puVar1[1],0);
  FUN_021bc018(puVar1[2],0);
  FUN_021bc018(puVar1[3],0);
  FUN_021bc03c();
  uVar4 = DAT_021d5154;
  iVar2 = jus_AllocDebug(0x14c,s_ALWidgetBaseImp_h_021d177c,s_Create_021d3e0c,0x2a6);
  if (iVar2 != 0) {
    ALNodeImp::Create(iVar2,0,uVar4,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_021acab4();
  puVar1[0x10] = iVar2;
  FUN_021b5898(*(undefined4 *)(iVar2 + 4));
  local_5c = 0x8000;
  FUN_021bbde0(puVar1[0x10],&local_5c);
  local_54 = 0;
  local_58 = 0x100000;
  FUN_021bb970(puVar1[0x10],&local_58,&local_54);
  (**(code **)(**(int **)(puVar1[0x10] + 4) + 0xd8))(*(int **)(puVar1[0x10] + 4),1);
  FUN_021b65d8(*(undefined4 *)(puVar1[0x10] + 4));
  iVar2 = ALWidgetImp::Create(puVar1[0x10],DAT_021d5154);
  puVar1[0x11] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  local_50 = 0x8000;
  FUN_021bbde0(puVar1[0x11],&local_50);
  FUN_021b85ec(auStack_4c,0,0,0xff,0xc0);
  uVar4 = FUN_021b9588(0,auStack_4c,&DAT_02093c8c);
  FUN_02020e98(puVar1[0x11],uVar4);
  *(undefined1 *)(*(int *)(puVar1[0x11] + 4) + 0xaa) = 1;
  FUN_021b65e8(*(undefined4 *)(puVar1[0x11] + 4),4,FUN_021bbaec);
  *(undefined1 *)(*(int *)(puVar1[0x11] + 4) + 0xb1) = 1;
  (**(code **)(**(int **)(puVar1[0x11] + 4) + 0xd8))();
  iVar2 = 0;
  do {
    iVar5 = ALWidgetImp::Create(puVar1[0x10],DAT_021d5154);
    puVar1[iVar2 + 0x12] = iVar5;
    (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),puVar1);
    local_44 = 0x8000;
    FUN_021bbde0(puVar1[iVar2 + 0x12],&local_44);
    *(int *)(*(int *)(puVar1[iVar2 + 0x12] + 4) + 0x124) = iVar2;
    FUN_021b85ec(auStack_40,0,0,0x40,0x18);
    uVar4 = FUN_021b9588(0,auStack_40,&DAT_02093c8c);
    FUN_02020e98(puVar1[iVar2 + 0x12],uVar4);
    *(undefined1 *)(*(int *)(puVar1[iVar2 + 0x12] + 4) + 0xa4) = 0;
    *(code **)(*(int *)(puVar1[iVar2 + 0x12] + 4) + 0xec) = FUN_021bbc20;
    *(code **)(*(int *)(puVar1[iVar2 + 0x12] + 4) + 0xe4) = FUN_021bbc5c;
    *(undefined1 *)(*(int *)(puVar1[iVar2 + 0x12] + 4) + 0xb1) = 1;
    (**(code **)(**(int **)(puVar1[iVar2 + 0x12] + 4) + 0xd8))
              (*(int **)(puVar1[iVar2 + 0x12] + 4),1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 0;
  do {
    (**(code **)(**(int **)(puVar1[iVar2 + 0x13] + 4) + 0x160))
              (*(int **)(puVar1[iVar2 + 0x13] + 4),8,*(undefined4 *)(puVar1[iVar2 + 0x12] + 4));
    (**(code **)(**(int **)(puVar1[iVar2 + 0x12] + 4) + 0x160))
              (*(int **)(puVar1[iVar2 + 0x12] + 4),4,*(undefined4 *)(puVar1[iVar2 + 0x13] + 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return puVar1;
}

