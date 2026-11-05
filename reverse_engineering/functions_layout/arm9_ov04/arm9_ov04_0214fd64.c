
/* JUS-GAME JQuizCommonScore::JQuizCommonScoreClass_Create [source-string]
   __FILE__="JQuizCommonScore.cpp" __FUNCTION__="JQuizCommonScoreClass_Create" lines=[84, 99, 102,
   105, 108] passed to 5 source-location call(s) */

int * JQuizCommonScore::JQuizCommonScoreClass_Create
                (int param_1,int param_2,undefined1 param_3,int param_4,int param_5,short param_6,
                short param_7,int param_8)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iStack_28 = param_4;
  piVar2 = (int *)jus_AllocDebug(0x44,s_JQuizCommonScore_cpp_02160b20,
                                 s_JQuizCommonScoreClass_Create_02160b00,0x54);
  FUN_020517fc(piVar2,0,0x44);
  *(undefined1 *)(piVar2 + 6) = param_3;
  piVar2[0xe] = param_4;
  piVar2[0xf] = param_5;
  piVar2[0x10] = -1;
  *(short *)(piVar2 + 7) = param_6;
  *(short *)((int)piVar2 + 0x1e) = param_7;
  piVar2[9] = param_8;
  if (piVar2 != (int *)0x0) {
    piVar2[0xd] = 10;
  }
  *(char *)((int)piVar2 + 0x19) = (char)piVar2[6] * '\x02' + '\x01';
  iVar3 = jus_AllocDebug((int)*(char *)((int)piVar2 + 0x19) << 2,s_JQuizCommonScore_cpp_02160b20,
                         s_JQuizCommonScoreClass_Create_02160b00,99);
  piVar2[2] = iVar3;
  FUN_020517fc(iVar3,0,(int)*(char *)((int)piVar2 + 0x19) << 2);
  iVar3 = jus_AllocDebug((int)(char)piVar2[6],s_JQuizCommonScore_cpp_02160b20,
                         s_JQuizCommonScoreClass_Create_02160b00,0x66);
  piVar2[3] = iVar3;
  FUN_020517fc(iVar3,0,(int)(char)piVar2[6]);
  iVar3 = jus_AllocDebug((int)(char)piVar2[6],s_JQuizCommonScore_cpp_02160b20,
                         s_JQuizCommonScoreClass_Create_02160b00,0x69);
  piVar2[4] = iVar3;
  FUN_020517fc(iVar3,0,(int)(char)piVar2[6]);
  iVar3 = jus_AllocDebug((int)*(char *)((int)piVar2 + 0x19) << 2,s_JQuizCommonScore_cpp_02160b20,
                         s_JQuizCommonScoreClass_Create_02160b00,0x6c);
  piVar2[5] = iVar3;
  FUN_020517fc(iVar3,0,(int)*(char *)((int)piVar2 + 0x19) << 2);
  piVar2[1] = param_1;
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar1 = *(undefined4 *)(param_2 + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar1;
  iVar3 = 0;
  if ('\0' < (char)piVar2[6]) {
    for (; iVar3 < (char)piVar2[6]; iVar3 = iVar3 + 1) {
      iVar5 = 0;
      do {
        FUN_020329ec(piVar2[0xe]);
        iVar4 = FUN_0214e3ec();
        *(int *)(piVar2[2] + iVar3 * 8 + iVar5 * 4) = iVar4;
        (**(code **)(**(int **)(iVar4 + 4) + 0x24))
                  (*(int **)(iVar4 + 4),piVar2[5] + (iVar5 + iVar3 * 2) * 2);
        FUN_02150308(piVar2,iVar4,-(param_6 * iVar3 + (int)param_6 / 2),
                     param_7 * iVar5 - (int)param_7 / 2);
        local_2c = piVar2[9] << 0xc;
        FUN_0214ea78(iVar4,&local_2c);
        FUN_02023894(*(undefined4 *)(iVar4 + 4),piVar2[0xe] | piVar2[0xf],0);
        (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
        (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
        FUN_0214e478(param_1,iVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
  }
  FUN_020329ec(piVar2[0xe]);
  iVar3 = FUN_0214e3ec();
  *(int *)(piVar2[2] + (char)piVar2[6] * 8) = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),piVar2[5] + (char)piVar2[6] * 4);
  FUN_02150308(piVar2,iVar3,0,0);
  local_30 = piVar2[9] << 0xc;
  FUN_0214ea78(iVar3,&local_30);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  FUN_0214e478(param_1,iVar3);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  iVar3 = FUN_02026f94();
  *piVar2 = iVar3;
  local_34 = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_34);
  FUN_02028384(*(undefined4 *)(*piVar2 + 4),&DAT_02150ad4);
  (**(code **)(**(int **)(*piVar2 + 4) + 0x24))(*(int **)(*piVar2 + 4),piVar2);
  return piVar2;
}

