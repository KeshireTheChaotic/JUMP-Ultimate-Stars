
void FUN_02199c24(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02198c00();
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x2260) == 9)) && (*(char *)(iVar1 + 0x226b) != '\x01'))
     && ((iVar2 = FUN_021999d8(&DAT_021aa0a4), iVar2 != 0 &&
         (iVar1 = FUN_02059b80(&LAB_02199a04_1,iVar1 + 0x2144,iVar1 + 0xf00,0), iVar1 != 2)))) {
    FUN_021999ac(&DAT_021aa0a4);
  }
  return;
}

