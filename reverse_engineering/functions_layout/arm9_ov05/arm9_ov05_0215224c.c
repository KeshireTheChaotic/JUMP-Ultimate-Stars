
void FUN_0215224c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = &DAT_0216f6bc;
  do {
    iVar2 = param_1 + iVar4;
    if (*(char *)(iVar2 + 0x54c) != '\0') {
      *(undefined1 *)(iVar2 + 0x54c) = 0;
      iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x94);
      if (*(char *)(iVar2 + 0x546) == '\0') {
        func_0x021b3fb0(*(undefined4 *)(iVar1 + 4),puVar3[1]);
        func_0x021b3f78(*(undefined4 *)(*(int *)(param_1 + iVar4 * 4 + 0x94) + 4),puVar3[1]);
      }
      else {
        func_0x021b3fb0(*(undefined4 *)(iVar1 + 4),puVar3[2]);
        func_0x021b3f78(*(undefined4 *)(*(int *)(param_1 + iVar4 * 4 + 0x94) + 4),puVar3[2]);
      }
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 9;
  } while (iVar4 < 6);
  return;
}

