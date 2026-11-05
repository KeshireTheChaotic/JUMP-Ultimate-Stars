
/* JUS-GAME JQuizMainResultDisp::JQuizMainResultDispClass_Create [source-string]
   __FILE__="JQuizMainResultDisp.cpp" __FUNCTION__="JQuizMainResultDispClass_Create" lines=[79]
   passed to 1 source-location call(s) */

int * JQuizMainResultDisp::JQuizMainResultDispClass_Create(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
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
  undefined4 local_10;
  
  piVar1 = (int *)jus_AllocDebug(0x14,s_JQuizMainResultDisp_cpp_021610ec,
                                 s_JQuizMainResultDispClass_Create_021610cc,0x4f);
  FUN_020517fc(piVar1,0,0x14);
  iVar2 = ALWidgetBaseImp::Create(piVar1,param_1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  piVar1[1] = iVar2;
  local_54 = 0x80;
  local_50 = 0x58;
  iVar3 = FUN_0203b404();
  iVar2 = FUN_0214ee60(iVar2,*(undefined4 *)(iVar3 + 0x88),0x810000,0,0x6e,&local_54);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  piVar1[2] = iVar2;
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_02151ebc(&local_4c,iVar2,s_Position_02161104);
  FUN_02151ebc(&local_44,iVar2,&DAT_02161110);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,0,local_40);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,0,local_40);
  local_38 = 0x58000;
  local_3c = 0xfffc0000;
  FUN_0214e1b8(iVar2,&local_3c,&local_38);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,0,local_48);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,8,local_40);
  local_30 = 0x58000;
  local_34 = 0x80000;
  FUN_0214e1b8(iVar2,&local_34,&local_30);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,8,local_48);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_4c,0x494c,local_48);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,0,local_40);
  local_28 = 0x58000;
  local_2c = 0x80000;
  FUN_0214e1b8(iVar2,&local_2c,&local_28);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,0,local_48);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,0x3c,local_40);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,0,local_40);
  local_20 = 0x58000;
  local_24 = 0x80000;
  FUN_0214e1b8(iVar2,&local_24,&local_20);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,0,local_48);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,0x28,local_40);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),3);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,0,local_40);
  local_18 = 0x58000;
  local_1c = 0x80000;
  FUN_0214e1b8(iVar2,&local_1c,&local_18);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,0,local_48);
  local_10 = 0x58000;
  local_14 = 0x140000;
  FUN_0214e1b8(iVar2,&local_14,&local_10);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_4c,8,local_48);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_44,8,local_40);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_4c,0x494c,local_48);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),4);
  FUN_02023894(*(undefined4 *)(iVar2 + 4),0,0);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  *(undefined1 *)((int)piVar1 + 0x11) = 1;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  local_58 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_58);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),&DAT_02157580);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  return piVar1;
}

