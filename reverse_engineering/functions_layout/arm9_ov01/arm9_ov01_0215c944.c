
void FUN_0215c944(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x194))();
  uVar1 = FUN_0215728c(param_1,uVar2);
  (&DAT_020afeb0)[DAT_020afe98] = uVar1;
  uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x194))();
  uVar1 = FUN_02157268(param_1,uVar2);
  (&DAT_020afeb4)[DAT_020afe98] = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x2e4) + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x311) = 0;
  FUN_0207342c(0x78);
  if (DAT_020afe98 == 0) {
    FUN_02087628();
    iVar3 = FUN_020869d0(*(undefined4 *)(param_1 + 0x2ec));
    if (iVar3 != 0) {
      FUN_02159ef4(param_1);
    }
  }
  else {
    func_0x021b3f78(*(undefined4 *)(*(int *)(param_1 + 0x90) + 4),0x880062);
    func_0x021b3fb0(*(undefined4 *)(*(int *)(param_1 + 0x90) + 4),0x880062);
    func_0x021b3fc4(*(undefined4 *)(*(int *)(param_1 + 0x90) + 4),0x880062);
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x60) + 4));
    FUN_02169660(*(undefined4 *)(param_1 + 0x2f0),1);
    FUN_020876ac();
    FUN_0208712c();
    FUN_02164c78(*(undefined4 *)(param_1 + 0x2e0),0);
    func_0x021bac28(*(undefined4 *)(param_1 + 0x2d8),0x4b,0,0,0,0,0,0);
  }
  return;
}

