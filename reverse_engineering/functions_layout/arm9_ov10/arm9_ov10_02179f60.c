
void FUN_02179f60(void)

{
  int iVar1;
  
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) != '\x02') {
    iVar1 = FUN_02178448();
    if (*(char *)(iVar1 + 0x15) != '\x03') {
      FUN_02179e44();
      FUN_02179f88(1);
    }
  }
  return;
}

