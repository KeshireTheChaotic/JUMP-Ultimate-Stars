
void FUN_021bf848(void)

{
  if (DAT_021d51c4 == '\x02') {
    if (*(char *)(DAT_021d51bc + 0x4b2) == '\0') {
      DAT_021d51c8 = 9;
      DAT_021d51c0 = DAT_021d51bc;
    }
    else {
      DAT_021d51c8 = 4;
      DAT_021d51c0 = DAT_021d51bc + 0x220;
    }
    DAT_021d51c4 = '\x03';
  }
  return;
}

