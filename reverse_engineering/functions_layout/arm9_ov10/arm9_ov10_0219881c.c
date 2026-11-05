
void FUN_0219881c(void)

{
  int iVar1;
  
  if (*(char *)(DAT_021aa094 + 0x226b) == '\0') {
    *(char *)(DAT_021aa094 + 0x226b) = '\x01';
    iVar1 = FUN_02059470(0x2197c81);
    if (iVar1 != 2) {
      FUN_021988cc(0xb);
      FUN_02198974(7,0,0,0x610);
    }
  }
  return;
}

