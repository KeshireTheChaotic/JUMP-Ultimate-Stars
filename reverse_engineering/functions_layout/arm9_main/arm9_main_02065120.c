
/* JUS-SDK GX_DisableBankForARM7 [behavioral] tail-calls disableBankForX_ with the manager field
   0x020afba6, which GX_SetBankForARM7 updates */

void GX_DisableBankForARM7(void)

{
  disableBankForX_(0x20afba6);
  return;
}

