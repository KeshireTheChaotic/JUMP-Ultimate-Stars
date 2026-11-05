
void FUN_0216943c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0206c7fc(0x220007,0,0,0);
  piVar2 = *(int **)(iVar1 + 4);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xd4))(piVar2,0);
  }
  else {
    (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(iVar1 + 4));
  }
  *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) + '\x01';
  return;
}

