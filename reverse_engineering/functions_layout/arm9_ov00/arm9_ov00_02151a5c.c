
void FUN_02151a5c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 4) + 0x128))();
  iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 0x50);
  iVar3 = *(int *)(iVar1 + 0x10);
  iVar1 = *(int *)(iVar1 + 0xc);
  FUN_021518c4(iVar2,(int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc,
               (int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc);
  return;
}

