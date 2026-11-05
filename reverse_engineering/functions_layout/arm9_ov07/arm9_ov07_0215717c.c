
void FUN_0215717c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar4 + 0x70);
  pcVar3 = *(code **)(iVar1 + 0x30);
  if ((pcVar3 == (code *)0x0) || (iVar1 = (*pcVar3)(*(undefined4 *)(iVar1 + 0x10)), iVar1 == 0)) {
    piVar2 = *(int **)(*(int *)(iVar4 + 0x30) + 4);
    pcVar3 = *(code **)(*piVar2 + 0x148);
    (*pcVar3)(piVar2,0x10,0x148,pcVar3,param_4);
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21571b5);
  }
  return;
}

