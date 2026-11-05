
void FUN_0214f1b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG source_file_inferred="JQuizCommonWork.cpp" */
  iVar1 = DAT_02161de8;
  if (*(int *)(DAT_02161de8 + 8) != 0) {
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar3;
  uVar3 = func_0x021caa0c(s_font_dsfont_aft_02160ae8,0,0,&DAT_020a0dd0,param_4);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(DAT_02161de8 + 8) + 4) + 0x18))();
  if (piVar2[0xe] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  FUN_02034d94(piVar2[0xe],0);
  return;
}

