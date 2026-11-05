
/* JUS-GAME JQuizMainTimeGaugeBG::JQuizMainTimeGaugeBGClass_Create [source-string]
   __FILE__="JQuizMainTimeGaugeBG.cpp" __FUNCTION__="JQuizMainTimeGaugeBGClass_Create" lines=[37]
   passed to 1 source-location call(s) */

int * JQuizMainTimeGaugeBG::JQuizMainTimeGaugeBGClass_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)jus_AllocDebug(4,s_JQuizMainTimeGaugeBG_cpp_02160f30,
                                 s_JQuizMainTimeGaugeBGClass_Create_02160f0c,0x25,param_4);
  FUN_020517fc(piVar1,0,4);
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 100) + 0x20);
  if (piVar3[0xe] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  iVar2 = FUN_02034db8(piVar3[0xe]);
  piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 4) + 100))();
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar3[6],0xcf,1,5,0x80);
  *piVar1 = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0x7fff;
  *(undefined2 *)(iVar2 + 0x16) = 0x7fff;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 3;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  FUN_02154f40(*piVar1,0);
  return piVar1;
}

