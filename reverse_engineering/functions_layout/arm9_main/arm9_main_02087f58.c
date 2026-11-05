
void FUN_02087f58(void)

{
  int iVar1;
  
  if (DAT_0214be20 != 0) {
    *(undefined1 *)(DAT_0214be20 + 0xb) = 1;
    *(undefined1 *)(DAT_0214be20 + 0xd) = 0;
    if ((DAT_020afeb8 != '\0') || (iVar1 = FUN_0208c51c(), iVar1 != 0)) {
      *(char *)(DAT_0214be20 + 0xd) = *(char *)(DAT_0214be20 + 0xd) + '\x01';
    }
    if (*(int *)(DAT_0214be20 + 4) != 0) {
      FUN_02023894(*(undefined4 *)(*(int *)(DAT_0214be20 + 4) + 4),0xc00301,0);
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0214be20 + 4) + 4) + 0x68) + 0x6c))();
    }
  }
  return;
}

