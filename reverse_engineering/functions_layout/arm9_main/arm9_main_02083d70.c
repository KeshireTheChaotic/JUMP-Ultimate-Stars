
void FUN_02083d70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24);
  do {
    if (((iVar2 != 4 && iVar2 != 6) && iVar2 != 7) && iVar2 != 8) {
      puVar3 = (undefined4 *)*puVar4;
      while (puVar3 != (undefined4 *)0x0) {
        iVar1 = puVar3[2];
        puVar3 = (undefined4 *)*puVar3;
        if ((*(uint *)(*(int *)(iVar1 + 0x10) + 0x40) & 0x200) != 0) {
          *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 8;
        }
      }
    }
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar2 < 10);
  FUN_02083de0();
  return;
}

