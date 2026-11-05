
void FUN_0215201c(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_2 & 2) != 0) {
    *param_3 = *(undefined4 *)(iVar2 + 0x68);
    sVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x68) + 4) + 0x194))();
    (**(code **)(iVar2 + 0x2c))(iVar2,*(undefined4 *)(iVar2 + 0x30),1,(int)sVar1,0,param_4);
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4));
    FUN_0207342c(0x78,3);
  }
  return;
}

