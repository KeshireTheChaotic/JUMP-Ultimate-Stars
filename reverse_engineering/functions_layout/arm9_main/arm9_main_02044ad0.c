
void FUN_02044ad0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 100))();
  uVar2 = (**(code **)(*param_2 + 100))();
  (**(code **)(*piVar1 + 0x14))(piVar1,uVar2);
  (**(code **)(*param_2 + 0xc))();
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar4 = (*(int **)(param_1 + 0x20))[3];
  iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  DC_FlushRange(iVar4,(uint)*(ushort *)(param_1 + 0x2c) * (uint)*(ushort *)(param_1 + 0x2e) * iVar3
                      >> 3);
  if (*(int **)(param_1 + 0x6c) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

