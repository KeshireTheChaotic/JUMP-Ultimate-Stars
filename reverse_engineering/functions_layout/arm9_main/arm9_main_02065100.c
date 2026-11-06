
/* JUS-SDK GX_DisableBankForSubBG [behavioral] tail-calls disableBankForX_ with the manager field
   0x020afbb2, which GX_SetBankForSubBG updates */

void GX_DisableBankForSubBG(void)

{
  disableBankForX_(&DAT_020afbb2);
  return;
}

