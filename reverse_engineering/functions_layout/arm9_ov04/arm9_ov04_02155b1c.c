
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizMainQuizNoSmall::JQuizMainQuizNoSmallClass_Create [source-string]
   __FILE__="JQuizMainQuizNoSmall.cpp" __FUNCTION__="JQuizMainQuizNoSmallClass_Create" lines=[62,
   96] passed to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

int * JQuizMainQuizNoSmall::JQuizMainQuizNoSmallClass_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  piVar2 = (int *)thunk_FUN_0201a228(0x1c,s_JQuizMainQuizNoSmall_cpp_02161048,
                                     s_JQuizMainQuizNoSmallClass_Create_02161024,0x60);
  FUN_020517fc(piVar2,0,0x1c);
  local_5c = 0;
  local_58 = 0xd;
  iVar3 = FUN_0203b404();
  iVar3 = FUN_0214ee60(param_1,*(undefined4 *)(iVar3 + 0x88),0x810000,0x38,0x76,&local_5c);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  uVar1 = _DAT_021d5154;
  uVar6 = *(undefined4 *)(param_1 + 4);
  iVar3 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_021608d4,s_Create_0216101c,0x3e);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)func_0x021af0f8(iVar3,uVar6,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar3 = piVar4[6];
  piVar2[2] = iVar3;
  local_2c = 0x74000;
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_2c);
  iVar7 = 0;
  do {
    iVar5 = FUN_0203b404();
    iVar5 = FUN_0214e9f0(*(undefined4 *)(iVar5 + 0x88),0x810000,0x26,0x74);
    piVar2[iVar7 + 3] = iVar5;
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
    piVar4 = *(int **)(piVar2[iVar7 + 3] + 4);
    (**(code **)(**(int **)(iVar3 + 4) + 0xb4))(*(int **)(iVar3 + 4),piVar4);
    (**(code **)(*piVar4 + 0xc))();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  FUN_02151ebc(&local_54,iVar3,s_Position_02161064);
  FUN_02151ebc(&local_4c,iVar3,&DAT_02161070);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_4c,0,local_48);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),0);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_4c,0,local_48);
  local_40 = 0xd000;
  local_44 = 0xfffc8000;
  FUN_0214e1b8(iVar3,&local_44,&local_40);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_54,0,local_50);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_4c,0,local_48);
  local_38 = 0xd000;
  local_3c = 0x24000;
  FUN_0214e1b8(iVar3,&local_3c,&local_38);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_54,0,local_50);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_54,0x494c,local_50);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar3 + 4));
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_4c,0,local_48);
  local_30 = 0xd000;
  local_34 = 0x24000;
  FUN_0214e1b8(iVar3,&local_34,&local_30);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_54,0,local_50);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),2);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),0,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  *(undefined1 *)(piVar2 + 6) = 0xff;
  *(undefined1 *)((int)piVar2 + 0x19) = 0;
  iVar3 = FUN_02026f94();
  *piVar2 = iVar3;
  local_60 = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_60);
  FUN_02028384(*(undefined4 *)(*piVar2 + 4),FUN_021561a0);
  (**(code **)(**(int **)(*piVar2 + 4) + 0x24))(*(int **)(*piVar2 + 4),piVar2);
  return piVar2;
}

