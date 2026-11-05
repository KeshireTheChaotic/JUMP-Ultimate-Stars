
void FUN_02158674(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  if (param_2 == 0) {
    pcVar2 = *(code **)(iVar1 + 0x14c);
    (*pcVar2)(*(int **)(param_1 + 4),8,pcVar2,param_4,param_4);
    return;
  }
  (**(code **)(iVar1 + 0x148))();
  return;
}

