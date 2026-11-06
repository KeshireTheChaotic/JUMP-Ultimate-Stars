
/* JUS-GAME JQuizMainSubPlayerMark::JQuizMainSubPlayerMarkClass_Create [source-string]
   __FILE__="JQuizMainSubPlayerMark.cpp" __FUNCTION__="JQuizMainSubPlayerMarkClass_Create"
   lines=[43] passed to 1 source-location call(s) */

int * JQuizMainSubPlayerMark::JQuizMainSubPlayerMarkClass_Create
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x20,&DAT_02161c48,s_JQuizMainSubPlayerMarkClass_Crea_02161c24,
                                     0x2b,param_4);
  FUN_020517fc(piVar1,0,0x20);
  iVar2 = ALWidgetBaseImp::Create(piVar1,param_1);
  *piVar1 = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar4 = 0;
  do {
    iVar3 = FUN_0203b3f4();
    iVar3 = FUN_0214e9f0(*(undefined4 *)(iVar3 + 0x88),0x820000,3,0x20);
    piVar5 = *(int **)(iVar3 + 4);
    (**(code **)(**(int **)(iVar2 + 4) + 0xb4))(*(int **)(iVar2 + 4),piVar5);
    (**(code **)(*piVar5 + 0xc))();
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
    piVar1[iVar4 + 1] = iVar3;
    iVar3 = iVar4 + 1;
    *(undefined1 *)((int)piVar1 + iVar4 + 0x14) = 0xff;
    iVar4 = iVar3;
  } while (iVar3 < 4);
  *(undefined1 *)(piVar1 + 7) = 0;
  return piVar1;
}

