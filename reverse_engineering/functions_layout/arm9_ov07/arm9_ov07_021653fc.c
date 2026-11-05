
/* JUS-GAME CommuMenuEntryDataEnt::CommuMenuEntryDataEnt_Add_Core [source-string]
   __FILE__="CommuMenuEntryDataEnt.cpp" __FUNCTION__="CommuMenuEntryDataEnt_Add_Core" lines=[188]
   passed to 1 source-location call(s) */

int CommuMenuEntryDataEnt::CommuMenuEntryDataEnt_Add_Core(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [3];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar1 = (int *)jus_AllocDebug(0x44,s_CommuMenuEntryDataEnt_cpp_0216aba8,
                                 s_CommuMenuEntryDataEnt_Add_Core_0216ab88,0xbc);
  FUN_020517fc(piVar1,0,0x44);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  iVar2 = thunk_FUN_0208c51c();
  if (iVar2 != 0) {
    FUN_0208c5d0();
  }
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(*piVar1);
  func_0x021b65bc();
  piVar1[7] = param_1;
  iVar2 = 0;
  piVar1[9] = 0;
  do {
    if (DAT_020afe94 <= iVar2) {
LAB_021654c8:
      piVar1[8] = iVar2;
      if (DAT_020afe94 <= iVar2) {
        piVar1[7] = 1;
      }
      FUN_02043264(1);
      iVar2 = FUN_0203b414(0);
      iVar2 = *(int *)(iVar2 + 0x88);
      FUN_0203d0b4(*(undefined4 *)(iVar2 + 4),0);
      local_44 = 0;
      piVar3 = *(int **)(iVar2 + 4);
      (**(code **)(*piVar3 + 0x10))(piVar3,&local_44);
      iVar2 = 1;
      do {
        iVar4 = FUN_0203b414(iVar2);
        iVar4 = *(int *)(iVar4 + 0x88);
        FUN_0203d0b4(*(undefined4 *)(iVar4 + 4),1);
        FUN_0203d478(*(undefined4 *)(iVar4 + 4),4);
        FUN_0203cfbc(*(undefined4 *)(iVar4 + 4),0,0);
        (**(code **)(**(int **)(iVar4 + 4) + 0x90))(*(int **)(iVar4 + 4),0);
        local_40[0] = iVar2 << 0xc;
        (**(code **)(**(int **)(iVar4 + 4) + 0x10))(*(int **)(iVar4 + 4),local_40);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      iVar2 = 0;
      do {
        iVar4 = FUN_0203b424(iVar2);
        FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),1);
        iVar4 = FUN_0203b424(iVar2);
        FUN_0203d478(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),4);
        iVar4 = FUN_0203b424(iVar2);
        FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),0,0);
        iVar4 = FUN_0203b424(iVar2);
        piVar3 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
        (**(code **)(*piVar3 + 0x90))(piVar3,0);
        iVar4 = FUN_0203b424(iVar2);
        local_40[2] = iVar2 << 0xc;
        piVar3 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
        (**(code **)(*piVar3 + 0x10))(piVar3,local_40 + 2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      iVar2 = FUN_0203b424(3);
      iVar2 = *(int *)(iVar2 + 0x88);
      FUN_0203d0b4(*(undefined4 *)(iVar2 + 4),3);
      FUN_0203d478(*(undefined4 *)(iVar2 + 4),8);
      FUN_0203cfbc(*(undefined4 *)(iVar2 + 4),0x20,0x20);
      (**(code **)(**(int **)(iVar2 + 4) + 0x90))(*(int **)(iVar2 + 4),0x4000);
      local_40[1] = 0x3000;
      (**(code **)(**(int **)(iVar2 + 4) + 0x10))(*(int **)(iVar2 + 4),local_40 + 1);
      (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),1);
      iVar2 = FUN_0203b414(3);
      iVar2 = CommuMenuCommon::CMMenuCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
      piVar1[4] = iVar2;
      iVar2 = FUN_0203b424(3);
      iVar2 = FUN_02150f80(s_deckselect_deck_base_atm_0216abc4,s_deckselect_deck_base_dig_0216abe0,
                           *(undefined4 *)(iVar2 + 0x88));
      piVar1[0xd] = iVar2;
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
      iVar2 = ComicDeck::ComicDeckCreate(1,1);
      piVar1[10] = iVar2;
      iVar2 = FUN_02076908();
      piVar1[0xb] = iVar2;
      iVar2 = ComicDeckDisp::ComicDeck_DispCreate(1,1,3,1,1);
      piVar1[0xc] = iVar2;
      FUN_0207903c(iVar2,8,0);
      FUN_02079c30(piVar1[0xc],0x60);
      iVar2 = FUN_020101f4(s_Commu_entry_3d_aar_0216abfc,0);
      piVar1[0xe] = iVar2;
      iVar2 = FUN_0203b404();
      DAT_02093c08 = DAT_02093c08 + -1;
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
      (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
      DAT_020a0dd0 = uVar5;
      FUN_020329ec(0x810000);
      iVar2 = FUN_0214f340();
      piVar1[0xf] = iVar2;
      local_5c = 0x80000;
      FUN_0214f27c(piVar1[0xf],&local_5c);
      local_54 = 0x28000;
      local_58 = 0x80000;
      FUN_0214f218(piVar1[0xf],&local_58,&local_54);
      FUN_02023894(*(undefined4 *)(piVar1[0xf] + 4),0x810000,0);
      (**(code **)(**(int **)(*(int *)(piVar1[0xf] + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(piVar1[0xf] + 4) + 0xd8))(*(int **)(piVar1[0xf] + 4),0);
      iVar2 = func_0x021caa0c(s_font_dsfont_aft_0216ac10,0,0);
      func_0x021c5fb4(*(undefined4 *)(iVar2 + 4));
      iVar4 = FUN_0214f340();
      piVar1[0x10] = iVar4;
      local_34 = 0x1000;
      local_30 = 0x1000;
      local_2c = 0x1000;
      local_28 = 0x1000;
      (**(code **)(**(int **)(piVar1[0x10] + 4) + 0xfc))(*(int **)(piVar1[0x10] + 4),&local_34);
      local_50 = 0x7f000;
      FUN_0214f27c(piVar1[0x10],&local_50);
      local_48 = 0x26000;
      local_4c = 0x49000;
      FUN_0214f218(piVar1[0x10],&local_4c,&local_48);
      FUN_02165c04(piVar1[0x10]);
      (**(code **)(**(int **)(piVar1[0x10] + 4) + 0xd8))(*(int **)(piVar1[0x10] + 4),0);
      (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
      DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
      DAT_02093c08 = DAT_02093c08 + 1;
      if (piVar1[7] != 1) {
        uVar5 = FUN_02070ca4(piVar1[8]);
        FUN_02165be4(piVar1,uVar5);
        uVar5 = FUN_02070cdc(piVar1[8]);
        FUN_02165c30(piVar1,uVar5);
        if (piVar1[0x10] != 0) {
          piVar3 = *(int **)(piVar1[0x10] + 4);
          (**(code **)(*piVar3 + 0xd8))(piVar3,1);
        }
        if (piVar1[0xf] != 0) {
          piVar3 = *(int **)(piVar1[0xf] + 4);
          (**(code **)(*piVar3 + 0xd8))(piVar3,1);
        }
      }
      iVar2 = func_0x021ba49c(0,1,1);
      piVar1[3] = iVar2;
      func_0x021bad80(iVar2,0);
      FUN_020734e0(5);
      FUN_0207361c(5,0);
      FUN_02073ebc(2,1);
      iVar2 = FUN_02026f94();
      piVar1[1] = iVar2;
      (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
      FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_02165d04);
      iVar2 = FUN_02026f94();
      piVar1[2] = iVar2;
      (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
      FUN_02073f24(9,0,0x3c);
      FUN_02028384(*(undefined4 *)(piVar1[2] + 4),FUN_02165cdc);
      return *piVar1;
    }
    if (iVar2 != DAT_020afe98) {
      FUN_02070cdc(iVar2);
      iVar4 = FUN_020725ac();
      if (iVar4 != 0) {
        FUN_02070cdc(iVar2);
        goto LAB_021654c8;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

