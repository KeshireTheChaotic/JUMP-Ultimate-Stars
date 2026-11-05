
void FUN_02057414(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_020aca80;
  iVar2 = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 3;
  } while (iVar2 < 8);
  return;
}

