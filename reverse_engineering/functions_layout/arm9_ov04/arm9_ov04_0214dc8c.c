
void FUN_0214dc8c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uStack00000000;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x88) + 4);
  (**(code **)(*piVar1 + 0x90))(piVar1,0x8000);
  iVar2 = FUN_0203b424(3);
  _uStack00000000 = 0x3000;
  piVar1 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar1 + 0x10))(piVar1,&uStack00000000);
  return;
}

