
/* JUS-GAME JQuizCommonTime::JQuizCommonTimeClass_Create [source-string]
   __FILE__="JQuizCommonTime.cpp" __FUNCTION__="JQuizCommonTimeClass_Create" lines=[76] passed to 1
   source-location call(s) */

int JQuizCommonTime::JQuizCommonTimeClass_Create
              (int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
              undefined4 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
              undefined4 param_10)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_28;
  
  local_28 = param_4;
  iVar3 = thunk_FUN_0201a228(0x4c,s_JQuizCommonTime_cpp_02160b54,FUN_02160b38,0x4c);
  FUN_020517fc(iVar3,0,0x4c);
  *(undefined4 *)(iVar3 + 0x3c) = param_3;
  *(int *)(iVar3 + 0x40) = param_4;
  *(undefined4 *)(iVar3 + 0x44) = param_5;
  iVar7 = 0;
  *(undefined4 *)(iVar3 + 0x48) = param_6;
  *(undefined4 *)(iVar3 + 0x34) = param_10;
  *(undefined2 *)(iVar3 + 0x28) = param_7;
  *(undefined2 *)(iVar3 + 0x2a) = param_8;
  *(undefined2 *)(iVar3 + 0x2c) = param_9;
  *(int *)(iVar3 + 4) = param_1;
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar2 = *(undefined4 *)(param_2 + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar2;
  uVar6 = *(uint *)(iVar3 + 0x44);
  if ((int)uVar6 < 0) {
    uVar6 = *(uint *)(iVar3 + 0x40);
  }
  do {
    FUN_020329ec(*(undefined4 *)(iVar3 + 0x3c));
    iVar4 = FUN_0214e3ec();
    *(int *)(iVar3 + iVar7 * 4 + 8) = iVar4;
    local_28 = *(int *)(iVar3 + 0x34) << 0xc;
    piVar5 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar5 + 0x10))(piVar5,&local_28);
    if (iVar7 == 2 || iVar7 == 5) {
      FUN_02023894(*(undefined4 *)(iVar4 + 4),*(uint *)(iVar3 + 0x3c) | *(uint *)(iVar3 + 0x48),0);
    }
    else {
      FUN_02023894(*(undefined4 *)(iVar4 + 4),*(uint *)(iVar3 + 0x3c) | uVar6,0);
    }
    (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    piVar5 = *(int **)(iVar4 + 4);
    (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),piVar5);
    (**(code **)(*piVar5 + 0xc))();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  FUN_02150d9c(iVar3,0,0);
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return iVar3;
}

