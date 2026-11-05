
void FUN_0216cb80(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  iVar1 = FUN_0203b3e4();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x810000,0xd,0x68,7,0x5f);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_021506ec(param_1,iVar1);
  local_10 = 0x5f000;
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_10);
  return;
}

