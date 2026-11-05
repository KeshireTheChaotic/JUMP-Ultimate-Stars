
void FUN_0215750c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  pcVar2 = *(code **)(*piVar1 + 0xb0);
  piVar1 = (int *)(*pcVar2)(piVar1,0x31305053,pcVar2,param_4,param_4);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    if (piVar1[6] == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar3 = piVar1[6];
  }
  FUN_02023894(*(undefined4 *)(iVar3 + 4),param_2 | 0x810000,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  return;
}

