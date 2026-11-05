
void FUN_0215c9a0(void)

{
  char *pcVar1;
  uint uVar2;
  char local_8 [8];
  
  pcVar1 = local_8;
  local_8[0] = DAT_0216aa94;
  local_8[1] = DAT_0216aa95;
  local_8[2] = DAT_0216aa96;
  local_8[3] = DAT_0216aa97;
  uVar2 = 0;
  while (DAT_0216e784 != *pcVar1) {
    pcVar1 = pcVar1 + 1;
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return;
    }
  }
  *(undefined1 *)(DAT_0216e794 + uVar2 + 4) = 0x14;
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(DAT_0216e794 + uVar2 + 5) = 0;
    return;
  }
  *(undefined1 *)(DAT_0216e794 + uVar2 + 3) = 0;
  return;
}

