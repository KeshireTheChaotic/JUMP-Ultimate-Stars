
/* JUS-GAME JQuiz::JQuiz_Add_Core [source-string] __FILE__="JQuiz.cpp" __FUNCTION__="JQuiz_Add_Core"
   lines=[102] passed to 1 source-location call(s) */

int JQuiz::JQuiz_Add_Core(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)jus_AllocDebug(0x1c,s_JQuiz_cpp_021608b0,s_JQuiz_Add_Core_021608a0,0x66,param_4);
  FUN_020517fc(piVar1,0,0x1c);
  DAT_02161de0 = piVar1;
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0214cf9c);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  piVar1[3] = 0;
  piVar1[4] = param_1;
  piVar1[5] = param_2;
  piVar1[6] = param_3;
  JQuizCommonWork::JQuizCommonWork_Create(*piVar1);
  return *piVar1;
}

