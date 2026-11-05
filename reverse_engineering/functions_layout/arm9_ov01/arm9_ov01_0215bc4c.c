
void FUN_0215bc4c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) {
    *(undefined1 *)(iVar3 + 0x311) = 2;
    uVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xac) + 4) + 0x194))();
    DAT_020afeb0 = FUN_0215728c(iVar3,uVar2);
    uVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xac) + 4) + 0x194))();
    DAT_020afeb4 = FUN_02157268(iVar3,uVar2);
    FUN_0207342c(0x78,0);
    FUN_02159ef4(iVar3);
  }
  return;
}

