
/* JUS-GAME JQuizResultWinLosePlate::JQuizResultWinLosePlateClass_Create [source-string]
   __FILE__="JQuizResultWinLosePlate.cpp" __FUNCTION__="JQuizResultWinLosePlateClass_Create"
   lines=[40] passed to 1 source-location call(s) */

undefined4 *
JQuizResultWinLosePlate::JQuizResultWinLosePlateClass_Create
          (undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x14,s_JQuizResultWinLosePlate_cpp_02161418,
                              s_JQuizResultWinLosePlateClass_Cre_021613f4,0x28);
  FUN_020517fc(puVar1,0,0x14);
  *(undefined1 *)(puVar1 + 4) = param_1;
  *(undefined1 *)((int)puVar1 + 0x11) = param_2;
  iVar2 = FUN_0203b414((int)*(char *)((int)puVar1 + 0x11));
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b414((int)*(char *)((int)puVar1 + 0x11));
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b414((int)*(char *)((int)puVar1 + 0x11));
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x40,0x20);
  iVar2 = FUN_0203b414((int)*(char *)((int)puVar1 + 0x11));
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x4000);
  iVar2 = FUN_0203b414((int)*(char *)((int)puVar1 + 0x11));
  local_18 = 0x1000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_18);
  if (*(char *)(puVar1 + 4) == '\0') {
    iVar2 = FUN_0203b414((int)*(char *)((int)puVar1 + 0x11));
    uVar4 = FUN_0214e880(s_jquiz_q_loss00_atm_02161474,s_jquiz_q_loss00_dig_02161488,
                         *(undefined4 *)(iVar2 + 0x88));
    *puVar1 = uVar4;
    uVar4 = FUN_020101f4(s_jquiz_q_loss_obj_3d_aar_0216149c,0);
  }
  else {
    iVar2 = FUN_0203b414((int)*(char *)((int)puVar1 + 0x11));
    uVar4 = FUN_0214e880(s_jquiz_q_win00_atm_02161434,s_jquiz_q_win00_dig_02161448,
                         *(undefined4 *)(iVar2 + 0x88));
    *puVar1 = uVar4;
    uVar4 = FUN_020101f4(s_jquiz_q_win_obj_3d_aar_0216145c,0);
  }
  puVar1[1] = uVar4;
  return puVar1;
}

