
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME Option::Option_Add [source-string] __FILE__="Option.cpp" __FUNCTION__="Option_Add"
   lines=[222, 1219] passed to 2 source-location call(s); header inlines: ALNodeImp.h:Create */

int Option::Option_Add(void)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  int local_78;
  int local_74;
  int local_70;
  int local_6c [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  piVar2 = (int *)thunk_FUN_0201a228(0xac,s_Option_cpp_021614f0,s_Option_Add_0216136c,0xde);
  FUN_020517fc(piVar2,0,0xac);
  iVar3 = FUN_02026f94();
  *piVar2 = iVar3;
  local_6c[0xb] = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),local_6c + 0xb);
  FUN_02028384(*(undefined4 *)(*piVar2 + 4),FUN_02157eb8);
  (**(code **)(**(int **)(*piVar2 + 4) + 0x24))(*(int **)(*piVar2 + 4),piVar2);
  iVar3 = FUN_020310f4();
  piVar2[1] = iVar3;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar3 + 4));
  FUN_02043264(1);
  iVar3 = FUN_0203b414(0);
  local_6c[7] = 0x1000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_6c + 7);
  iVar3 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x40);
  iVar3 = FUN_0203b414(1);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b414(1);
  local_6c[8] = 0x2000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_6c + 8);
  iVar3 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
  iVar3 = FUN_0203b414(2);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b414(2);
  local_6c[9] = 0x3000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_6c + 9);
  iVar3 = FUN_0203b414(2);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x94))(piVar4,1);
  iVar3 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x20);
  iVar3 = FUN_0203b414(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x4000);
  iVar3 = FUN_0203b414(3);
  local_6c[10] = 0;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_6c + 10);
  iVar3 = func_0x021bcf1c(0x1e,0xffffffff,1,0xffffffff);
  piVar2[0x22] = iVar3;
  iVar3 = func_0x021bd58c();
  piVar2[0x2a] = iVar3;
  iVar3 = FUN_020101f4(s_option_option_aar_021614fc,0);
  piVar2[2] = iVar3;
  iVar3 = FUN_020101f4(s_option_option_obj_aar_02161510,0);
  piVar2[5] = iVar3;
  iVar3 = FUN_020101f4(s_option_del_info_obj_aar_02161528,0);
  piVar2[3] = iVar3;
  iVar3 = FUN_020101f4(s_common_button_aar_02161540,0);
  piVar2[6] = iVar3;
  iVar3 = FUN_020101f4(s_option_info_obj_aar_02161554,0);
  piVar2[4] = iVar3;
  *(bool *)(piVar2 + 0x26) = (DAT_020b0b90 & 0x100000) != 0;
  FUN_020733a8();
  uVar1 = FUN_02158750();
  *(undefined1 *)((int)piVar2 + 0x99) = uVar1;
  FUN_020733f4();
  uVar1 = FUN_02158750();
  *(undefined1 *)((int)piVar2 + 0x9a) = uVar1;
  *(undefined1 *)((int)piVar2 + 0x9b) = DAT_020b0b96;
  *(char *)((int)piVar2 + 0x9d) = (char)piVar2[0x26];
  *(undefined1 *)((int)piVar2 + 0x9e) = *(undefined1 *)((int)piVar2 + 0x99);
  *(undefined1 *)((int)piVar2 + 0x9f) = *(undefined1 *)((int)piVar2 + 0x9a);
  *(undefined1 *)(piVar2 + 0x28) = *(undefined1 *)((int)piVar2 + 0x9b);
  *(char *)((int)piVar2 + 0xa1) = (char)piVar2[0x27];
  iVar3 = thunk_FUN_0201a228(0x78,FUN_02161148,s_Create_0216133c,0x4c3);
  if (iVar3 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar3,FUN_02024a30,1);
  }
  iVar3 = FUN_0214ed84();
  piVar2[7] = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  iVar3 = FUN_0203b414(1);
  iVar3 = FUN_021582d8(s_option_option_02161568,*(undefined4 *)(iVar3 + 0x88));
  piVar2[8] = iVar3;
  iVar3 = FUN_0203b414(2);
  iVar3 = FUN_021582d8(FUN_02161578,*(undefined4 *)(iVar3 + 0x88));
  piVar2[9] = iVar3;
  local_8c = 0;
  local_88 = 0xfff00000;
  local_84 = 0x100000;
  FUN_02151038(auStack_30,&local_84,&local_88,&local_8c);
  FUN_02150d54(auStack_80,iVar3,FUN_02161580);
  uVar5 = ALControllerImp::Create(auStack_80,0x494c,&DAT_02093c8c,auStack_30,0x400,2);
  FUN_02020f38(iVar3,uVar5);
  FUN_0214f3e0(piVar2[8],piVar2[7]);
  iVar3 = FUN_0203b3e4();
  iVar3 = FUN_021583dc(0xb00000,0xb00000,*(undefined4 *)(iVar3 + 0x88),FUN_02161424,0,0xa0);
  piVar2[10] = iVar3;
  FUN_021552fc(piVar2[7],piVar2[10]);
  iVar3 = 1;
  do {
    iVar6 = FUN_0203b3e4();
    iVar6 = FUN_021583dc(*(undefined4 *)(iVar3 * 8 + 0x2160104),0xb00000,
                         *(undefined4 *)(iVar6 + 0x88),
                         FUN_02161424 + (uint)*(byte *)(iVar3 * 8 + 0x2160108) * 0xc,piVar2[7],
                         *(undefined1 *)(iVar3 * 8 + 0x2160109));
    iVar8 = iVar3 + 1;
    piVar2[iVar3 + 10] = iVar6;
    iVar3 = iVar8;
  } while (iVar8 < 9);
  local_6c[0] = (**(code **)(**(int **)(*(int *)(piVar2[0xd] + 4) + 0x68) + 0x98))();
  local_6c[0] = local_6c[0] << 0xc;
  piVar4 = *(int **)(*(int *)(piVar2[0xd] + 4) + 0x68);
  (**(code **)(*piVar4 + 0xb8))(piVar4,local_6c);
  local_70 = (**(code **)(**(int **)(*(int *)(piVar2[0xe] + 4) + 0x68) + 0x98))();
  local_70 = local_70 << 0xc;
  piVar4 = *(int **)(*(int *)(piVar2[0xe] + 4) + 0x68);
  (**(code **)(*piVar4 + 0xb8))(piVar4,&local_70);
  local_74 = (**(code **)(**(int **)(*(int *)(piVar2[0x10] + 4) + 0x68) + 0x98))();
  local_74 = local_74 << 0xc;
  piVar4 = *(int **)(*(int *)(piVar2[0x10] + 4) + 0x68);
  (**(code **)(*piVar4 + 0xb8))(piVar4,&local_74);
  local_78 = (**(code **)(**(int **)(*(int *)(piVar2[0x11] + 4) + 0x68) + 0x98))();
  local_78 = local_78 << 0xc;
  piVar4 = *(int **)(*(int *)(piVar2[0x11] + 4) + 0x68);
  (**(code **)(*piVar4 + 0xb8))(piVar4,&local_78);
  if (*(char *)((int)piVar2 + 0x9d) == '\0') {
    FUN_02023894(*(undefined4 *)(piVar2[0xb] + 4),0xb00001,0);
  }
  else {
    FUN_02023894(*(undefined4 *)(piVar2[0xb] + 4),0xb00002,0);
  }
  FUN_02023894(*(undefined4 *)(piVar2[0xc] + 4),*(byte *)((int)piVar2 + 0x9e) + 0xb00003,0);
  FUN_02023894(*(undefined4 *)(piVar2[0xf] + 4),*(byte *)((int)piVar2 + 0x9f) + 0xb00003,0);
  iVar3 = FUN_0203b3e4();
  FUN_0214ed48(*(undefined4 *)(iVar3 + 0x88));
  func_0x021c5f88(s_font_jskfont_aft_0216158c,0,0);
  iVar3 = FUN_0214ed84();
  FUN_02151170(iVar3,0x2161460);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar4 + 0x88))(piVar4,0x90);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar4 + 0x84))(piVar4,2);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar4 + 0xa8))(piVar4,6);
  local_6c[1] = 0xa7000;
  FUN_0214eed0(iVar3,local_6c + 1);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_0214edac();
  FUN_0214f3e0(iVar3,piVar2[7]);
  FUN_021552fc(piVar2[7],iVar3);
  piVar2[0x13] = iVar3;
  uVar5 = func_0x021bd710(piVar2[0x22],(int)(char)piVar2[0x28]);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar4 + 0x68))(piVar4,uVar5);
  iVar3 = thunk_FUN_0201a228(0xcc,FUN_02161154,s_Create_02161354,0x1de);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar3,FUN_021581d0,FUN_02158224,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)piVar4[6];
  func_0x021b3b7c(1,0,piVar4,0);
  iVar3 = (**(code **)(*(int *)piVar4[1] + 0xb0))((int *)piVar4[1],0x31305053);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0214ed84();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 4) + 100);
  piVar7 = *(int **)(iVar3 + 0x2c);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_02036430(*(undefined4 *)(iVar3 + 0x20));
  }
  if (piVar7[6] == 0) {
    (**(code **)(*piVar7 + 0x10))();
  }
  iVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar7[6],0x11,0xf,5,0x80);
  *(undefined2 *)(iVar3 + 0x18) = 0;
  *(undefined2 *)(iVar3 + 0x16) = 0x8df;
  *(undefined1 *)(iVar3 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar3 + 0x1c) = 1;
  *(undefined1 *)(iVar3 + 0x1b) = 1;
  piVar2[0x23] = iVar3;
  (**(code **)(*piVar4 + 8))();
  _DAT_021d5154 = 0xffffffff;
  iVar3 = ALWidgetBaseImp::Create(0);
  piVar2[0x14] = iVar3;
  local_6c[6] = 0xa9000;
  FUN_0214eed0(piVar2[0x14],local_6c + 6);
  iVar3 = ALWidgetBaseImp::Create(piVar2[0x14]);
  piVar2[0x16] = iVar3;
  local_6c[5] = 0xa9000;
  FUN_0214eed0(piVar2[0x16],local_6c + 5);
  iVar3 = ALWidgetImp::Create(piVar2,piVar2[0x16],&DAT_0216146c,&DAT_02161378);
  iVar6 = FUN_0203b3e4();
  FUN_021583dc(0x510000,0x510000,*(undefined4 *)(iVar6 + 0x88),&DAT_02093c8c,iVar3,0x60);
  func_0x021b3fc4(*(undefined4 *)(iVar3 + 4),0x510001);
  func_0x021b3f78(*(undefined4 *)(iVar3 + 4),0x510000);
  func_0x021b3fb0(*(undefined4 *)(iVar3 + 4),0x510000);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),0x510000,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar3 + 4),0x20);
  func_0x021b6760(*(undefined4 *)(iVar3 + 4),4,FUN_02158e38);
  iVar3 = FUN_0203b3e4();
  FUN_0214ed48(*(undefined4 *)(iVar3 + 0x88));
  _DAT_021d5154 = 1;
  iVar3 = ALWidgetBaseImp::Create(piVar2[0x14]);
  piVar2[0x15] = iVar3;
  local_6c[4] = 0xa9000;
  FUN_0214eed0(piVar2[0x15],local_6c + 4);
  func_0x021b7744(*(undefined4 *)(piVar2[0x15] + 4),1);
  iVar3 = 0;
  do {
    iVar6 = ALWidgetImp::Create(piVar2,piVar2[0x15],
                                FUN_02161424 + (uint)(byte)(&DAT_02160150)[iVar3 * 8] * 0xc,
                                &DAT_02161378 + (uint)(byte)(&DAT_02160151)[iVar3 * 8] * 8);
    piVar2[iVar3 + 0x17] = iVar6;
    *(undefined4 *)(*(int *)(iVar6 + 4) + 0xdc) = (&DAT_0216014c)[iVar3 * 2];
    local_6c[3] = 0xa9000;
    FUN_0214eed0(piVar2[iVar3 + 0x17],local_6c + 3);
    *(int *)(*(int *)(piVar2[iVar3 + 0x17] + 4) + 0x124) = iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  FUN_0214edac();
  func_0x021b65e8(*(undefined4 *)(piVar2[0x1a] + 4),4,FUN_02158d60);
  func_0x021b65e8(*(undefined4 *)(piVar2[0x1b] + 4),4,FUN_02158dcc);
  iVar3 = 0;
  do {
    if (iVar3 == 0) {
      FUN_02158158(piVar2[0x17],piVar2[0x1b]);
    }
    else {
      FUN_02158158(piVar2[iVar3 + 0x17],piVar2[iVar3 + 0x16]);
    }
    if (iVar3 == 4) {
      FUN_02158194(piVar2[0x1b],piVar2[0x17]);
    }
    else {
      FUN_02158194(piVar2[iVar3 + 0x17],piVar2[iVar3 + 0x18]);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  _DAT_021d5154 = 0xffffffff;
  iVar3 = 5;
  do {
    iVar6 = ALWidgetImp::Create(piVar2,piVar2[0x15],
                                FUN_02161424 + (uint)(byte)(&DAT_02160150)[iVar3 * 8] * 0xc,
                                &DAT_02161378 + (uint)(byte)(&DAT_02160151)[iVar3 * 8] * 8);
    piVar2[iVar3 + 0x17] = iVar6;
    func_0x021b65e8(*(undefined4 *)(iVar6 + 4),4,(&DAT_0216014c)[iVar3 * 2]);
    *(undefined1 *)(*(int *)(piVar2[iVar3 + 0x17] + 4) + 0xaa) = 1;
    *(undefined1 *)(*(int *)(piVar2[iVar3 + 0x17] + 4) + 0xab) = 0;
    local_6c[2] = 0xa8000;
    FUN_0214eed0(piVar2[iVar3 + 0x17],local_6c + 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xb);
  *(undefined1 *)(*(int *)(piVar2[0x1e] + 4) + 0xa5) = 1;
  *(undefined1 *)(*(int *)(piVar2[0x1f] + 4) + 0xa5) = 1;
  *(undefined1 *)(*(int *)(piVar2[0x20] + 4) + 0xa5) = 1;
  *(undefined1 *)(*(int *)(piVar2[0x21] + 4) + 0xa5) = 1;
  FUN_0214f3e0(piVar2[0x15],piVar2[7]);
  _DAT_021d5154 = 0;
  _DAT_021d514c = &LAB_021582c0;
  func_0x021b7260(1,0x30078);
  func_0x021b7260(2,0x30078);
  func_0x021b7260(8,0x30078);
  func_0x021b7260(4,0x30078);
  func_0x021b7260(0x10000,0x30078);
  iVar3 = OptionSaveDelete::OptionSaveDelete_Create(piVar2);
  piVar2[0x24] = iVar3;
  iVar3 = OptionInfoChara::OptionInfoChara_Create(piVar2);
  piVar2[0x25] = iVar3;
  FUN_020734e0(3);
  FUN_0207361c(3,0);
  func_0x021b65bc();
  FUN_02073ebc(2,1);
  func_0x021b6214(*(undefined4 *)(piVar2[0x14] + 4),1);
  func_0x021b6214(*(undefined4 *)(piVar2[0x15] + 4),1);
  func_0x021b6214(*(undefined4 *)(piVar2[0x17] + 4),1);
  local_90 = 0;
  local_98 = 0;
  local_94 = 0xfff40000;
  FUN_02151038(auStack_3c,&local_98,&local_94,&local_90);
  FUN_02150d54(auStack_a0,piVar2[7],FUN_02161580);
  uVar5 = ALControllerImp::Create(auStack_a0,0x494c,auStack_3c,&DAT_02093c8c,8,0xb);
  FUN_02020f38(piVar2[7],uVar5);
  return piVar2[1];
}

