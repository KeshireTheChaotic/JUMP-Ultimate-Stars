
void FUN_021638a4(int *param_1)

{
  int *piVar1;
  
  FUN_0216378c(param_1,0x80000,0x5ffffff0);
  piVar1 = *(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,1);
  return;
}

