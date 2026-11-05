
void FUN_021514e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (*(int **)(param_1 + 4))[4];
  sVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
  (**(code **)(iVar2 + 0x2c))(iVar2,*(undefined4 *)(iVar2 + 0x30),1,(int)sVar1,0,param_4);
  return;
}

