
void FUN_02179648(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)param_2[1] + 0x2c);
  iVar1 = (*pcVar2)((int *)param_2[1],0,param_3,pcVar2,param_4);
  (**(code **)(*param_2 + 0x10))();
  FUN_02051890(param_3 * 0x30 + iVar1,param_1);
  return;
}

