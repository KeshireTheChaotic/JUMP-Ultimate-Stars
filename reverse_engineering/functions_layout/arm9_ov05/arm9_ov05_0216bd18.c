
void FUN_0216bd18(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_10;
  
  iVar1 = FUN_0203b3e4();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x800000,param_2,0,0,0x1f);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  piVar2 = *(int **)(iVar1 + 4);
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),piVar2);
  (**(code **)(*piVar2 + 0xc))();
  uStack_10 = 0x5f000;
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar2 + 0x10))(piVar2,&uStack_10);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar1 + 0xbc) = 0;
  *(undefined2 *)(iVar1 + 0xbe) = 3;
  return;
}

