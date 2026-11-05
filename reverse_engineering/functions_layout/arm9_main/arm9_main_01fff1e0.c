
void FUN_01fff1e0(void)

{
  int in_r3;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x20;
  puVar2 = (undefined4 *)(in_r3 + 0x200);
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

