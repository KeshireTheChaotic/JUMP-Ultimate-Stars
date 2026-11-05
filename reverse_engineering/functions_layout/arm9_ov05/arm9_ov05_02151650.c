
void FUN_02151650(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (param_2 == 2) {
    sVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x68) + 4) + 0x194))();
    (**(code **)(iVar2 + 0x2c))(iVar2,*(undefined4 *)(iVar2 + 0x30),1,(int)sVar1,0,param_4);
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4));
  }
  return;
}

