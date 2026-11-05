
/* JUS-GAME JQuizMainAnswerDisp::JQuizMainAnswerDispClass_Create [source-string]
   __FILE__="JQuizMainAnswerDisp.cpp" __FUNCTION__="JQuizMainAnswerDispClass_Create" lines=[69]
   passed to 1 source-location call(s) */

int * JQuizMainAnswerDisp::JQuizMainAnswerDispClass_Create(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_50;
  int local_4c [3];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34 [3];
  undefined4 local_28;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x14,s_JQuizMainAnswerDisp_cpp_02161bf8,
                                     s_JQuizMainAnswerDispClass_Create_02161bd8,0x45);
  FUN_020517fc(piVar1,0,0x14);
  iVar2 = ALWidgetBaseImp::Create(piVar1,param_1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  piVar1[1] = iVar2;
  iVar5 = 0;
  do {
    iVar6 = (&DAT_021605a8)[iVar5];
    local_4c[1] = 0x58;
    local_4c[0] = iVar6;
    iVar3 = FUN_0203b404();
    iVar3 = FUN_0214ee60(iVar2,*(undefined4 *)(iVar3 + 0x88),0x818000,iVar5,0x6e,local_4c);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
    piVar1[iVar5 + 2] = iVar3;
    FUN_02023940(*(undefined4 *)(iVar3 + 4));
    FUN_02151ebc(local_4c + 2,iVar3,s_Position_02161c10);
    FUN_02151ebc(&local_3c,iVar3,&DAT_02161c1c);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_3c,0,local_38);
    piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
    (**(code **)(*piVar4 + 0xac))(piVar4,0);
    FUN_02023c70(*(undefined4 *)(iVar3 + 4),0);
    FUN_020239a0(*(undefined4 *)(iVar3 + 4));
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    local_34[0] = iVar6 << 0xc;
    local_34[1] = 0x58000;
    FUN_0214e1b8(iVar3,local_34,local_34 + 1);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_3c,0,local_38);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_4c[2],0,local_40);
    local_28 = 0x58000;
    local_34[2] = (&DAT_021605b0)[iVar5] << 0xc;
    FUN_0214e1b8(iVar3,local_34 + 2,&local_28);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_4c[2],8,local_40);
    FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_4c[2],0x44,local_40);
    piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
    (**(code **)(*piVar4 + 0xac))(piVar4,0);
    FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_4c[2],0x494c,local_40);
    FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),0,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  *(undefined1 *)(piVar1 + 4) = 1;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  local_50 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_50);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_0215e9fc);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  return piVar1;
}

