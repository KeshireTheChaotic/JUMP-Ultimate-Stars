
void FUN_02087fb8(void)

{
  undefined4 in_r3;
  
  if (DAT_0214be20 != 0) {
    *(undefined1 *)(DAT_0214be20 + 0xb) = 0;
    if (*(int *)(DAT_0214be20 + 4) != 0) {
      FUN_02023894(*(undefined4 *)(*(int *)(DAT_0214be20 + 4) + 4),0xc00300,0,in_r3,in_r3);
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0214be20 + 4) + 4) + 0x68) + 0x6c))();
    }
  }
  return;
}

