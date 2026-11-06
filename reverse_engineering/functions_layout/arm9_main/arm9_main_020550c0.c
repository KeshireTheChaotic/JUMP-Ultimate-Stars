
void FUN_020550c0(void)

{
  if (DAT_020aae98 == 0) {
    DAT_020aae98 = 1;
    FUN_02054b18();
    DAT_020aae9c = 0;
    DAT_020aaea0 = 0;
    OS_DisableIrqMask(0x10);
    return;
  }
  return;
}

