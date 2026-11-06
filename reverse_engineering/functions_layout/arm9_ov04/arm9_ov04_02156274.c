
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizMainQuizNoDisp::JQuizMainQuizNoDispClass_Create [source-string]
   __FILE__="JQuizMainQuizNoDisp.cpp" __FUNCTION__="JQuizMainQuizNoDispClass_Create" lines=[62, 120]
   passed to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

int * JQuizMainQuizNoDisp::JQuizMainQuizNoDispClass_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar2 = (int *)thunk_FUN_0201a228(0x20,s_JQuizMainQuizNoDisp_cpp_021610a0,&DAT_02161080,0x78);
  FUN_020517fc(piVar2,0,0x20);
  iVar3 = JQuizMainQuizNoSmall::JQuizMainQuizNoSmallClass_Create(param_1);
  piVar2[6] = iVar3;
  iVar3 = JQuizMainBlackBelt::JQuizMainBlackBeltClass_Create(param_1);
  piVar2[7] = iVar3;
  uVar1 = _DAT_021d5154;
  uVar6 = *(undefined4 *)(param_1 + 4);
  iVar3 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_021608d4,s_Create_02161078,0x3e);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)func_0x021af0f8(iVar3,uVar6,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar3 = piVar4[6];
  piVar2[1] = iVar3;
  local_2c = 0x6e000;
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_2c);
  iVar7 = 0;
  do {
    iVar5 = FUN_0203b404();
    iVar5 = FUN_0214e9f0(*(undefined4 *)(iVar5 + 0x88),0x810000,3,0x6e);
    piVar2[iVar7 + 2] = iVar5;
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
    piVar4 = *(int **)(piVar2[iVar7 + 2] + 4);
    (**(code **)(**(int **)(iVar3 + 4) + 0xb4))(*(int **)(iVar3 + 4),piVar4);
    (**(code **)(*piVar4 + 0xc))();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  FUN_02151ebc(&local_6c,iVar3,s_Position_021610b8);
  FUN_02151ebc(&local_64,iVar3,&DAT_021610c4);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,0,local_60);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),0);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,0,local_60);
  local_58 = 0x60000;
  local_5c = 0xfffb0000;
  FUN_0214e1b8(iVar3,&local_5c,&local_58);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,0,local_68);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,8,local_60);
  local_50 = 0x60000;
  local_54 = 0x80000;
  FUN_0214e1b8(iVar3,&local_54,&local_50);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,8,local_68);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_6c,0x494c,local_68);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,0,local_60);
  local_48 = 0x60000;
  local_4c = 0x80000;
  FUN_0214e1b8(iVar3,&local_4c,&local_48);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,0,local_68);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,0x30,local_60);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,0x30,local_68);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),2);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,0,local_60);
  local_40 = 0x60000;
  local_44 = 0x80000;
  FUN_0214e1b8(iVar3,&local_44,&local_40);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,0,local_68);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,0x30,local_60);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,0x30,local_68);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),3);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,0,local_60);
  local_38 = 0x60000;
  local_3c = 0x80000;
  FUN_0214e1b8(iVar3,&local_3c,&local_38);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,0,local_68);
  local_30 = 0x60000;
  local_34 = 0x150000;
  FUN_0214e1b8(iVar3,&local_34,&local_30);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_6c,8,local_68);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_64,8,local_60);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_6c,0x494c,local_68);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),4);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),0,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  iVar3 = FUN_02026f94();
  *piVar2 = iVar3;
  local_70 = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_70);
  FUN_02028384(*(undefined4 *)(*piVar2 + 4),FUN_02156bb8);
  (**(code **)(**(int **)(*piVar2 + 4) + 0x24))(*(int **)(*piVar2 + 4),piVar2);
  *(undefined1 *)((int)piVar2 + 0x16) = 1;
  return piVar2;
}

