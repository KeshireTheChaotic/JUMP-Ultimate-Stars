
void FUN_0215c16c(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = (**(code **)(*param_2 + 8))();
  if ((iVar2 == -0x7ffef000) && (iVar2 = (**(code **)*param_2)(), iVar2 == 4)) {
    FUN_0215aaf4();
    piVar3 = *(int **)(*(int *)(iVar4 + 0x4c) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    piVar3 = *(int **)(*(int *)(iVar4 + 0x68) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    piVar3 = *(int **)(*(int *)(iVar4 + 0x6c) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + 100) + 4));
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + 0xac) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0xac) + 4),1);
    FUN_02159e60(iVar4,FUN_0215bb2c + 1);
    FUN_02159ea8(iVar4,FUN_0215c248);
    func_0x021b6760(*(undefined4 *)(*(int *)(iVar4 + 0x70) + 4),4,FUN_0215c454 + 1);
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x8c) + 4));
    uVar1 = (**(code **)(**(int **)(*(int *)(iVar4 + 0xac) + 4) + 0x194))();
    *(undefined1 *)(iVar4 + 0x312) = uVar1;
    FUN_02159790(iVar4,1);
    FUN_0215bb60(iVar4);
    FUN_0207342c(0x78,0);
  }
  return;
}

