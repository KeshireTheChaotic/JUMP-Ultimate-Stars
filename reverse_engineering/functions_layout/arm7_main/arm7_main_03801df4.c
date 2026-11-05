
void FUN_03801df4(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (((((&DAT_03808fe8)[iVar1 * 0x24] & 1) != 0) && (param_1 <= (uint)(&DAT_03809008)[iVar1 * 9])
        ) && ((uint)(&DAT_03809008)[iVar1 * 9] <= param_2)) {
      FUN_038016bc();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

