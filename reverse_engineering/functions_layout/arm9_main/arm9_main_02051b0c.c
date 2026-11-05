
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02051b0c(int param_1,uint param_2)

{
  OS_DisableInterrupts();
  if (param_1 != 0) {
    _DAT_027c3ff8 = _DAT_027c3ff8 & ~param_2;
  }
  OS_RestoreInterrupts();
  if ((param_2 & _DAT_027c3ff8) != 0) {
    return;
  }
  do {
    FUN_02053290(&DAT_027c1040);
  } while ((param_2 & _DAT_027c3ff8) == 0);
  return;
}

