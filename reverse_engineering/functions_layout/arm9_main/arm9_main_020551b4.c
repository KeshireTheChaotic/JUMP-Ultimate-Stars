
void FUN_020551b4(void)

{
  if (DAT_020aaea4 == 0) {
    DAT_020aaea4 = 1;
    DAT_020aaeb0 = 0;
    DAT_020aaeb4 = 0;
    OS_DisableIrqMask(4);
    DAT_020aaeac = 0;
    DAT_020aaea8 = 0;
    return;
  }
  return;
}

