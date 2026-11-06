
/* JUS-GAME JQuizStartSinglePlay::JQuizStartCore_Add [source-string]
   __FILE__="JQuizStartSinglePlay.cpp" __FUNCTION__="JQuizStartCore_Add" lines=[99] passed to 1
   source-location call(s) */

undefined4 JQuizStartSinglePlay::JQuizStartCore_Add(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0xd8,s_JQuizStartSinglePlay_cpp_02160d44,&DAT_02160d30,99);
  FUN_0214fadc(puVar1,0xd8);
  FUN_0214fc90();
  FUN_02051890(param_1,puVar1 + 0x31,0x14);
  FUN_0214d98c();
  iVar2 = FUN_0203b424(3);
  uVar3 = JQuizCommon::JQuizCmn_BaseBG_Create(*(undefined4 *)(iVar2 + 0x88));
  puVar1[2] = uVar3;
  uVar3 = FUN_0214e4b0();
  puVar1[0x11] = uVar3;
  uVar3 = FUN_020101f4(s_Common_button_aar_02160d60,0);
  puVar1[9] = uVar3;
  uVar3 = FUN_020101f4(s_jquiz_dir_obj_2d_aar_02160d74,0);
  puVar1[10] = uVar3;
  iVar2 = FUN_0203b3f4();
  iVar2 = FUN_0214e6fc(puVar1[2],*(undefined4 *)(iVar2 + 0x88));
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),8,FUN_02152e04);
  func_0x021b4104(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 4),4);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = 2;
  puVar1[0x1b] = iVar2;
  iVar2 = FUN_0203b3f4();
  uVar5 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0203b424(2);
  uVar6 = *(undefined4 *)(iVar2 + 0x88);
  uVar3 = FUN_0214e4b0(puVar1[2]);
  uVar3 = JQuizStartBackPlate::JQuizStartBackPlateClass_Create(puVar1[0x32],uVar6,uVar5,uVar3);
  puVar1[0x2d] = uVar3;
  FUN_0202c498(&local_68);
  FUN_0202c498(&local_60);
  local_70 = 0xa8;
  local_6c = 0x44;
  iVar2 = FUN_0203b3f4();
  iVar2 = FUN_0214ee60(puVar1[0x11],*(undefined4 *)(iVar2 + 0x88),0x820000,5,0xa0,&local_70);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_02151ebc(&local_58,iVar2,s_Position_02160d8c);
  local_68 = local_58;
  local_64 = local_54;
  FUN_02151ebc(&local_50,iVar2,&DAT_02160d98);
  local_60 = local_50;
  local_5c = local_4c;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  local_48 = 0x148000;
  local_44 = local_6c << 0xc;
  FUN_0214e1b8(iVar2,&local_48,&local_44);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_60,0,local_5c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_68,0,local_64);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_60,8,local_5c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_68,8,local_64);
  local_3c = local_6c << 0xc;
  local_40 = local_70 << 0xc;
  FUN_0214e1b8(iVar2,&local_40,&local_3c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_68,0x10,local_64);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_68,0x494c,local_64);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  puVar1[0x1c] = iVar2;
  local_70 = 0xb0;
  local_6c = 0x60;
  iVar2 = FUN_0203b3f4();
  iVar2 = FUN_0214ee60(puVar1[0x11],*(undefined4 *)(iVar2 + 0x88),0x820000,puVar1[0x33],0xa0,
                       &local_70);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_02151ebc(&local_38,iVar2,s_Position_02160d8c);
  local_68 = local_38;
  local_64 = local_34;
  FUN_02151ebc(&local_30,iVar2,&DAT_02160d98);
  local_60 = local_30;
  local_5c = local_2c;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  local_28 = 0x148000;
  local_24 = local_6c << 0xc;
  FUN_0214e1b8(iVar2,&local_28,&local_24);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_60,0,local_5c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_68,0,local_64);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_60,0x10,local_5c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_68,0x10,local_64);
  local_1c[0] = local_6c << 0xc;
  local_20 = local_70 << 0xc;
  FUN_0214e1b8(iVar2,&local_20,local_1c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_68,0x18,local_64);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_68,0x494c,local_64);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  puVar1[0x1d] = iVar2;
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_02152e68);
  uVar3 = func_0x021bcf1c(0x14,2,0,0xffffffff);
  puVar1[0x2c] = uVar3;
  func_0x021bd730(uVar3,puVar1[0x34],0);
  uVar3 = FUN_02026f94();
  puVar1[1] = uVar3;
  local_1c[2] = 0x80000;
  FUN_02152ca0(puVar1[1],local_1c + 2);
  FUN_02028384(*(undefined4 *)(puVar1[1] + 4),FUN_02152e6c);
  (**(code **)(**(int **)(puVar1[1] + 4) + 0x24))(*(int **)(puVar1[1] + 4),puVar1);
  uVar3 = FUN_02026f94();
  puVar1[0x2e] = uVar3;
  local_1c[1] = 0x80000;
  FUN_02152ca0(puVar1[0x2e],local_1c + 1);
  (**(code **)(**(int **)(puVar1[0x2e] + 4) + 0x24))(*(int **)(puVar1[0x2e] + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[0x2e] + 4),FUN_02152f0c);
  FUN_02027834(*(undefined4 *)(puVar1[0x2e] + 4),8,FUN_02152f70);
  if (*(char *)(puVar1 + 0x35) != '\0') {
    FUN_02086cac(puVar1[0x2e]);
  }
  FUN_020736e4(0x38,0);
  FUN_02073ebc(2,1);
  return *puVar1;
}

