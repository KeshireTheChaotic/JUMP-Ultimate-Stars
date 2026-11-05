
/* JUS-GAME JQuizMainTimePlate::JQuizMainTimePlateClass_Create [source-string]
   __FILE__="JQuizMainTimePlate.cpp" __FUNCTION__="JQuizMainTimePlateClass_Create" lines=[88] passed
   to 1 source-location call(s) */

int * JQuizMainTimePlate::JQuizMainTimePlateClass_Create
                (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar3 = (int *)jus_AllocDebug(0x1c,s_JQuizMainTimePlate_cpp_02160f6c,
                                 s_JQuizMainTimePlateClass_Create_02160f4c,0x58);
  FUN_020517fc(piVar3,0,0x1c);
  DAT_02093c08 = DAT_02093c08 + -1;
  pcVar6 = &DAT_02160500;
  uVar2 = *(undefined4 *)(param_2 + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar2;
  iVar5 = 0;
  do {
    piVar4 = (int *)FUN_020329ec(0x810000);
    if (piVar4[6] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    iVar8 = piVar4[6];
    local_2c = 0x74000;
    piVar4 = *(int **)(*(int *)(iVar8 + 4) + 100);
    (**(code **)(*piVar4 + 0x10))(piVar4,&local_2c);
    FUN_02023894(*(undefined4 *)(iVar8 + 4),(int)pcVar6[2] | 0x810000,0);
    (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
    cVar1 = pcVar6[1];
    piVar4 = *(int **)(*(int *)(iVar8 + 4) + 0x50);
    piVar4[3] = (*pcVar6 + 0x80) * 0x1000;
    piVar4[4] = (cVar1 + 0x17) * 0x1000;
    if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
      (**(code **)(*piVar4 + 0x18))();
    }
    *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    piVar4 = *(int **)(iVar8 + 4);
    (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),piVar4);
    (**(code **)(*piVar4 + 0xc))();
    iVar7 = iVar5 + 1;
    piVar3[iVar5 + 1] = iVar8;
    pcVar6 = pcVar6 + 3;
    iVar5 = iVar7;
  } while (iVar7 < 5);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  *(undefined2 *)(piVar3 + 6) = 0;
  *(undefined2 *)((int)piVar3 + 0x1a) = 0;
  iVar5 = FUN_02026f94();
  *piVar3 = iVar5;
  local_30 = 0x80000;
  (**(code **)(**(int **)(iVar5 + 4) + 0xa0))(*(int **)(iVar5 + 4),&local_30);
  FUN_02028384(*(undefined4 *)(*piVar3 + 4),FUN_02155294);
  (**(code **)(**(int **)(*piVar3 + 4) + 0x24))(*(int **)(*piVar3 + 4),piVar3);
  return piVar3;
}

