
void FUN_037fee08(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SOUND":2} io=["04000508","04000509"] */
  FUN_037fee5c();
  iVar1 = 0;
  do {
    FUN_037ff104(iVar1,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  DAT_04000508 = 0;
  DAT_04000509 = 0;
  return;
}

