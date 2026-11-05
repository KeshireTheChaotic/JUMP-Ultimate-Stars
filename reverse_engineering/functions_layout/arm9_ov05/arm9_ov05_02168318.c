
void FUN_02168318(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  iVar1 = FUN_0203b404();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x800000,8,0,0,0x7e);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  piVar2 = *(int **)(iVar1 + 4);
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),piVar2);
  (**(code **)(*piVar2 + 0xc))();
  local_10 = 0x7e000;
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_10);
  return;
}

