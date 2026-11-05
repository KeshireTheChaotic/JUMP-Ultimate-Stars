
void FUN_0215e634(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x14);
  puVar4 = &DAT_02168b46;
  iVar6 = 9;
  do {
    iVar3 = 3;
    puVar5 = puVar4;
    do {
      puVar4 = puVar5 + 1;
      piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar1 + 0x60))(piVar1,iVar3,iVar6,*puVar5,0xb,0,0,param_4);
      iVar3 = iVar3 + 1;
      puVar5 = puVar4;
    } while (iVar3 < 0x1d);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xc);
  return;
}

