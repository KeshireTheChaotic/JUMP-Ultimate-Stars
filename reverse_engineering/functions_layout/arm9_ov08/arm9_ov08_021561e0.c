
void FUN_021561e0(int param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(DAT_0216e6e0 + 99);
  *(undefined1 *)(DAT_0216e6e0 + 99) = *(undefined1 *)(param_1 + cVar1 * 4 + 0x216a860);
  cVar2 = *(char *)(DAT_0216e6e0 + 99);
  if ((cVar2 == '\r') && ((param_1 == 1 || (param_1 == 3)))) {
    *(char *)(DAT_0216e6e0 + 100) = cVar1;
  }
  else if (cVar2 == -1) {
    if ((*(char *)(DAT_0216e6e0 + 100) == '\x01') || (*(char *)(DAT_0216e6e0 + 100) == '\n')) {
      *(undefined1 *)(DAT_0216e6e0 + 99) = 10;
    }
    else {
      *(undefined1 *)(DAT_0216e6e0 + 99) = 0xb;
    }
  }
  else if (cVar2 == -2) {
    if ((*(char *)(DAT_0216e6e0 + 100) == '\x01') || (*(char *)(DAT_0216e6e0 + 100) == '\n')) {
      *(undefined1 *)(DAT_0216e6e0 + 99) = 1;
    }
    else {
      *(undefined1 *)(DAT_0216e6e0 + 99) = 2;
    }
  }
  FUN_02156268();
  FUN_02162378(8);
  return;
}

