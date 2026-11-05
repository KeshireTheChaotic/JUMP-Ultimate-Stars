
void FUN_0215bb2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0215ab48(iVar3);
  piVar1 = *(int **)(*(int *)(iVar3 + 0xac) + 4);
  pcVar2 = *(code **)(*piVar1 + 0x198);
  (*pcVar2)(piVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x124),0x198,pcVar2,param_4);
  FUN_0215babc(iVar3);
  FUN_0215bb60(iVar3);
  return;
}

