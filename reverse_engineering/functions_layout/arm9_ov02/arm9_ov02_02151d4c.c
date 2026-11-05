
int FUN_02151d4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = jus_AllocDebug(0x78,s_ALNodeImp_h_0215bfa4,s_Create_0215c1a8,0x4c3);
  if (iVar1 != 0) {
    jus_Class_0209c0b4::jus_Class_0209c0b4(iVar1,FUN_02024a30,1);
  }
  iVar1 = FUN_0214d498();
  local_24 = 0x60000;
  local_20 = 0x80000;
  FUN_0214d4c0(iVar1,&local_20,&local_24);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0215460c);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  local_28 = 0x81000;
  FUN_02152008(iVar1,&local_28);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  iVar2 = jus_AllocDebug(0x78,s_ALNodeImp_h_0215bfa4,s_Create_0215c1a8,0x4c3);
  if (iVar2 != 0) {
    jus_Class_0209c0b4::jus_Class_0209c0b4(iVar2,FUN_02024a30,1);
  }
  iVar2 = FUN_0214d498();
  FUN_0214d678(iVar2,iVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar3 = jus_AllocDebug(0x78,s_ALNodeImp_h_0215bfa4,s_Create_0215c1a8,0x4c3);
  if (iVar3 != 0) {
    jus_Class_0209c0b4::jus_Class_0209c0b4(iVar3,FUN_02024a30,1);
  }
  iVar3 = FUN_0214d498();
  FUN_0214d678(iVar3,iVar2);
  FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_021548f0);
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
  local_2c = 0x82000;
  FUN_02152008(iVar3,&local_2c);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_0214ef10(&local_34,iVar3,s_Scale_0215c314);
  iVar4 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0215c008,s_Create_0215c198,0x2ef);
  if (iVar4 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar4,0,local_34,local_30,0x494c,&DAT_02093c98,8,0,0);
  }
  uVar5 = FUN_0214f194();
  FUN_02020f38(iVar3,uVar5);
  FUN_0214ef10(&local_3c,iVar2,s_Position_0215c31c);
  iVar4 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0215c008,s_Create_0215c198,0x2ef);
  if (iVar4 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar4,0,local_3c,local_38,0x494c,&DAT_02093c8c,8,0,0);
  }
  uVar5 = FUN_0214f194();
  FUN_02020f38(iVar2,uVar5);
  FUN_0214d6b0(iVar1,iVar2);
  FUN_0214d6b0(iVar2,iVar3);
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}

