
/* JUS-GAME CommWrapNewComer::CommWrapNewComer_Create [source-string]
   __FILE__="CommWrapNewComer.cpp" __FUNCTION__="CommWrapNewComer_Create" lines=[229] passed to 1
   source-location call(s) */

int * CommWrapNewComer::CommWrapNewComer_Create(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
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
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x60,s_CommWrapNewComer_cpp_0216ddd4,
                                     s_CommWrapNewComer_Create_0216ddbc,0xe5);
  FUN_020517fc(piVar1,0,0x60);
  if (param_1 != 0) {
    FUN_02051890(param_1,piVar1 + 8,0x10);
  }
  piVar1[0xc] = piVar1[0xb];
  *(bool *)(piVar1 + 0xd) = piVar1[0xb] == 0;
  piVar1[2] = param_2;
  FUN_0214f7f8(param_2);
  iVar2 = func_0x021caa0c(s_font_dsfont_aft_0216ddec,0,0);
  piVar1[5] = iVar2;
  FUN_0214f834();
  (**(code **)(**(int **)(piVar1[5] + 4) + 0x18))();
  uVar3 = FUN_02158558();
  FUN_02034d94(uVar3,0);
  iVar2 = FUN_020101f4(s_Commu_challenge_3d_aar_0216ddfc,0);
  piVar1[6] = iVar2;
  iVar2 = FUN_0203b404();
  FUN_0214f7f8(*(undefined4 *)(iVar2 + 0x88));
  FUN_02035e88(0x8ff000);
  iVar2 = FUN_02158558();
  piVar1[7] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x50))(*(int **)(iVar2 + 4),1);
  (**(code **)(**(int **)(piVar1[6] + 8) + 0x50))();
  FUN_0214f834();
  FUN_0214f7f8(piVar1[2]);
  FUN_020329ec(0x8ff000);
  iVar2 = FUN_0214d37c();
  local_48 = 0x21000;
  FUN_0214e6c0(iVar2,&local_48);
  local_40 = 0x60000;
  local_44 = 0x80000;
  FUN_021511c8(iVar2,&local_44,&local_40);
  FUN_02023894(*(undefined4 *)(iVar2 + 4),0x8ff000,0);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),0x2169b59);
  piVar1[4] = iVar2;
  func_0x021c5fb4(*(undefined4 *)(piVar1[5] + 4));
  iVar2 = FUN_0214d37c();
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x1000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xfc))(*(int **)(iVar2 + 4),&local_20);
  local_3c = 0x20000;
  FUN_0214e6c0(iVar2,&local_3c);
  local_34 = 0x94000;
  local_38 = 0x49000;
  FUN_021511c8(iVar2,&local_38,&local_34);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  piVar1[3] = iVar2;
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_0214f714(&local_58,iVar2,s_Position_x_0216de14);
  FUN_0214f714(&local_50,iVar2,&DAT_0216de20);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  local_30 = 0x100000;
  FUN_0214f764(iVar2,&local_30);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,0,local_54);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_50,0,local_4c);
  local_2c = 0x49000;
  FUN_0214f764(iVar2,&local_2c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,8,local_54);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_58,0x494c,local_54);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_28 = 0x49000;
  FUN_0214f764(iVar2,&local_28);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,0,local_54);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_50,0,local_4c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,6,local_54);
  local_24 = 0xfff92000;
  FUN_0214f764(iVar2,&local_24);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_58,0x12,local_54);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_50,0x12,local_4c);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_58,0x494c,local_54);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_0214f834();
  piVar1[0x16] = 0;
  *(undefined1 *)(piVar1 + 0x17) = 0;
  iVar2 = FUN_02026f94();
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),0x2169785);
  *piVar1 = iVar2;
  DAT_0216df78 = piVar1;
  return piVar1;
}

