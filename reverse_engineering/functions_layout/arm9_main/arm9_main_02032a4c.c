
int FUN_02032a4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = (*DAT_020a0db4)();
  pcVar2 = *(code **)(**(int **)(iVar1 + 100) + 0x50);
  (*pcVar2)(*(int **)(iVar1 + 100),param_1,0,pcVar2,param_4);
  return iVar1;
}

