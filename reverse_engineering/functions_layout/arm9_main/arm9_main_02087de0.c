
void FUN_02087de0(void)

{
  char cVar1;
  undefined4 in_r3;
  
  if ((*(char *)((int)DAT_0214be24 + 0x1a) == '\0') &&
     (cVar1 = FUN_02087b70(), (char)DAT_0214be24[6] != cVar1)) {
    FUN_02087b84(0,0,0,0);
  }
  if (((*DAT_0214be24 == 1) && (*(char *)((int)DAT_0214be24 + 0x1b) == '\0')) &&
     (cVar1 = FUN_02087b70(), *(char *)((int)DAT_0214be24 + 0x19) != cVar1)) {
    FUN_02087cb0(0,0,0,0,in_r3);
  }
  return;
}

