
void FUN_02165c6c(void)

{
  if ((DAT_0216df74 & 1) == 0) {
    DAT_0216df70 = FUN_020876ac();
    DAT_0216df74 = DAT_0216df74 | 1;
  }
  FUN_02087214(0x123,&DAT_0216df70,2);
  return;
}

