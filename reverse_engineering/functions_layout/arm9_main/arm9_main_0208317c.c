
void FUN_0208317c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  for (puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x10);
      puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    iVar1 = puVar3[2];
    iVar2 = *(int *)(iVar1 + 0x10);
    if (*(int *)(iVar1 + 8) != 0) {
      piVar4 = *(int **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 0x50);
      piVar4[3] = *(int *)(iVar1 + 0xc) << 4;
      piVar4[4] = iVar2 << 4;
      piVar4[5] = 0;
      if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
        (**(code **)(*piVar4 + 0x18))();
      }
      *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
    }
  }
  return;
}

