
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME OptionSaveDelete::OptionSaveDelete_Create [source-string]
   __FILE__="OptionSaveDelete.cpp" __FUNCTION__="OptionSaveDelete_Create" lines=[187, 1219] passed
   to 2 source-location call(s); header inlines: ALNodeImp.h:Create */

undefined4 * OptionSaveDelete::OptionSaveDelete_Create(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x2c,s_OptionSaveDelete_cpp_02161708,s_OptionSaveDelete_Create_021616f0,
                          0xbb);
  FUN_020517fc(puVar1,0,0x2c);
  *puVar1 = param_1;
  iVar2 = jus_AllocDebug(0x78,s_ALNodeImp_h_02161148,s_Create_0216167c,0x4c3);
  if (iVar2 != 0) {
    jus_Class_0209c0b4::jus_Class_0209c0b4(iVar2,FUN_02024a30,1);
  }
  iVar2 = FUN_0214ed84();
  puVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar2 = FUN_0203b404();
  FUN_021583dc(0xb10009,0xb10000,*(undefined4 *)(iVar2 + 0x88),&DAT_0216169c,puVar1[1],0x82);
  if ((DAT_020b0b90 & 0x10) == 0) {
    iVar2 = FUN_0203b404();
    FUN_021583dc(0xb1000a,0xb10000,*(undefined4 *)(iVar2 + 0x88),&DAT_0216169c,puVar1[1],0x81);
    iVar2 = FUN_0203b404();
    FUN_021583dc(0xb1000b,0xb10000,*(undefined4 *)(iVar2 + 0x88),&DAT_0216169c,puVar1[1],0x81);
    iVar2 = FUN_0203b404();
    FUN_021583dc(0xb1000c,0xb10000,*(undefined4 *)(iVar2 + 0x88),&DAT_0216169c,puVar1[1],0x81);
  }
  if ((DAT_020b0b90 & 0x20) == 0) {
    iVar2 = FUN_0203b404();
    FUN_021583dc(0xb1000d,0xb10000,*(undefined4 *)(iVar2 + 0x88),&DAT_0216169c,puVar1[1],0x81);
  }
  iVar2 = jus_AllocDebug(0xcc,s_ALWidget_inl_02161154,s_Create_02161684,0x1de);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)func_0x021af26c(iVar2,FUN_0215a9a0,FUN_0215aa18,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  piVar3 = (int *)piVar3[6];
  func_0x021b3b7c(2,0,piVar3,0);
  iVar2 = (**(code **)(*(int *)piVar3[1] + 0xb0))((int *)piVar3[1],0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0214ed84();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar6 = *(int **)(iVar2 + 0x2c);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar6[6] == 0) {
    (**(code **)(*piVar6 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar6[6],0x11,0xf,5,0x80);
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  puVar1[9] = iVar2;
  (**(code **)(*piVar3 + 8))();
  _DAT_021d5154 = 2;
  iVar2 = ALWidgetBaseImp::Create(0);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  local_50 = 0xa1000;
  FUN_0214eed0(iVar2,&local_50);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  piVar3 = *(int **)(iVar2 + 4);
  uVar4 = FUN_020326b0(s_Position_02161720);
  uVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,s_Position_02161720,&local_2c,uVar4);
  FUN_0202c4a4(&local_58,uVar4,local_2c);
  local_48 = 0;
  local_4c = 0x100000;
  FUN_0214f418(iVar2,&local_4c,&local_48);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,0,local_54);
  local_40 = 0;
  local_44 = 0;
  FUN_0214f418(iVar2,&local_44,&local_40);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,8,local_54);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_58,0x494c,local_54);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  local_38 = 0;
  local_3c = 0;
  FUN_0214f418(iVar2,&local_3c,&local_38);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,0,local_54);
  local_30 = 0;
  local_34 = 0x100000;
  FUN_0214f418(iVar2,&local_34,&local_30);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,8,local_54);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_58,0x494c,local_54);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b409c(*(undefined4 *)(iVar2 + 4),2);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),0x30);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,FUN_0215ac08);
  puVar1[2] = iVar2;
  iVar2 = 0;
  do {
    iVar5 = ALWidgetImp::Create(puVar1,puVar1[2],
                                &DAT_0216169c + (uint)(byte)(&DAT_021601a8)[iVar2 * 0xc] * 0xc,
                                &DAT_0216168c + (uint)(byte)(&DAT_021601a9)[iVar2 * 0xc] * 8);
    puVar1[iVar2 + 3] = iVar5;
    func_0x021b4104(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 4),4);
    FUN_02027834(*(undefined4 *)(puVar1[iVar2 + 3] + 4),8,(&DAT_021601ac)[iVar2 * 3]);
    *(undefined4 *)(*(int *)(puVar1[iVar2 + 3] + 4) + 0xdc) = (&DAT_021601a4)[iVar2 * 3];
    *(int *)(*(int *)(puVar1[iVar2 + 3] + 4) + 0x124) = iVar2;
    local_28 = 0xa1000;
    FUN_0214eed0(puVar1[iVar2 + 3],&local_28);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  iVar2 = 0;
  do {
    if (iVar2 == 0) {
      FUN_02158158(puVar1[3],puVar1[8]);
    }
    else {
      FUN_02158158(puVar1[iVar2 + 3],puVar1[iVar2 + 2]);
    }
    if (iVar2 == 5) {
      FUN_02158194(puVar1[8],puVar1[3]);
    }
    else {
      FUN_02158194(puVar1[iVar2 + 3],puVar1[iVar2 + 4]);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  if ((DAT_020b0b90 & 0x10) == 0) {
    (**(code **)(**(int **)(puVar1[4] + 4) + 0x148))(*(int **)(puVar1[4] + 4),8);
    (**(code **)(**(int **)(puVar1[3] + 4) + 0x148))(*(int **)(puVar1[3] + 4),8);
    (**(code **)(**(int **)(puVar1[5] + 4) + 0x148))(*(int **)(puVar1[5] + 4),8);
  }
  if ((DAT_020b0b90 & 0x20) == 0) {
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x148))(*(int **)(puVar1[6] + 4),8);
  }
  iVar2 = ALWidgetImp::Create(puVar1,puVar1[2],&DAT_02093c8c,DAT_02093bf4);
  FUN_02023820(*(undefined4 *)(iVar2 + 4),0);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar2 + 4),0x20);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,FUN_0215b008);
  piVar3 = *(int **)(puVar1[1] + 4);
  if (puVar1[2] == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(puVar1[2] + 4));
  }
  _DAT_021d5154 = 0;
  uVar4 = func_0x021ba49c(0,3,1);
  puVar1[10] = uVar4;
  func_0x021bad80(uVar4,0);
  func_0x021b65d8(*(undefined4 *)(puVar1[2] + 4));
  return puVar1;
}

