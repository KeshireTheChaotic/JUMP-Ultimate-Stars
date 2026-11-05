
void FUN_0205dfa8(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_020ae58c;
  iVar2 = 0;
  do {
    if (*(int *)(puVar1 + 0x110) << 0x1f < 0) {
      FUN_0205de00(puVar1,param_1);
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x170;
  } while (iVar2 < 4);
  return;
}

