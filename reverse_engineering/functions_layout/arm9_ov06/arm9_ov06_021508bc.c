
void FUN_021508bc(void)

{
  *(uint *)(*(int *)(DAT_02172960 + 0x104) + 0x3c) =
       *(uint *)(*(int *)(DAT_02172960 + 0x104) + 0x3c) | 1;
  FUN_0214fdb4();
  if (DAT_020afeac == 0) {
    DAT_020afeac = 0x2a30;
  }
  return;
}

